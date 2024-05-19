/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *url_value;
    QLineEdit *username_value;
    QLineEdit *password_value;
    QPushButton *pushButton;

    void setupUi(QWidget *Add)
    {
        if (Add->objectName().isEmpty())
            Add->setObjectName(QString::fromUtf8("Add"));
        Add->resize(400, 300);
        label = new QLabel(Add);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 20, 171, 41));
        label->setStyleSheet(QString::fromUtf8("font:30px;"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Add);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 90, 72, 15));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(Add);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 130, 72, 15));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(Add);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 170, 72, 15));
        label_4->setAlignment(Qt::AlignCenter);
        url_value = new QLineEdit(Add);
        url_value->setObjectName(QString::fromUtf8("url_value"));
        url_value->setGeometry(QRect(130, 90, 171, 21));
        username_value = new QLineEdit(Add);
        username_value->setObjectName(QString::fromUtf8("username_value"));
        username_value->setGeometry(QRect(130, 130, 171, 21));
        password_value = new QLineEdit(Add);
        password_value->setObjectName(QString::fromUtf8("password_value"));
        password_value->setGeometry(QRect(130, 170, 171, 21));
        pushButton = new QPushButton(Add);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 240, 93, 28));

        retranslateUi(Add);

        QMetaObject::connectSlotsByName(Add);
    } // setupUi

    void retranslateUi(QWidget *Add)
    {
        Add->setWindowTitle(QApplication::translate("Add", "Form", nullptr));
        label->setText(QApplication::translate("Add", "\346\226\260\345\242\236\344\277\241\346\201\257", nullptr));
        label_2->setText(QApplication::translate("Add", "\347\275\221\347\253\231/\350\275\257\344\273\266", nullptr));
        label_3->setText(QApplication::translate("Add", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_4->setText(QApplication::translate("Add", "\345\257\206\347\240\201", nullptr));
        pushButton->setText(QApplication::translate("Add", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add: public Ui_Add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
