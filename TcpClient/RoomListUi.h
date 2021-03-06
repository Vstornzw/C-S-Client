﻿#ifndef ROOMLISTUI_H
#define ROOMLISTUI_H

#include <QWidget>
#include "protocol.h"
#include <QMessageBox>
#include <protocol.h>
#include <QListWidgetItem>
namespace Ui {
class RoomListUi;
}

class RoomListUi : public QWidget
{
  Q_OBJECT

public:
  explicit RoomListUi(QWidget *parent = 0);
  ~RoomListUi();

  //展示在RoomListUi界面上的相关信息
  void LeRoomList(Protocol p);
  //获取主播房间名：le_HostRoomName->text()
  QString GetHostRoomNameText();
  //直播间列表--显示在房间左边的那个链表里面
  void HostRoomPlay(Protocol p);
signals:
  void sigCloseRoom();
  void sigDeleteUser();
  //账户充值
  void sigChargeMoney(QString str);
  //发送创建主播房间信号
  void sigCreateHostRoom();
  //加入主播直播间
  void sigJoinHostRoom(QString str);

private slots:
  //退出账户
  void onBtnQuitClicked();
  //注销账户
  void onBtnDeleteUser();
  //账户充值
  void onBtnChargeMoney();
  //创建主播房间
  void onBtnCreateHostRoom();
  //双击加入主播房间(注意有参数传递)
  void onDoubleClickedHostRoom(QListWidgetItem *item);
private:
  Ui::RoomListUi *ui_;
};

#endif // ROOMLISTUI_H
