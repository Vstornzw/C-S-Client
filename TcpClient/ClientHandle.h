﻿#ifndef CLIENTHANDLE
#define CLIENTHANDLE

#include <QWidget>
#include <QTcpSocket>
#include <protocol.h>
#include <WindowManage.h>

#include<QKeyEvent>
#include<QEvent>
namespace Ui {
class ClientHandle;
}

class ClientHandle : public QWidget
{
  Q_OBJECT

public:
  explicit ClientHandle(QWidget *parent = 0);
  ~ClientHandle();
  void UiDesign();


protected:
  virtual bool eventFilter(QObject *obj, QEvent *event);

private slots:
  void onReadyReadSlot();
  void onBtnRegistClicked();
  void onBtnLoginClicked();

  void onQuitCloseRoom();
  void onDeleteUser();
  //账户充值
  void onChargeMoney(QString str);
  //创建主播房间
  void onHostRoomCreate();


private:
  Ui::ClientHandle *ui_;
  QTcpSocket *tcp_socket;
};

#endif // CLIENTHANDLE
