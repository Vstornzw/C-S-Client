#ifndef CLIENTHANDLE
#define CLIENTHANDLE

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class ClientHandle;
}

class ClientHandle : public QWidget
{
    Q_OBJECT

public:
    explicit ClientHandle(QWidget *parent = 0);
    ~ClientHandle();

private:
    Ui::ClientHandle *ui_;
    QTcpSocket *tcp_socket;
};

#endif // CLIENTHANDLE
