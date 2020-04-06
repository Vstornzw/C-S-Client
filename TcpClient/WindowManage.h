#ifndef WINDOWMANAGE_H
#define WINDOWMANAGE_H
#include "RoomListUi.h"
#include "HostRoomUi.h"

class WindowManage {
public:
  WindowManage();
  static WindowManage* GetInstance();

  RoomListUi* GetRoomListUi();
  HostRoomUi* GetHostListUi();

private:

  static WindowManage* instance;//单例类的唯一实例对象定义为静态成员变量
  RoomListUi *room_ui_;//构造函数
  HostRoomUi *host_ui_;
};

#endif // WINDOWMANAGE_H


/*
这里解释一下：饿汉模式

将单例类的唯一实例对象定义为静态成员变量，当程序开始运行，实例对象就已经创建完成。
优点：加载进行时静态创建单例对象，线程安全。
缺点：无论使用与否，总要创建，浪费内存。
*/
