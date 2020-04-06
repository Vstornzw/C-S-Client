/********************************************************************************
** Form generated from reading UI file 'HostRoomUi.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOSTROOMUI_H
#define UI_HOSTROOMUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HostRoomUi
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HostRoomUi)
    {
        if (HostRoomUi->objectName().isEmpty())
            HostRoomUi->setObjectName(QStringLiteral("HostRoomUi"));
        HostRoomUi->resize(800, 600);
        menubar = new QMenuBar(HostRoomUi);
        menubar->setObjectName(QStringLiteral("menubar"));
        HostRoomUi->setMenuBar(menubar);
        centralwidget = new QWidget(HostRoomUi);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        HostRoomUi->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(HostRoomUi);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        HostRoomUi->setStatusBar(statusbar);

        retranslateUi(HostRoomUi);

        QMetaObject::connectSlotsByName(HostRoomUi);
    } // setupUi

    void retranslateUi(QMainWindow *HostRoomUi)
    {
        HostRoomUi->setWindowTitle(QApplication::translate("HostRoomUi", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HostRoomUi: public Ui_HostRoomUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOSTROOMUI_H
