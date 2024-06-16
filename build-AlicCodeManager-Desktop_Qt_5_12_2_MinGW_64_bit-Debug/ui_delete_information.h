/********************************************************************************
** Form generated from reading UI file 'delete_information.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_INFORMATION_H
#define UI_DELETE_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Delete_Information
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *urlvalue;
    QLabel *label_3;
    QLineEdit *uservalue;
    QLabel *label_4;
    QLineEdit *passwordvalue;

    void setupUi(QDialog *Delete_Information)
    {
        if (Delete_Information->objectName().isEmpty())
            Delete_Information->setObjectName(QString::fromUtf8("Delete_Information"));
        Delete_Information->resize(400, 300);
        pushButton = new QPushButton(Delete_Information);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 220, 93, 28));
        label = new QLabel(Delete_Information);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 10, 151, 41));
        label->setStyleSheet(QString::fromUtf8("font:30px;\n"
""));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Delete_Information);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 70, 72, 15));
        label_2->setAlignment(Qt::AlignCenter);
        urlvalue = new QLineEdit(Delete_Information);
        urlvalue->setObjectName(QString::fromUtf8("urlvalue"));
        urlvalue->setGeometry(QRect(130, 70, 191, 21));
        label_3 = new QLabel(Delete_Information);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 110, 72, 15));
        label_3->setAlignment(Qt::AlignCenter);
        uservalue = new QLineEdit(Delete_Information);
        uservalue->setObjectName(QString::fromUtf8("uservalue"));
        uservalue->setGeometry(QRect(130, 110, 191, 21));
        label_4 = new QLabel(Delete_Information);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 150, 72, 15));
        label_4->setAlignment(Qt::AlignCenter);
        passwordvalue = new QLineEdit(Delete_Information);
        passwordvalue->setObjectName(QString::fromUtf8("passwordvalue"));
        passwordvalue->setGeometry(QRect(130, 150, 191, 21));

        retranslateUi(Delete_Information);

        QMetaObject::connectSlotsByName(Delete_Information);
    } // setupUi

    void retranslateUi(QDialog *Delete_Information)
    {
        Delete_Information->setWindowTitle(QApplication::translate("Delete_Information", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Delete_Information", "\347\241\256\345\256\232", nullptr));
        label->setText(QApplication::translate("Delete_Information", "\345\210\240\351\231\244\344\277\241\346\201\257", nullptr));
        label_2->setText(QApplication::translate("Delete_Information", "\347\275\221\347\253\231/\350\275\257\344\273\266", nullptr));
        label_3->setText(QApplication::translate("Delete_Information", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_4->setText(QApplication::translate("Delete_Information", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Delete_Information: public Ui_Delete_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_INFORMATION_H
