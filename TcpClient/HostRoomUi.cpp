#include "HostRoomUi.h"
#include "ui_HostRoomUi.h"

HostRoomUi::HostRoomUi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HostRoomUi)
{
    ui->setupUi(this);
}

HostRoomUi::~HostRoomUi()
{
    delete ui;
}
