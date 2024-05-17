/********************************************************************************
** Form generated from reading UI file 'mainscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCREEN_H
#define UI_MAINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainScreen
{
public:
    QPushButton *ExitBUtton;
    QLabel *label;
    QWidget *ShowS;
    QWidget *widget_2;
    QWidget *widget_3;
    QWidget *widget_4;
    QWidget *widget_5;
    QWidget *widget_6;
    QWidget *widget_7;
    QWidget *widget_8;
    QWidget *widget_9;
    QWidget *widget_10;
    QWidget *widget_11;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *Pages;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Addnew;
    QLineEdit *lineEdit;
    QPushButton *Search;

    void setupUi(QWidget *MainScreen)
    {
        if (MainScreen->objectName().isEmpty())
            MainScreen->setObjectName(QString::fromUtf8("MainScreen"));
        MainScreen->resize(909, 572);
        ExitBUtton = new QPushButton(MainScreen);
        ExitBUtton->setObjectName(QString::fromUtf8("ExitBUtton"));
        ExitBUtton->setGeometry(QRect(790, 60, 93, 28));
        label = new QLabel(MainScreen);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 241, 21));
        label->setStyleSheet(QString::fromUtf8("font:15px;"));
        ShowS = new QWidget(MainScreen);
        ShowS->setObjectName(QString::fromUtf8("ShowS"));
        ShowS->setGeometry(QRect(50, 100, 811, 451));
        widget_2 = new QWidget(ShowS);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 10, 791, 31));
        widget_3 = new QWidget(ShowS);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(10, 50, 791, 31));
        widget_4 = new QWidget(ShowS);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(10, 90, 791, 31));
        widget_5 = new QWidget(ShowS);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(10, 130, 791, 31));
        widget_6 = new QWidget(ShowS);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(10, 170, 791, 31));
        widget_7 = new QWidget(ShowS);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(10, 210, 791, 31));
        widget_8 = new QWidget(ShowS);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setGeometry(QRect(10, 250, 791, 31));
        widget_9 = new QWidget(ShowS);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setGeometry(QRect(10, 290, 791, 31));
        widget_10 = new QWidget(ShowS);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setGeometry(QRect(10, 330, 791, 31));
        widget_11 = new QWidget(ShowS);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setGeometry(QRect(10, 370, 791, 31));
        widget = new QWidget(ShowS);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 410, 791, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        Pages = new QLabel(widget);
        Pages->setObjectName(QString::fromUtf8("Pages"));
        Pages->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Pages);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        Addnew = new QPushButton(MainScreen);
        Addnew->setObjectName(QString::fromUtf8("Addnew"));
        Addnew->setGeometry(QRect(30, 60, 93, 28));
        lineEdit = new QLineEdit(MainScreen);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(590, 10, 191, 21));
        Search = new QPushButton(MainScreen);
        Search->setObjectName(QString::fromUtf8("Search"));
        Search->setGeometry(QRect(790, 10, 93, 28));

        retranslateUi(MainScreen);

        QMetaObject::connectSlotsByName(MainScreen);
    } // setupUi

    void retranslateUi(QWidget *MainScreen)
    {
        MainScreen->setWindowTitle(QApplication::translate("MainScreen", "Form", nullptr));
        ExitBUtton->setText(QApplication::translate("MainScreen", "\351\200\200\345\207\272", nullptr));
        label->setText(QApplication::translate("MainScreen", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("MainScreen", "\344\270\212\344\270\200\351\241\265", nullptr));
        label_2->setText(QApplication::translate("MainScreen", "\347\254\254", nullptr));
        Pages->setText(QApplication::translate("MainScreen", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("MainScreen", "\351\241\265", nullptr));
        pushButton_2->setText(QApplication::translate("MainScreen", "\344\270\213\344\270\200\351\241\265", nullptr));
        Addnew->setText(QApplication::translate("MainScreen", "\345\242\236\345\212\240", nullptr));
        Search->setText(QApplication::translate("MainScreen", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainScreen: public Ui_MainScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCREEN_H
