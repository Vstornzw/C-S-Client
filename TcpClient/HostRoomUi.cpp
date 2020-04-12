#include "HostRoomUi.h"
#include "ui_HostRoomUi.h"
#include "protocol.h"

HostRoomUi::HostRoomUi(QWidget *parent) :
    QMainWindow(parent),
    ui_(new Ui::HostRoomUi)
{
    ui_->setupUi(this);
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
