#include "WindowManage.h"


WindowManage::WindowManage() {

  room_ui_ = new RoomListUi();
  host_ui_ = new HostRoomUi();
}

WindowManage* WindowManage::instance = 0;

WindowManage* WindowManage::GetInstance() {

  if(instance == nullptr) {

    instance = new WindowManage;
  }
  return instance;
}

RoomListUi* WindowManage::GetRoomListUi() {
  return this->room_ui_;
}

HostRoomUi* WindowManage::GetHostListUi() {
  return this->host_ui_;
}
