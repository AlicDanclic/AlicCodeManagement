#include "add_new_information.h"
#include "ui_add_new_information.h"

Add_New_Information::Add_New_Information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_New_Information)
{
    ui->setupUi(this);

    connect(ui->pushButton,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Add_New_Information();
       this->close();
    });

}

Add_New_Information::~Add_New_Information()
{
    delete ui;
}



void Add_New_Information::add_new_information_to_log(){

    QString urlval = ui->urlvalue->text().toUtf8();
    QString userval = ui->uservalue->text().toUtf8();
    QString passwordval = encode(ui->passwordvalue->text()).toUtf8();

    QFile Save_log("../config/log_1");

    if(!Save_log.open(QIODevice::WriteOnly | QIODevice::Truncate)){
        return;
    }

    Save_log.write((urlval+"\n"+userval+"\n"+passwordval).toUtf8());

    Save_log.close();

}


