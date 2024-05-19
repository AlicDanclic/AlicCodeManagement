/********************************************************************************
** Form generated from reading UI file 'add_new_information.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_NEW_INFORMATION_H
#define UI_ADD_NEW_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Add_New_Information
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *urlvalue;
    QLineEdit *uservalue;
    QLabel *label_3;
    QLineEdit *passwordvalue;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QDialog *Add_New_Information)
    {
        if (Add_New_Information->objectName().isEmpty())
            Add_New_Information->setObjectName(QString::fromUtf8("Add_New_Information"));
        Add_New_Information->resize(400, 300);
        label = new QLabel(Add_New_Information);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 10, 171, 31));
        label->setStyleSheet(QString::fromUtf8("font:30px;"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Add_New_Information);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 72, 15));
        label_2->setAlignment(Qt::AlignCenter);
        urlvalue = new QLineEdit(Add_New_Information);
        urlvalue->setObjectName(QString::fromUtf8("urlvalue"));
        urlvalue->setGeometry(QRect(130, 70, 191, 21));
        uservalue = new QLineEdit(Add_New_Information);
        uservalue->setObjectName(QString::fromUtf8("uservalue"));
        uservalue->setGeometry(QRect(130, 110, 191, 21));
        label_3 = new QLabel(Add_New_Information);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 110, 72, 15));
        label_3->setAlignment(Qt::AlignCenter);
        passwordvalue = new QLineEdit(Add_New_Information);
        passwordvalue->setObjectName(QString::fromUtf8("passwordvalue"));
        passwordvalue->setGeometry(QRect(130, 150, 191, 21));
        label_4 = new QLabel(Add_New_Information);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 150, 72, 15));
        label_4->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(Add_New_Information);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 220, 93, 28));

        retranslateUi(Add_New_Information);

        QMetaObject::connectSlotsByName(Add_New_Information);
    } // setupUi

    void retranslateUi(QDialog *Add_New_Information)
    {
        Add_New_Information->setWindowTitle(QApplication::translate("Add_New_Information", "Dialog", nullptr));
        label->setText(QApplication::translate("Add_New_Information", "\346\226\260\345\242\236\344\277\241\346\201\257", nullptr));
        label_2->setText(QApplication::translate("Add_New_Information", "\347\275\221\347\253\231/\350\275\257\344\273\266", nullptr));
        label_3->setText(QApplication::translate("Add_New_Information", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_4->setText(QApplication::translate("Add_New_Information", "\345\257\206\347\240\201", nullptr));
        pushButton->setText(QApplication::translate("Add_New_Information", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_New_Information: public Ui_Add_New_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_NEW_INFORMATION_H
