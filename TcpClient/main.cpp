#include "ClientHandle.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ClientHandle w;
    w.show();

    return a.exec();
}
