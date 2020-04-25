#ifndef HOSTROOMUI_H
#define HOSTROOMUI_H

#include <QMainWindow>
#include <QHostAddress>
#include <QHostAddress>
#include "protocol.h"

namespace Ui {
class HostRoomUi;
}


class HostRoomUi : public QMainWindow {
    Q_OBJECT

 public:
  explicit HostRoomUi(QWidget *parent = 0);
  ~HostRoomUi();
  //创建主播房间
  void CreateHostRoom(Protocol p);
  /*设置开启视频和音频的IP,视频的端口号，音频的端口号*/
  void SetAddress(QString address,int camera_port,int audio_port) {
    this->groupAddress.setAddress(address);
    this->camera_Port = camera_port;
    this->audio_Port = audio_port;
  }
  /*实现money和lever显示在主播房间HostRoomUi.ui页面*/
  void HostRoomShow(QString hostname,QString money,QString level);
  //更新游客的房间信息
  void UpdateVisitorRoomInformation(Protocol p);
  /*实现money和lever显示在游客房间HostRoomUi.ui页面*/
  void VisitorRoomShow(QString host_room_name, QString money, QString level, QString host_name, QString audience);
  //HostRoomUi.ui界面上"群成员列表"展现问题
  void UserListPlay(Protocol p);

 signals:
  void sigCloseHostRoom(QString str);

 private slots:
  void onCloseHostRoom();


 private:
  Ui::HostRoomUi *ui_;
  /*HostAddress类提供一个IP地址*/
  QHostAddress groupAddress;
  /*视频端口*/
  int camera_Port;
  /*音频端口*/
  int audio_Port;
};

#endif // HOSTROOMUI_H
