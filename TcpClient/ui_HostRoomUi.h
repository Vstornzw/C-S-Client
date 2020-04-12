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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HostRoomUi
{
public:
    QWidget *centralwidget;
    QLineEdit *le_chatsend;
    QPushButton *pushButton;
    QLabel *lab_view;
    QLabel *lab_barrage;
    QTextEdit *textEdit;
    QListWidget *listWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *le_RoomName;
    QLabel *label_5;
    QLineEdit *le_RoomMoney;
    QLabel *label_6;
    QLineEdit *le_RoomLevel;
    QLabel *label_7;
    QLineEdit *le_HostName;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *le_account;
    QLabel *label_2;
    QLineEdit *le_money;
    QLabel *label_3;
    QLineEdit *le_score;
    QWidget *widget2;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *widget3;
    QGridLayout *gridLayout_4;
    QLabel *label_9;
    QPushButton *pushButton_7;
    QWidget *widget4;
    QGridLayout *gridLayout_5;
    QLabel *label_10;
    QPushButton *pushButton_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HostRoomUi)
    {
        if (HostRoomUi->objectName().isEmpty())
            HostRoomUi->setObjectName(QStringLiteral("HostRoomUi"));
        HostRoomUi->resize(1107, 612);
        centralwidget = new QWidget(HostRoomUi);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        le_chatsend = new QLineEdit(centralwidget);
        le_chatsend->setObjectName(QStringLiteral("le_chatsend"));
        le_chatsend->setGeometry(QRect(50, 520, 491, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(550, 520, 75, 31));
        lab_view = new QLabel(centralwidget);
        lab_view->setObjectName(QStringLiteral("lab_view"));
        lab_view->setGeometry(QRect(60, 60, 701, 361));
        lab_view->setStyleSheet(QString::fromUtf8("\345\274\271\n"
"\n"
"\345\271\225\n"
"\n"
"\346\230\276\n"
"\n"
"\347\244\272\n"
"\n"
"\345\214\272\n"
"\n"
"\345\237\237"));
        lab_barrage = new QLabel(centralwidget);
        lab_barrage->setObjectName(QStringLiteral("lab_barrage"));
        lab_barrage->setGeometry(QRect(60, 50, 691, 371));
        lab_barrage->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(790, 50, 131, 361));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(940, 50, 141, 361));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 20, 696, 22));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        le_RoomName = new QLineEdit(widget);
        le_RoomName->setObjectName(QStringLiteral("le_RoomName"));

        gridLayout->addWidget(le_RoomName, 0, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        le_RoomMoney = new QLineEdit(widget);
        le_RoomMoney->setObjectName(QStringLiteral("le_RoomMoney"));

        gridLayout->addWidget(le_RoomMoney, 0, 3, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 4, 1, 1);

        le_RoomLevel = new QLineEdit(widget);
        le_RoomLevel->setObjectName(QStringLiteral("le_RoomLevel"));

        gridLayout->addWidget(le_RoomLevel, 0, 5, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 6, 1, 1);

        le_HostName = new QLineEdit(widget);
        le_HostName->setObjectName(QStringLiteral("le_HostName"));

        gridLayout->addWidget(le_HostName, 0, 7, 1, 1);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(50, 490, 575, 22));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        le_account = new QLineEdit(widget1);
        le_account->setObjectName(QStringLiteral("le_account"));

        gridLayout_2->addWidget(le_account, 0, 1, 1, 1);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 2, 1, 1);

        le_money = new QLineEdit(widget1);
        le_money->setObjectName(QStringLiteral("le_money"));

        gridLayout_2->addWidget(le_money, 0, 3, 1, 1);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 4, 1, 1);

        le_score = new QLineEdit(widget1);
        le_score->setObjectName(QStringLiteral("le_score"));

        gridLayout_2->addWidget(le_score, 0, 5, 1, 1);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(51, 451, 571, 25));
        gridLayout_3 = new QGridLayout(widget2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(widget2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_3->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(widget2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_3->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(widget2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_3->addWidget(pushButton_4, 0, 3, 1, 1);

        pushButton_5 = new QPushButton(widget2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_3->addWidget(pushButton_5, 0, 4, 1, 1);

        pushButton_6 = new QPushButton(widget2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout_3->addWidget(pushButton_6, 0, 5, 1, 1);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(790, 10, 131, 25));
        gridLayout_4 = new QGridLayout(widget3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_4->addWidget(label_9, 0, 0, 1, 1);

        pushButton_7 = new QPushButton(widget3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout_4->addWidget(pushButton_7, 0, 1, 1, 1);

        widget4 = new QWidget(centralwidget);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(940, 10, 143, 25));
        gridLayout_5 = new QGridLayout(widget4);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget4);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_5->addWidget(label_10, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(widget4);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout_5->addWidget(pushButton_8, 0, 1, 1, 1);

        HostRoomUi->setCentralWidget(centralwidget);
        lab_barrage->raise();
        label->raise();
        le_account->raise();
        label_2->raise();
        le_money->raise();
        label_3->raise();
        le_score->raise();
        le_chatsend->raise();
        pushButton->raise();
        label_4->raise();
        le_RoomName->raise();
        le_RoomMoney->raise();
        le_RoomLevel->raise();
        le_HostName->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        lab_view->raise();
        textEdit->raise();
        listWidget->raise();
        label_9->raise();
        pushButton_7->raise();
        label_10->raise();
        pushButton_8->raise();
        menubar = new QMenuBar(HostRoomUi);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1107, 23));
        HostRoomUi->setMenuBar(menubar);
        statusbar = new QStatusBar(HostRoomUi);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        HostRoomUi->setStatusBar(statusbar);

        retranslateUi(HostRoomUi);

        QMetaObject::connectSlotsByName(HostRoomUi);
    } // setupUi

    void retranslateUi(QMainWindow *HostRoomUi)
    {
        HostRoomUi->setWindowTitle(QApplication::translate("HostRoomUi", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("HostRoomUi", "\345\217\221\351\200\201", Q_NULLPTR));
        lab_view->setText(QApplication::translate("HostRoomUi", "\345\274\271\n"
"\n"
"\345\271\225\n"
"\n"
"\346\230\276\n"
"\n"
"\347\244\272\n"
"\n"
"\345\214\272\n"
"\n"
"\345\237\237", Q_NULLPTR));
        lab_barrage->setText(QString());
        label_4->setText(QApplication::translate("HostRoomUi", "\346\210\277\351\227\264\345\220\215", Q_NULLPTR));
        label_5->setText(QApplication::translate("HostRoomUi", "\351\207\221\351\222\261", Q_NULLPTR));
        label_6->setText(QApplication::translate("HostRoomUi", "\347\247\257\345\210\206", Q_NULLPTR));
        label_7->setText(QApplication::translate("HostRoomUi", "\344\270\273\346\222\255\345\220\215", Q_NULLPTR));
        label->setText(QApplication::translate("HostRoomUi", "\345\275\223\345\211\215\350\264\246\346\210\267", Q_NULLPTR));
        le_account->setText(QString());
        label_2->setText(QApplication::translate("HostRoomUi", "\350\264\246\346\210\267\344\275\231\351\242\235", Q_NULLPTR));
        le_money->setText(QString());
        label_3->setText(QApplication::translate("HostRoomUi", "\350\264\246\346\210\267\347\247\257\345\210\206", Q_NULLPTR));
        le_score->setText(QString());
        label_8->setText(QApplication::translate("HostRoomUi", "    \347\244\274    \347\211\251", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("HostRoomUi", "\351\261\274\344\270\270", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("HostRoomUi", "\351\261\274\347\277\205", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("HostRoomUi", "\350\267\221\350\275\246", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("HostRoomUi", "\351\243\236\346\234\272", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("HostRoomUi", "\347\201\253\347\256\255", Q_NULLPTR));
        label_9->setText(QApplication::translate("HostRoomUi", "\350\201\212\345\244\251\350\256\260\345\275\225", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("HostRoomUi", "\350\201\212\345\244\251\345\210\267\346\226\260", Q_NULLPTR));
        label_10->setText(QApplication::translate("HostRoomUi", "\347\276\244\346\210\220\345\221\230\345\210\227\350\241\250", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("HostRoomUi", "\346\210\220\345\221\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HostRoomUi: public Ui_HostRoomUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOSTROOMUI_H
