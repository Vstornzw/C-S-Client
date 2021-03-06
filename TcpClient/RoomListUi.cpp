﻿#include "RoomListUi.h"
#include "ui_RoomListUi.h"

//正则表达式
#include <QRegExp>
#include <QRegExpValidator>

RoomListUi::RoomListUi(QWidget *parent) :
    QWidget(parent),
    ui_(new Ui::RoomListUi)
{
    ui_->setupUi(this);
    setWindowTitle("Tcp直播间(房间列表)");

    connect(ui_->btn_QuitClient,SIGNAL(clicked(bool)),this,SLOT(onBtnQuitClicked()));
    connect(ui_->btn_DeleteUser,SIGNAL(clicked(bool)),this,SLOT(onBtnDeleteUser()));

    connect(ui_->btn_chargeMoney,SIGNAL(clicked(bool)),this,SLOT(onBtnChargeMoney()));
    connect(ui_->btn_CreatHostRoom,SIGNAL(clicked(bool)),this,SLOT(onBtnCreateHostRoom()));

    connect(ui_->listWidget,SIGNAL(itemDoubleClicked(QListWidgetItem*)),this,SLOT(onDoubleClickedHostRoom(QListWidgetItem*)));//双击加入主播房间(注意有参数传递)
}

RoomListUi::~RoomListUi()
{
    delete ui_;
}

void RoomListUi::onBtnDeleteUser() {
  emit sigDeleteUser();
}

void RoomListUi::onBtnQuitClicked() {
  emit sigCloseRoom();
}


void RoomListUi::LeRoomList(Protocol p) {

  QString name = p["user_name"].toString();
  double money = p["money"].toDouble();
  int level = p["score"].toInt();
  QString le_money = QString::number(money,'f',2);
  QString le_level = QString::number(level,10);//https://blog.csdn.net/qq_20553613/article/details/78973212

  ui_->le_namePer->setText(name);
  ui_->le_moneyPer->setText(le_money);
  ui_->le_leverPer->setText(le_level);
  ui_->le_chargeMoney->clear();

}

void RoomListUi::onBtnChargeMoney() {

  //设置正则表达：只能输入五位数，而且只能是数字
  QRegExp rx("[0-9]{5}");
  ui_->le_chargeMoney->setValidator(new QRegExpValidator(rx,this));

  QString str = ui_->le_chargeMoney->text();
  double money = str.toDouble();
  if(money <0) {
    QMessageBox::critical(this,"充值金额","输入有效金额");
    return ;
  } else if(str == nullptr){           //money == nullptr 就是错了
    QMessageBox::critical(this,"充值金额","输入为空");
    return;
  }
  emit sigChargeMoney(str);
}


void RoomListUi::onBtnCreateHostRoom() {
  emit sigCreateHostRoom();
}

QString RoomListUi::GetHostRoomNameText() {

//  设置正则表达
//  QRegExp rx("[a-zA-Z][0-9]{10}");
//  ui_->le_HostRoomName->setValidator(new QRegExpValidator(rx,this));


  QString name = ui_->le_HostRoomName->text();
  ui_->le_HostRoomName->clear();
  return name;
}

//对应着服务器中RoomManage.cpp中RoomListHandle()函数
void RoomListUi::HostRoomPlay(Protocol p) {
  int count = 1;
  ui_->listWidget->clear();
  QString header;
  header += "*******************房间号*******************";
  ui_->listWidget->addItem(header);
  while(p[QString::number(count)].isNull() == false) {
    QString values = p[QString::number(count)].toString();
    ui_->listWidget->insertItem(count,values);
    count++;
  }
}

//====观众双击进去主播房间====//
void RoomListUi::onDoubleClickedHostRoom(QListWidgetItem *item) {
  QString str = item->text();
  emit sigJoinHostRoom(str);
}

































