#include "delete_information.h"
#include "ui_delete_information.h"

Delete_Information::Delete_Information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete_Information)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(QDir::currentPath()+"/resource/picture/Icon.ico"));
    connect(ui->pushButton,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Change_Information();
       this->close();
    });
}

Delete_Information::~Delete_Information()
{
    delete ui;
}

void Delete_Information::Change_Information(){
    QString urlval = ui->urlvalue->text().toUtf8();
    QString userval = ui->uservalue->text().toUtf8();
    QString passwordval = encode(ui->passwordvalue->text()).toUtf8();

    QString Root = QDir::currentPath();

    QFile Save_log(Root+"/config/log_2");

    if(!Save_log.open(QIODevice::WriteOnly | QIODevice::Truncate)){
        return;
    }

    Save_log.write((urlval+"\n"+userval+"\n"+passwordval).toUtf8());

    Save_log.close();
}
