#ifndef HOSTROOMUI_H
#define HOSTROOMUI_H

#include <QMainWindow>
#include <QHostAddress>
#include <QHostAddress>
#include "protocol.h"

//在TcpClient.pro文件里面要添加代码
#include <QCamera>
#include <QUdpSocket>
#include "VideoSuface.h"
#include <QBuffer>
#include <QHostAddress>
#include <QImageReader>

#include <QAudioDeviceInfo>
#include <QAudioInput>
#include <QAudioOutput>
//#include <QMultimedia>

namespace Ui {
class HostRoomUi;
}


struct AudioPackage {

  char data[1024];
  int data_len;
};

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

  //UDP视频协议
  void UdpCamera();

  //UDP音频协议
  void UdpAudio();

 signals:
  void sigCloseHostRoom(QString str);

 private slots:
  void onCloseHostRoom();

  //开启摄像头
  void onViewOpen();
  void onFrameChange(QVideoFrame  frame);
  void onReadyReadSlot();
  void onViewClose();

  //开启音频
  void onAudioOpen();
  void onCaptureDataFromDevice();
  void onReadyReadAudio();
  void onAudioClose();

 private:
  Ui::HostRoomUi *ui_;
  /*HostAddress类提供一个IP地址*/
  QHostAddress groupAddress;
  /*视频端口*/
  int camera_Port;
  /*音频端口*/
  int audio_Port;

  QCamera *camera_;
  VideoSuface *video_suface_;

  QUdpSocket *write_socket_;
  QUdpSocket *read_socket_;

  QUdpSocket *write_socket_audio_;
  QUdpSocket *read_socket_audio_;

  QAudioInput *audio_input_;
  QAudioOutput *audio_output_;
  QIODevice *audio_input_in_device_;
  QIODevice *audio_output_in_device_;

};

#endif // HOSTROOMUI_H
