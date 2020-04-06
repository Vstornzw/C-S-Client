#include "RoomListUi.h"
#include "ui_RoomListUi.h"

RoomListUi::RoomListUi(QWidget *parent) :
    QWidget(parent),
    ui_(new Ui::RoomListUi)
{
    ui_->setupUi(this);
}

RoomListUi::~RoomListUi()
{
    delete ui_;
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

}
