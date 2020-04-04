/********************************************************************************
** Form generated from reading UI file 'ClientHandle.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTHANDLE_H
#define UI_CLIENTHANDLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientHandle
{
public:

    void setupUi(QWidget *ClientHandle)
    {
        if (ClientHandle->objectName().isEmpty())
            ClientHandle->setObjectName(QStringLiteral("ClientHandle"));
        ClientHandle->resize(400, 300);

        retranslateUi(ClientHandle);

        QMetaObject::connectSlotsByName(ClientHandle);
    } // setupUi

    void retranslateUi(QWidget *ClientHandle)
    {
        ClientHandle->setWindowTitle(QApplication::translate("ClientHandle", "ClientHandle", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClientHandle: public Ui_ClientHandle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTHANDLE_H
