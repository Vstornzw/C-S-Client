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
    QLabel *lab_view;
    QLabel *lab_barrage;
    QTextEdit *textEdit;
    QListWidget *listWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *le_RoomName;
    QLabel *label_5;
    QLineEdit *le_RoomMoney;
    QLabel *label_6;
    QLineEdit *le_RoomLevel;
    QLabel *label_7;
    QLineEdit *le_HostName;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *le_account;
    QLabel *label_2;
    QLineEdit *le_money;
    QLabel *label_3;
    QLineEdit *le_score;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_4;
    QLabel *label_9;
    QPushButton *pushButton_7;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_5;
    QLabel *label_10;
    QPushButton *pushButton_8;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_6;
    QPushButton *btn_view_open_;
    QPushButton *btn_vioce_open_;
    QPushButton *btn_view_close_;
    QPushButton *btn_vioce_close_;
    QPushButton *btn_barrage_on_;
    QPushButton *btn_exceptional_;
    QPushButton *btn_close_;
    QPushButton *btn_barrage_off_;
    QWidget *layoutWidget6;
    QGridLayout *gridLayout_7;
    QLineEdit *le_chatsend;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HostRoomUi)
    {
        if (HostRoomUi->objectName().isEmpty())
            HostRoomUi->setObjectName(QStringLiteral("HostRoomUi"));
        HostRoomUi->resize(1103, 621);
        centralwidget = new QWidget(HostRoomUi);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
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
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 20, 696, 22));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        le_RoomName = new QLineEdit(layoutWidget);
        le_RoomName->setObjectName(QStringLiteral("le_RoomName"));

        gridLayout->addWidget(le_RoomName, 0, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        le_RoomMoney = new QLineEdit(layoutWidget);
        le_RoomMoney->setObjectName(QStringLiteral("le_RoomMoney"));

        gridLayout->addWidget(le_RoomMoney, 0, 3, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 4, 1, 1);

        le_RoomLevel = new QLineEdit(layoutWidget);
        le_RoomLevel->setObjectName(QStringLiteral("le_RoomLevel"));

        gridLayout->addWidget(le_RoomLevel, 0, 5, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 6, 1, 1);

        le_HostName = new QLineEdit(layoutWidget);
        le_HostName->setObjectName(QStringLiteral("le_HostName"));

        gridLayout->addWidget(le_HostName, 0, 7, 1, 1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 480, 691, 22));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        le_account = new QLineEdit(layoutWidget1);
        le_account->setObjectName(QStringLiteral("le_account"));

        gridLayout_2->addWidget(le_account, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 2, 1, 1);

        le_money = new QLineEdit(layoutWidget1);
        le_money->setObjectName(QStringLiteral("le_money"));

        gridLayout_2->addWidget(le_money, 0, 3, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 4, 1, 1);

        le_score = new QLineEdit(layoutWidget1);
        le_score->setObjectName(QStringLiteral("le_score"));

        gridLayout_2->addWidget(le_score, 0, 5, 1, 1);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(60, 440, 691, 25));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_3->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_3->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_3->addWidget(pushButton_4, 0, 3, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_3->addWidget(pushButton_5, 0, 4, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout_3->addWidget(pushButton_6, 0, 5, 1, 1);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(790, 10, 131, 25));
        gridLayout_4 = new QGridLayout(layoutWidget3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_4->addWidget(label_9, 0, 0, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout_4->addWidget(pushButton_7, 0, 1, 1, 1);

        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(940, 10, 143, 25));
        gridLayout_5 = new QGridLayout(layoutWidget4);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget4);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_5->addWidget(label_10, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget4);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout_5->addWidget(pushButton_8, 0, 1, 1, 1);

        layoutWidget5 = new QWidget(centralwidget);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(790, 440, 291, 131));
        gridLayout_6 = new QGridLayout(layoutWidget5);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        btn_view_open_ = new QPushButton(layoutWidget5);
        btn_view_open_->setObjectName(QStringLiteral("btn_view_open_"));

        gridLayout_6->addWidget(btn_view_open_, 0, 0, 1, 1);

        btn_vioce_open_ = new QPushButton(layoutWidget5);
        btn_vioce_open_->setObjectName(QStringLiteral("btn_vioce_open_"));

        gridLayout_6->addWidget(btn_vioce_open_, 0, 1, 1, 1);

        btn_view_close_ = new QPushButton(layoutWidget5);
        btn_view_close_->setObjectName(QStringLiteral("btn_view_close_"));

        gridLayout_6->addWidget(btn_view_close_, 1, 0, 1, 1);

        btn_vioce_close_ = new QPushButton(layoutWidget5);
        btn_vioce_close_->setObjectName(QStringLiteral("btn_vioce_close_"));

        gridLayout_6->addWidget(btn_vioce_close_, 1, 1, 1, 1);

        btn_barrage_on_ = new QPushButton(layoutWidget5);
        btn_barrage_on_->setObjectName(QStringLiteral("btn_barrage_on_"));

        gridLayout_6->addWidget(btn_barrage_on_, 2, 0, 1, 1);

        btn_exceptional_ = new QPushButton(layoutWidget5);
        btn_exceptional_->setObjectName(QStringLiteral("btn_exceptional_"));

        gridLayout_6->addWidget(btn_exceptional_, 2, 1, 1, 1);

        btn_close_ = new QPushButton(layoutWidget5);
        btn_close_->setObjectName(QStringLiteral("btn_close_"));

        gridLayout_6->addWidget(btn_close_, 3, 1, 1, 1);

        btn_barrage_off_ = new QPushButton(layoutWidget5);
        btn_barrage_off_->setObjectName(QStringLiteral("btn_barrage_off_"));

        gridLayout_6->addWidget(btn_barrage_off_, 3, 0, 1, 1);

        layoutWidget6 = new QWidget(centralwidget);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(60, 510, 691, 61));
        gridLayout_7 = new QGridLayout(layoutWidget6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        le_chatsend = new QLineEdit(layoutWidget6);
        le_chatsend->setObjectName(QStringLiteral("le_chatsend"));

        gridLayout_7->addWidget(le_chatsend, 0, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget6);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_7->addWidget(pushButton, 0, 1, 1, 1);

        HostRoomUi->setCentralWidget(centralwidget);
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        lab_barrage->raise();
        lab_view->raise();
        textEdit->raise();
        listWidget->raise();
        menubar = new QMenuBar(HostRoomUi);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1103, 23));
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
        btn_view_open_->setText(QApplication::translate("HostRoomUi", "\345\274\200\345\220\257\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
        btn_vioce_open_->setText(QApplication::translate("HostRoomUi", "\346\211\223\345\274\200\351\272\246\345\205\213\351\243\216", Q_NULLPTR));
        btn_view_close_->setText(QApplication::translate("HostRoomUi", "\345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
        btn_vioce_close_->setText(QApplication::translate("HostRoomUi", "\345\205\263\351\227\255\351\272\246\345\205\213\351\243\216", Q_NULLPTR));
        btn_barrage_on_->setText(QApplication::translate("HostRoomUi", "\346\211\223\345\274\200\345\274\271\345\271\225", Q_NULLPTR));
        btn_exceptional_->setText(QApplication::translate("HostRoomUi", "\344\270\200\351\224\256\346\211\223\350\265\217", Q_NULLPTR));
        btn_close_->setText(QApplication::translate("HostRoomUi", "\351\200\200\345\207\272\347\233\264\346\222\255", Q_NULLPTR));
        btn_barrage_off_->setText(QApplication::translate("HostRoomUi", "\345\205\263\351\227\255\345\274\271\345\271\225", Q_NULLPTR));
        pushButton->setText(QApplication::translate("HostRoomUi", "\345\217\221\351\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HostRoomUi: public Ui_HostRoomUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOSTROOMUI_H
