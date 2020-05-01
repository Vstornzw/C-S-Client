#include "HostRoomUi.h"
#include "ui_HostRoomUi.h"
#include "protocol.h"
#include <QCameraInfo>

HostRoomUi::HostRoomUi(QWidget *parent) :
    QMainWindow(parent),
    ui_(new Ui::HostRoomUi)
{
    ui_->setupUi(this);

    write_socket_ = new QUdpSocket(this);//主播摄像头
    read_socket_  = new QUdpSocket(this);//观众摄像头
    UdpCamera();                         //UDP视频协议

    connect(ui_->btn_close_,SIGNAL(clicked(bool)),this,SLOT(onCloseHostRoom()));

    connect(ui_->btn_view_open_,SIGNAL(clicked(bool)),this,SLOT(onViewOpen()));
    connect(ui_->btn_view_close_,SIGNAL(clicked(bool)),this,SLOT(onViewClose()));
}

HostRoomUi::~HostRoomUi()
{
    delete ui_;
}

void HostRoomUi::CreateHostRoom(Protocol p) {
  //聊天记录下面的长方形区域
  ui_->textEdit->clear();
  //群成员列表下面的长方形区域
  ui_->listWidget->clear();

  //这样做：避免游客先加入主播房间，再自己创建房间时候，le_Hostname一栏是上一个加入主播的主播名（实际上游客创建直播间，这一栏为空）
  ui_->le_HostName->clear();

  QString address = p["address"].toString();
  int camera_port = p["camera_port"].toInt();
  int audio_port = p["audio_port"].toInt();
  /*设置开启视频和音频的Ip,视频的端口号，音频的端口号*/
  this->SetAddress(address,camera_port,audio_port);

  QString hostname = p["hostname"].toString();
  double money = p["money"].toDouble();
  int level = p["level"].toInt();

  QString qmoney = QString::number(money,'f',2);
  QString qlevel = QString::number(level,10);

  /*实现money和lever显示在主播房间HostRoomUi.ui页面*/
  HostRoomShow(hostname,qmoney,qlevel);

  //设置窗口标题
  this->setWindowTitle("*****" + hostname + "直播间(主播窗口)*****");
}

//==========创建主播房间初始化相关数据==========//
void HostRoomUi::HostRoomShow(QString hostname, QString money, QString level) {
  ui_->le_RoomName->setText(hostname);
  ui_->le_RoomMoney->setText(money);
  ui_->le_RoomLevel->setText(level);
}

//==========创建游客房间初始化相关数据==========//
void HostRoomUi::VisitorRoomShow(QString host_room_name, QString money,
                                 QString level, QString host_name, QString audience) {
  ui_->le_RoomName->setText(host_room_name);
  ui_->le_HostName->setText(host_name);

  ui_->le_money->setText(money);
  ui_->le_score->setText(level);
  ui_->le_account->setText(audience);
}


//===关闭直播间===//
void HostRoomUi::onCloseHostRoom() {
  QString host_name = ui_->le_RoomName->text();
  emit sigCloseHostRoom(host_name);
}

//更新游客的房间信息
void HostRoomUi::UpdateVisitorRoomInformation(Protocol p) {

  QString host_name = p["user_name"].toString();
  QString host_room_name = p["host_room_name"].toString();
  QString audience = p["audience"].toString();
  double money = p["money"].toDouble();
  int level = p["level"].toInt();
  QString address = p["address"].toString();
  int camera_port = p["camera_port"].toInt();
  int audio_port = p["audio_port"].toInt();

  /*设置开启视频和音频的IP,视频的端口号，音频的端口号*/
  this->SetAddress(address, camera_port, audio_port);

   /*把money和lever转化成QString类型为显示在HostRoomUi.ui页面*/
  QString qmoney = QString::number(money,'f',2);
  QString qlevel = QString::number(level,10);
  qDebug()<<"客户端接收到金额/积分"<<qmoney<<qlevel;
  /*实现money和lever显示在游客房间HostRoomUi.ui页面*/
  VisitorRoomShow(host_room_name, qmoney, qlevel, host_name,audience);

  /*设置窗口标题*/
  this->setWindowTitle("******" + host_room_name + "直播间(观众窗口)******");
}

void HostRoomUi::UserListPlay(Protocol p) {

  int count = 1;
  ui_->listWidget->clear();
  QString header;
  header += "*********观看成员*********";
  ui_->listWidget->addItem(header);
  while(p[QString::number(count)].isNull() == false) {
    QString values = p[QString::number(count)].toString();
    ui_->listWidget->insertItem(count,values);
    count++;
  }

}

//=================开启摄像头按钮=================//
void HostRoomUi::onViewOpen() {
  if(ui_->le_HostName->text() == nullptr) {//主播直播间不显示主播名
    camera_->start();
  } else {
    //绑定本地端口
    read_socket_->bind(QHostAddress::AnyIPv4,
                       camera_Port,
                       QUdpSocket::ShareAddress|
                       QUdpSocket::ReuseAddressHint);
    read_socket_->joinMulticastGroup(groupAddress);//join multicast Group加入多播组
  }

}

void HostRoomUi::UdpCamera() {
  //摄像头代码
  QCameraInfo info = QCameraInfo::defaultCamera();
  camera_ = new QCamera(info,this);
  video_suface_ = new VideoSuface(this);
  camera_->setViewfinder(video_suface_);

  connect(video_suface_,SIGNAL(sigFrameChanged(QVideoFrame)),this,SLOT(onFrameChange(QVideoFrame)));
  connect(this->read_socket_,SIGNAL(readyRead()),this,SLOT(onReadyReadSlot()));
}

void HostRoomUi::onFrameChange(QVideoFrame  frame) {
  //QVideoFrame--->QImage
  frame.map(QAbstractVideoBuffer::ReadOnly);
 /*
    QImage(uchar *data,         //图片字节数组的首地址
           int width,           //图片的宽度
           int height,          //图片高度
           int bytesPerLine,    //图片每行的字节数
           Format format,       //图片处理格式
          );
 */
  QImage img(
        frame.bits(),
        frame.width(),
        frame.height(),
        frame.bytesPerLine(),
        QVideoFrame::imageFormatFromPixelFormat(frame.pixelFormat())
        );

  /*
  图片太大会可能导致发送失败，所以将图片设置的尽可能小一点，但会失真
  img = img.scaled(40, 30);
  */

  //旋转图片180
  QMatrix matrix;
  matrix.rotate(180);
  img = img.transformed(matrix);

  //QImage--->QPixmp
  QPixmap pix_map = QPixmap::fromImage(img);
  //让图片适用label的大小
  pix_map = pix_map.scaled(ui_->lab_view->size());
  //让图片显示到lable上
  ui_->lab_view->setPixmap(pix_map);
  qDebug()<<img.size();
  QByteArray byte;
  QBuffer buffer(&byte);
  img.save(&buffer, "JPEG");

  qDebug()<<byte.size();

  //将图片信息写入到制定端口,数据太大会导致发送失败返回-1，具体可参考帮助文档QUdpSocket::writeDatagram
  //注意writeDatagram的地址和端口要和接收端相同（端口不宜过小，以免和其他冲突

  write_socket_->writeDatagram(byte,groupAddress,camera_Port);//----------------------------------------------------------------------=
}

void HostRoomUi::onReadyReadSlot() {
  //直接读取异步监听时接收到的数据包
  quint64 size = read_socket_->pendingDatagramSize();

  //提供用QByteArray 读写内存中IO缓存区的接口，若无传参内部默认自动创建一个QByteArray;
  //对IO缓存区读写操作等效于像IO设备读写数据
  QByteArray buff;

  //字节矩阵，大小用qint64描述，适合操作：1大量数据2字符串数组3二进制01数据，节省内存，更加方便
  //一般用const char*初始化
  //默认采用深拷贝，可以指定为浅拷贝
  buff.resize(size);
  //为缓冲区规定一个masize(没必要用那么大，刚好装下图片就行)
  read_socket_->readDatagram(buff.data(), buff.size());
  //数据包只支持一维操作
  //操作QBuffer像在操作文件（其实原理都是差不多，各自都是内存中一块特殊区域嘛）
  QBuffer buffer(&buff);

  //可读入磁盘文件，设备文件中的图像，以及其他图像数据如pixmap和image,相比较更加专业
  //buffer属于设备文件一类
  //专业地读取设备文件的图像数据
  QImageReader reader(&buffer,"JPEG");

  //read()方法用来读取设备图像，也可以读取视频，读取成功返回QImage*,否则返回NULL
  QImage image = reader.read();


  //格式转换
  QPixmap pix = QPixmap::fromImage(image);
  ui_->lab_view->setPixmap(pix.scaled(ui_->lab_view->size()));

}

//关闭摄像头
void HostRoomUi::onViewClose() {
  if(ui_->le_HostName->text() == nullptr){  //主播间不显示主播名字
    camera_->stop();                        //主播可以停止录制
    ui_->lab_view->clear();                 //主播可以关闭页面
  } else {
    this->read_socket_->leaveMulticastGroup(groupAddress);
    this->read_socket_->abort();
    ui_->lab_view->clear();                 //游客可以关闭页面
  }
}






