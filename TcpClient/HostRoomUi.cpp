#include "HostRoomUi.h"
#include "ui_HostRoomUi.h"
#include "protocol.h"

HostRoomUi::HostRoomUi(QWidget *parent) :
    QMainWindow(parent),
    ui_(new Ui::HostRoomUi)
{
    ui_->setupUi(this);

    connect(ui_->btn_close_,SIGNAL(clicked(bool)),this,SLOT(onCloseHostRoom()));
}

HostRoomUi::~HostRoomUi()
{
    delete ui_;
}

void HostRoomUi::CreateHostRoom(Protocol p) {
  //聊天记录下面的长方形区域
  ui_->textEdit->clear();
  //群成员列表下面的长方形区域
  ui_->listWidget->clear();

  QString address = p["address"].toString();
  int camera_port = p["camera_port"].toInt();
  int audio_port = p["audio_port"].toInt();
  /*设置开启视频和音频的Ip,视频的端口号，音频的端口号*/
  this->SetAddress(address,camera_port,audio_port);

  QString hostname = p["hostname"].toString();
  double money = p["money"].toDouble();
  int level = p["level"].toInt();

  QString qmoney = QString::number(money,'f',2);
  QString qlevel = QString::number(level,10);

  /*实现money和lever显示在主播房间HostRoomUi.ui页面*/
  HostRoomShow(hostname,qmoney,qlevel);

  //设置窗口标题
  this->setWindowTitle("*****" + hostname + "直播间(主播窗口)*****");
}

//==========创建主播房间初始化相关数据==========//
void HostRoomUi::HostRoomShow(QString hostname, QString money, QString level) {
  ui_->le_RoomName->setText(hostname);
  ui_->le_RoomMoney->setText(money);
  ui_->le_RoomLevel->setText(level);
}

//==========创建游客房间初始化相关数据==========//
void HostRoomUi::VisitorRoomShow(QString host_room_name, QString money,
                                 QString level, QString host_name, QString audience) {
  ui_->le_RoomName->setText(host_room_name);
  ui_->le_HostName->setText(host_name);

  ui_->le_money->setText(money);
  ui_->le_score->setText(level);
  ui_->le_account->setText(audience);
}


//===关闭直播间===//
void HostRoomUi::onCloseHostRoom() {
  QString host_name = ui_->le_RoomName->text();
  emit sigCloseHostRoom(host_name);
}

//更新游客的房间信息
void HostRoomUi::UpdateVisitorRoomInformation(Protocol p) {

  QString host_name = p["user_name"].toString();
  QString host_room_name = p["host_room_name"].toString();
  QString audience = p["audience"].toString();
  double money = p["money"].toDouble();
  int level = p["level"].toInt();
  QString address = p["address"].toString();
  int camera_port = p["camera_port"].toInt();
  int audio_port = p["audio_port"].toInt();

  /*设置开启视频和音频的IP,视频的端口号，音频的端口号*/
  this->SetAddress(address, camera_port, audio_port);

   /*把money和lever转化成QString类型为显示在HostRoomUi.ui页面*/
  QString qmoney = QString::number(money,'f',2);
  QString qlevel = QString::number(level,10);
  qDebug()<<"客户端接收到金额/积分"<<qmoney<<qlevel;
  /*实现money和lever显示在游客房间HostRoomUi.ui页面*/
  VisitorRoomShow(host_room_name, qmoney, qlevel, host_name,audience);

  /*设置窗口标题*/
  this->setWindowTitle("******" + host_room_name + "直播间(观众窗口)******");
}

void HostRoomUi::UserListPlay(Protocol p) {

  int count = 1;
  ui_->listWidget->clear();
  QString header;
  header += "*********观看成员*********";
  ui_->listWidget->addItem(header);
  while(p[QString::number(count)].isNull() == false) {
    QString values = p[QString::number(count)].toString();
    ui_->listWidget->insertItem(count,values);
    count++;
  }

}















