#include "ClientHandle.h"
#include "ui_ClientHandle.h"
#include <QHostAddress>

ClientHandle::ClientHandle(QWidget *parent) :
    QWidget(parent),
    ui_(new Ui::ClientHandle)
{
    ui_->setupUi(this);

    tcp_socket = new QTcpSocket(this);
    tcp_socket->connectToHost(QHostAddress::LocalHost,8888);

}

ClientHandle::~ClientHandle()
{
    delete ui_;
}


