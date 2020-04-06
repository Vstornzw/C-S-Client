#ifndef HOSTROOMUI_H
#define HOSTROOMUI_H

#include <QMainWindow>

namespace Ui {
class HostRoomUi;
}

class HostRoomUi : public QMainWindow
{
    Q_OBJECT

public:
    explicit HostRoomUi(QWidget *parent = 0);
    ~HostRoomUi();

private:
    Ui::HostRoomUi *ui;
};

#endif // HOSTROOMUI_H
