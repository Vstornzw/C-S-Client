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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientHandle
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *btnLogin;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRegist;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineName;
    QLabel *label_2;
    QLineEdit *linePwd;

    void setupUi(QWidget *ClientHandle)
    {
        if (ClientHandle->objectName().isEmpty())
            ClientHandle->setObjectName(QStringLiteral("ClientHandle"));
        ClientHandle->resize(400, 300);
        widget = new QWidget(ClientHandle);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 160, 204, 25));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btnLogin = new QPushButton(widget);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));

        gridLayout_2->addWidget(btnLogin, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        btnRegist = new QPushButton(widget);
        btnRegist->setObjectName(QStringLiteral("btnRegist"));

        gridLayout_2->addWidget(btnRegist, 0, 2, 1, 1);

        widget1 = new QWidget(ClientHandle);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(90, 70, 195, 48));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineName = new QLineEdit(widget1);
        lineName->setObjectName(QStringLiteral("lineName"));

        gridLayout->addWidget(lineName, 0, 1, 1, 1);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        linePwd = new QLineEdit(widget1);
        linePwd->setObjectName(QStringLiteral("linePwd"));

        gridLayout->addWidget(linePwd, 1, 1, 1, 1);


        retranslateUi(ClientHandle);

        QMetaObject::connectSlotsByName(ClientHandle);
    } // setupUi

    void retranslateUi(QWidget *ClientHandle)
    {
        ClientHandle->setWindowTitle(QApplication::translate("ClientHandle", "ClientHandle", Q_NULLPTR));
        btnLogin->setText(QApplication::translate("ClientHandle", "\347\231\273\345\275\225", Q_NULLPTR));
        btnRegist->setText(QApplication::translate("ClientHandle", "\346\263\250\345\206\214", Q_NULLPTR));
        label->setText(QApplication::translate("ClientHandle", "\350\264\246\346\210\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("ClientHandle", "\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClientHandle: public Ui_ClientHandle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTHANDLE_H
