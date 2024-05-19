/********************************************************************************
** Form generated from reading UI file 'change.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_H
#define UI_CHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Change
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *url;
    QLabel *label_3;
    QLineEdit *user;
    QLabel *label_4;
    QLineEdit *password;
    QPushButton *pushButton;

    void setupUi(QWidget *Change)
    {
        if (Change->objectName().isEmpty())
            Change->setObjectName(QString::fromUtf8("Change"));
        Change->resize(400, 300);
        label = new QLabel(Change);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 0, 151, 51));
        label->setStyleSheet(QString::fromUtf8("font:30px;"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Change);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 72, 15));
        url = new QLineEdit(Change);
        url->setObjectName(QString::fromUtf8("url"));
        url->setGeometry(QRect(120, 70, 191, 21));
        label_3 = new QLabel(Change);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 110, 72, 15));
        label_3->setAlignment(Qt::AlignCenter);
        user = new QLineEdit(Change);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(120, 110, 191, 21));
        label_4 = new QLabel(Change);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 150, 72, 15));
        label_4->setAlignment(Qt::AlignCenter);
        password = new QLineEdit(Change);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(120, 150, 191, 21));
        pushButton = new QPushButton(Change);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 220, 93, 28));

        retranslateUi(Change);

        QMetaObject::connectSlotsByName(Change);
    } // setupUi

    void retranslateUi(QWidget *Change)
    {
        Change->setWindowTitle(QApplication::translate("Change", "Form", nullptr));
        label->setText(QApplication::translate("Change", "\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
        label_2->setText(QApplication::translate("Change", "\347\275\221\347\253\231/\350\275\257\344\273\266", nullptr));
        label_3->setText(QApplication::translate("Change", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_4->setText(QApplication::translate("Change", "\345\257\206\347\240\201", nullptr));
        pushButton->setText(QApplication::translate("Change", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeUi: public Ui_Change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_H
