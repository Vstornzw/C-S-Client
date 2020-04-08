/********************************************************************************
** Form generated from reading UI file 'RoomListUi.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMLISTUI_H
#define UI_ROOMLISTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoomListUi
{
public:
    QListWidget *listWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn_creatRoom;
    QLabel *label_2;
    QLineEdit *le_roomName;
    QPushButton *btn_chargeMoney;
    QLabel *label_3;
    QLineEdit *le_chargeMoney;
    QPushButton *btn_accountInformation;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QLineEdit *le_namePer;
    QLabel *label_5;
    QLineEdit *le_moneyPer;
    QLabel *label_6;
    QLineEdit *le_leverPer;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QPushButton *btn_refresh;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QPushButton *btn_QuitClient;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_DeleteUser;

    void setupUi(QWidget *RoomListUi)
    {
        if (RoomListUi->objectName().isEmpty())
            RoomListUi->setObjectName(QStringLiteral("RoomListUi"));
        RoomListUi->resize(520, 569);
        listWidget = new QListWidget(RoomListUi);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(30, 120, 271, 351));
        layoutWidget = new QWidget(RoomListUi);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 122, 183, 347));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_creatRoom = new QPushButton(layoutWidget);
        btn_creatRoom->setObjectName(QStringLiteral("btn_creatRoom"));

        gridLayout->addWidget(btn_creatRoom, 0, 0, 1, 3);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        le_roomName = new QLineEdit(layoutWidget);
        le_roomName->setObjectName(QStringLiteral("le_roomName"));

        gridLayout->addWidget(le_roomName, 1, 2, 1, 1);

        btn_chargeMoney = new QPushButton(layoutWidget);
        btn_chargeMoney->setObjectName(QStringLiteral("btn_chargeMoney"));

        gridLayout->addWidget(btn_chargeMoney, 2, 0, 1, 3);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        le_chargeMoney = new QLineEdit(layoutWidget);
        le_chargeMoney->setObjectName(QStringLiteral("le_chargeMoney"));

        gridLayout->addWidget(le_chargeMoney, 3, 1, 1, 2);

        btn_accountInformation = new QPushButton(layoutWidget);
        btn_accountInformation->setObjectName(QStringLiteral("btn_accountInformation"));

        gridLayout->addWidget(btn_accountInformation, 4, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 128, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 2, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 6, 0, 1, 2);

        le_namePer = new QLineEdit(layoutWidget);
        le_namePer->setObjectName(QStringLiteral("le_namePer"));

        gridLayout->addWidget(le_namePer, 6, 2, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 7, 0, 1, 1);

        le_moneyPer = new QLineEdit(layoutWidget);
        le_moneyPer->setObjectName(QStringLiteral("le_moneyPer"));

        gridLayout->addWidget(le_moneyPer, 7, 2, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 8, 0, 1, 1);

        le_leverPer = new QLineEdit(layoutWidget);
        le_leverPer->setObjectName(QStringLiteral("le_leverPer"));

        gridLayout->addWidget(le_leverPer, 8, 2, 1, 1);

        layoutWidget1 = new QWidget(RoomListUi);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 50, 261, 25));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        btn_refresh = new QPushButton(layoutWidget1);
        btn_refresh->setObjectName(QStringLiteral("btn_refresh"));

        gridLayout_2->addWidget(btn_refresh, 0, 1, 1, 1);

        layoutWidget2 = new QWidget(RoomListUi);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 490, 271, 25));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        btn_QuitClient = new QPushButton(layoutWidget2);
        btn_QuitClient->setObjectName(QStringLiteral("btn_QuitClient"));

        gridLayout_3->addWidget(btn_QuitClient, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 1, 1);

        btn_DeleteUser = new QPushButton(layoutWidget2);
        btn_DeleteUser->setObjectName(QStringLiteral("btn_DeleteUser"));

        gridLayout_3->addWidget(btn_DeleteUser, 0, 2, 1, 1);


        retranslateUi(RoomListUi);

        QMetaObject::connectSlotsByName(RoomListUi);
    } // setupUi

    void retranslateUi(QWidget *RoomListUi)
    {
        RoomListUi->setWindowTitle(QApplication::translate("RoomListUi", "Form", Q_NULLPTR));
        btn_creatRoom->setText(QApplication::translate("RoomListUi", "\345\210\233\345\273\272\346\210\277\351\227\264", Q_NULLPTR));
        label_2->setText(QApplication::translate("RoomListUi", "\346\210\277\351\227\264\345\220\215", Q_NULLPTR));
        btn_chargeMoney->setText(QApplication::translate("RoomListUi", "\345\205\205\345\200\274\351\207\221\351\242\235", Q_NULLPTR));
        label_3->setText(QApplication::translate("RoomListUi", "\351\207\221 \351\242\235", Q_NULLPTR));
        btn_accountInformation->setText(QApplication::translate("RoomListUi", "\350\264\246\346\210\267\344\277\241\346\201\257", Q_NULLPTR));
        label_4->setText(QApplication::translate("RoomListUi", "\350\264\246 \346\210\267", Q_NULLPTR));
        label_5->setText(QApplication::translate("RoomListUi", "\344\275\231 \351\242\235", Q_NULLPTR));
        label_6->setText(QApplication::translate("RoomListUi", "\347\247\257 \345\210\206", Q_NULLPTR));
        label->setText(QApplication::translate("RoomListUi", "\346\210\277\351\227\264\345\210\227\350\241\250", Q_NULLPTR));
        btn_refresh->setText(QApplication::translate("RoomListUi", "\345\210\267\346\226\260", Q_NULLPTR));
        btn_QuitClient->setText(QApplication::translate("RoomListUi", "\344\270\213\347\272\277", Q_NULLPTR));
        btn_DeleteUser->setText(QApplication::translate("RoomListUi", "\346\263\250\351\224\200", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RoomListUi: public Ui_RoomListUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMLISTUI_H
