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
