﻿#ifndef ROOMLISTUI_H
#define ROOMLISTUI_H

#include <QWidget>
#include "protocol.h"
#include <QMessageBox>
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

signals:
  void sigCloseRoom();
  void sigDeleteUser();
  //账户充值
  void sigChargeMoney(QString str);

private slots:
  //退出账户
  void onBtnQuitClicked();
  //注销账户
  void onBtnDeleteUser();
  //账户充值
  void onBtnChargeMoney();
private:
  Ui::RoomListUi *ui_;
};

#endif // ROOMLISTUI_H
