/********************************************************************************
** Form generated from reading UI file 'enterui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERUI_H
#define UI_ENTERUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnterUI
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *resign;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *enter;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QLineEdit *password;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *username;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *EnterUI)
    {
        if (EnterUI->objectName().isEmpty())
            EnterUI->setObjectName(QString::fromUtf8("EnterUI"));
        EnterUI->resize(352, 468);
        EnterUI->setStyleSheet(QString::fromUtf8("\n"
".QLabel{\n"
"	font:50px;\n"
"}\n"
".QLineEdit{\n"
"	background: rgb(255, 255, 255);\n"
"}"));
        widget = new QWidget(EnterUI);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 80, 351, 52));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        widget1 = new QWidget(EnterUI);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 390, 351, 30));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        resign = new QPushButton(widget1);
        resign->setObjectName(QString::fromUtf8("resign"));

        horizontalLayout_2->addWidget(resign);

        horizontalSpacer_3 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        widget2 = new QWidget(EnterUI);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(0, 340, 351, 30));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        enter = new QPushButton(widget2);
        enter->setObjectName(QString::fromUtf8("enter"));

        horizontalLayout_3->addWidget(enter);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        widget3 = new QWidget(EnterUI);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(0, 270, 351, 23));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        password = new QLineEdit(widget3);
        password->setObjectName(QString::fromUtf8("password"));

        horizontalLayout_4->addWidget(password);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        widget4 = new QWidget(EnterUI);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(0, 230, 351, 23));
        horizontalLayout_5 = new QHBoxLayout(widget4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        username = new QLineEdit(widget4);
        username->setObjectName(QString::fromUtf8("username"));

        horizontalLayout_5->addWidget(username);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        retranslateUi(EnterUI);

        QMetaObject::connectSlotsByName(EnterUI);
    } // setupUi

    void retranslateUi(QWidget *EnterUI)
    {
        EnterUI->setWindowTitle(QApplication::translate("EnterUI", "Form", nullptr));
        label->setText(QApplication::translate("EnterUI", "LOGIN", nullptr));
        resign->setText(QApplication::translate("EnterUI", "\346\263\250\345\206\214", nullptr));
        enter->setText(QApplication::translate("EnterUI", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnterUI: public Ui_EnterUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERUI_H
