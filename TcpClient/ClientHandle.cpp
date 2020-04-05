﻿#include "ClientHandle.h"
#include "ui_ClientHandle.h"
#include <QHostAddress>
#include <QMessageBox>
#include <QDebug>


ClientHandle::ClientHandle(QWidget *parent) :
    QWidget(parent),
    ui_(new Ui::ClientHandle)
{
    ui_->setupUi(this);

    tcp_socket = new QTcpSocket(this);
    tcp_socket->connectToHost(QHostAddress::LocalHost,8888);

    connect(this->tcp_socket,SIGNAL(readyRead()),this,SLOT(onReadyReadSlot()));

    connect(ui_->btnRegist,SIGNAL(clicked(bool)),this,SLOT(onBtnRegistClicked()));
    this->UiDesign();

}

//===主界面设置背景颜色
void ClientHandle::UiDesign()
{
    this->setWindowTitle("TCP客户端");
    this->setStyleSheet("color: black;");
    ui_->btnRegist->setStyleSheet("QPushButton{"
                                 "background-color:green;"   //背景颜色蓝色
                                 "color: black;"
                                 "border-radius: 10px;"     //圆角
                                 "border: 2px groove gray;"
                                 "border-style: outset;}"
                                 "QPushButton:pressed{background-color:rgb(85, 170, 255);"
                                 "border-style: inset; ""}");
    ui_->btnRegist->setFlat (true);
    ui_->btnLogin->setStyleSheet("QPushButton{"
                                 "background-color:green;"   //背景颜色绿色
                                 "color: black;"
                                 "border-radius: 10px;"     //圆角
                                 "border: 2px groove gray;"
                                 "border-style: outset;}"
                                 "QPushButton:pressed{background-color:rgb(85, 170, 255);"
                                 "border-style: inset; ""}");
    ui_->btnLogin->setFlat (true);
}

void ClientHandle::onReadyReadSlot() {

    Protocol p;

    QByteArray byte = this->tcp_socket->readAll();
    int len = 0;
    while((len = p.unpack(byte))>0) {
      byte = byte.mid(len);
      switch(p.GetType()) {
      case Protocol::none:
        break;
      case Protocol::Regitst:
          if(p["result"].toString() == "registTrue") {
            QMessageBox::information(this,"注册","注册成功");
          } else if (p["result"].toString() == "registFalse") {
            QMessageBox::information(this,"注册","注册失败");
          } else {
            QMessageBox::information(this,"注册","未知错误");
          }
        break;



      default:
        break;
      }
    }
}

ClientHandle::~ClientHandle()
{
    delete ui_;
}

//============注册槽函数============//
void ClientHandle::onBtnRegistClicked() {

  //获取信息打包发送服务器端
    QString name = ui_->lineName->text();
    QString pswd = ui_->linePwd->text();

    if(name == nullptr || pswd == nullptr) {
      QMessageBox::critical(this,"账户注册","账号/密码为空");
      return ;
    }
    Protocol p(Protocol::Regitst);
    p["user_name"] = name;//创建键值对
    p["user_pwd"] = pswd;

    //发送到服务器
    this->tcp_socket->write(p.pack());
}
