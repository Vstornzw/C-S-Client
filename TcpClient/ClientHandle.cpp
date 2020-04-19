#include "ClientHandle.h"
#include "ui_ClientHandle.h"
#include <QHostAddress>
#include <QMessageBox>
#include <QDebug>

ClientHandle::ClientHandle(QWidget *parent) :
    QWidget(parent),
    ui_(new Ui::ClientHandle) {

  ui_->setupUi(this);
  //===RoomListUi和HostRoomUi函数在单例中完成===//
  RoomListUi* room_ui_ = WindowManage::GetInstance()->GetRoomListUi();
  HostRoomUi* host_ui_ = WindowManage::GetInstance()->GetHostListUi();

  tcp_socket = new QTcpSocket(this);
  tcp_socket->connectToHost(QHostAddress::LocalHost,8888);

  //安装一个监听，为了Enter
  ui_->linePwd->installEventFilter(this);

  connect(this->tcp_socket,SIGNAL(readyRead()),this,SLOT(onReadyReadSlot()));


  connect(ui_->btnRegist,SIGNAL(clicked(bool)),this,SLOT(onBtnRegistClicked()));
  connect(ui_->btnLogin,SIGNAL(clicked(bool)),this,SLOT(onBtnLoginClicked()));


  connect(room_ui_,SIGNAL(sigCloseRoom()),this,SLOT(onQuitCloseRoom()));
  connect(room_ui_,SIGNAL(sigDeleteUser()),this,SLOT(onDeleteUser()));
  connect(room_ui_,SIGNAL(sigChargeMoney(QString)),this,SLOT(onChargeMoney(QString)));//这里参数！！！注意传递了参数值

  connect(room_ui_,SIGNAL(sigCreateHostRoom()),this,SLOT(onHostRoomCreate()));


  connect(host_ui_,SIGNAL(sigCloseHostRoom(QString)),this,SLOT(onCloseHostRoom(QString)));

  this->UiDesign();

}

//===主界面设置背景颜色
void ClientHandle::UiDesign()
{
    this->setWindowTitle("TCP客户端");
    this->setStyleSheet("color: black;");
    ui_->btnRegist->setStyleSheet("QPushButton{"
                                 "background-color:green;"   //背景颜色蓝色
                                 "color: black;"
                                 "border-radius: 10px;"     //圆角
                                 "border: 2px groove gray;"
                                 "border-style: outset;}"
                                 "QPushButton:pressed{background-color:rgb(85, 170, 255);"
                                 "border-style: inset; ""}");
    ui_->btnRegist->setFlat (true);
    ui_->btnLogin->setStyleSheet("QPushButton{"
                                 "background-color:green;"   //背景颜色绿色
                                 "color: black;"
                                 "border-radius: 10px;"     //圆角
                                 "border: 2px groove gray;"
                                 "border-style: outset;}"
                                 "QPushButton:pressed{background-color:rgb(85, 170, 255);"
                                 "border-style: inset; ""}");
    ui_->btnLogin->setFlat (true);
}

//===函数功能：按enter发送信息;返回值：bool===//

bool ClientHandle::eventFilter(QObject *obj, QEvent *event) {

  if(obj == ui_->linePwd) {
    //是否是键盘事件
    //QEvent::type()可以返回用于处理键盘按键的QEvent::KeyPress
    if(event->type() == QEvent::KeyPress) {

      //将QEvent类型转化为QKeyEvent
      QKeyEvent *key_event = dynamic_cast<QKeyEvent*>(event);
      //判定是否是键盘上的enter
      //Qt::Key_Return字母键盘回车键
      //Qt::Key_Entersjs数字小键盘回车键
      if(key_event->key() == Qt::Key_Return || key_event->key() ==  Qt::Key_Enter) {
        ClientHandle::onBtnLoginClicked();              //执行发送按钮的事件
      } else {
        return false;
      }
    } else {
      return false;
    }
  }
  return QWidget::eventFilter(obj,event);

}

//=====客户端从Tcp协议中读取到的数据，包含返回包并解析=====//
void ClientHandle::onReadyReadSlot() {

    Protocol p;
    RoomListUi* room_ui_ = WindowManage::GetInstance()->GetRoomListUi();
    HostRoomUi* host_ui_ = WindowManage::GetInstance()->GetHostListUi();

    QByteArray byte = this->tcp_socket->readAll();
    int len = 0;
    while((len = p.unpack(byte))>0) {
      byte = byte.mid(len);
      switch(p.GetType()) {
      case Protocol::none:
        break;
      case Protocol::Regitst:
          if(p["result"].toString() == "registTrue") {
            QMessageBox::information(this,"注册","注册成功");
          } else if (p["result"].toString() == "registFalse") {
            QMessageBox::critical(this,"注册","注册失败");
          } else {
            QMessageBox::critical(this,"注册","未知错误");
          }
        break;
      case Protocol::Login:
        if(p["result"].toString() == "LoginTrue") {
          this->close();
          room_ui_->LeRoomList(p);
          room_ui_->show();
        } else if(p["result"].toString() == "LoginFalse") {
          QMessageBox::critical(this,"登录","登录失败");
        } else {
          QMessageBox::critical(this,"登录","未知错误");
        }
        break;
      case Protocol::QuitClient:
        if(p["result"].toString() == "QuitRoomTrue") {
          QMessageBox::information(this,"退出客户端","下线成功");
          room_ui_->close();
          host_ui_->close();//--------------------------------------------------------------------------
          this->show();
          this->ui_->lineName->clear();
          this->ui_->linePwd->clear();
        } else if (p["result"].toString() == "QuitRoomFalse") {
          QMessageBox::critical(this,"退出客户端","下线失败");
        } else {
          QMessageBox::critical(this,"退出客户端","未知错误");
        }
        break;
      case Protocol::DeleteUser:
        if(p["result"].toString() == "DeleteUserTrue"){
          QMessageBox::information(this,"注销账户","注销成功");
          room_ui_->close();
          host_ui_->close();//--------------------------------------------------------------------------
          this->show();
          this->ui_->lineName->clear();
          this->ui_->linePwd->clear();
        } else if(p["result"] == "DeleteUserFalse") {
          QMessageBox::critical(this,"注销账户","注销失败");
        } else {
          QMessageBox::critical(this,"注销账户","未知错误");
        }
        break;
      case Protocol::Charge:
        if(p["result"].toString() == "ChargeMoneyTrue") {
          QMessageBox::information(this,"账户充值","充值成功");
          room_ui_->LeRoomList(p);
        } else if(p["result"].toString() == "ChargeMoneyFalse") {
          QMessageBox::critical(this,"账户充值","充值失败");
        } else {
          QMessageBox::critical(this,"账户充值","未知错误");
        }
        break;
      case Protocol::CreateRoom:
        if(p["result"].toString() == "CreateRoomTrue") {
          host_ui_->CreateHostRoom(p);
          room_ui_->hide();
          host_ui_->show();
        } else if(p["result"].toString() == "CreateRoomFalse") {
          QMessageBox::critical(this,"房间","创建失败");
        } else {
          QMessageBox::critical(this,"房间","未知错误");
        }
      case Protocol::RoomList:
        if(p["result"].toString() == "RoomListTrue") {
          /*直播间列表--显示在房间左边的那个链表里面*/
          qDebug()<<"aaa";
          room_ui_->HostRoomPlay(p);
        } else if (p["result"].toString() == "RoomListFalse") {
          QMessageBox::critical(this, "直播间列表", "刷新失败");
        }else{
          QMessageBox::critical(this, "直播间列表", "未知错误");
        }
      break;
      case Protocol::CloseRoom:
        if(p["result"].toString() == "CloseHostRoomTrue") {
          host_ui_->close();
          room_ui_->show();
        }else if(p["result"].toString() == "CloseHostRoomFalse"){
          QMessageBox::critical(this, "关闭直播间", "关闭失败");
      }else{
          QMessageBox::critical(this, "关闭直播间", "未知错误");
      }
      break;
      case Protocol::RoomListPer:
        if(p["result"].toString() == "RoomListPerTrue") {
          room_ui_->LeRoomList(p);
        } else if(p["result"].toString() == "RoomListPerFalse"){
          QMessageBox::critical(this, "大厅账户刷新", "刷新失败!!");
        } else {
          QMessageBox::critical(this, "大厅账户刷新", "未知错误");
        }
        break;
      default:
        break;
      }
    }
}

ClientHandle::~ClientHandle()
{
    delete ui_;
}

//============注册槽函数============//
void ClientHandle::onBtnRegistClicked() {

  //获取信息打包发送服务器端
    QString name = ui_->lineName->text();
    QString pswd = ui_->linePwd->text();

    if(name == nullptr || pswd == nullptr) {
      QMessageBox::critical(this,"账户注册","账号/密码为空");
      return ;
    }
    Protocol p(Protocol::Regitst);
    p["user_name"] = name;//创建键值对
    p["user_pwd"] = pswd;

    //发送到服务器
    this->tcp_socket->write(p.pack());
}

//============登录槽函数============//
void ClientHandle::onBtnLoginClicked() {

  QString name = ui_->lineName->text();
  QString pswd = ui_->linePwd->text();

  Protocol p(Protocol::Login);
  p["user_name"] = name;
  p["user_pwd"] = pswd;

  this->tcp_socket->write(p.pack());
}

//==============room账户下线(对应RoomListUi.ui页面发来的信号)==============//

void ClientHandle::onQuitCloseRoom() {
  QString name = ui_->lineName->text();//ui_界面只是隐藏了 不是关闭了！！
  QString comment = "关闭客户端";
  Protocol p(Protocol::QuitClient);
  p["user_name"] = name;
  p["comment"] = comment;
  qDebug()<<"客户端发出账户名："<<name;
  this->tcp_socket->write(p.pack());
}

//=========账户注销==============//

void ClientHandle::onDeleteUser() {
  QString name = ui_->lineName->text();
  QString comment = "注销账户";
  Protocol p(Protocol::DeleteUser);
  p["user_name"] = name;
  p["comment"] = comment;
  qDebug()<<"客户端发出账户名"<<name;
  this->tcp_socket->write(p.pack());
}

//======账户充值=====//
void ClientHandle::onChargeMoney(QString str) {

  QString name = ui_->lineName->text();
  double money = str.toDouble();
  qDebug()<<"客户端发出充值金额："<<money;

  Protocol p(Protocol::Charge);
  p["user_name"] = name;
  p["money"] = money;
  this->tcp_socket->write(p.pack());

}

//======创建主播房间======//
void ClientHandle::onHostRoomCreate() {
  RoomListUi* room_ui_ = WindowManage::GetInstance()->GetRoomListUi();
  QString name = ui_->lineName->text();
  QString pswd = ui_->linePwd->text();
  QString room_name = room_ui_->GetHostRoomNameText();

  Protocol p(Protocol::CreateRoom);
  p["user_name"] = name;
  p["user_pwd"] = pswd;
  p["room_name"] = room_name;
  this->tcp_socket->write(p.pack());
}

//======关闭主播房间======//
void ClientHandle::onCloseHostRoom(QString str) {
  QString name = ui_->lineName->text();
  Protocol p(Protocol::CloseRoom);
  p["host_name"] = str;
  p["user_name"] = name;
  qDebug() <<"客户端发出房间名/账户名:" << str << name;
  this->tcp_socket->write(p.pack());
}





























