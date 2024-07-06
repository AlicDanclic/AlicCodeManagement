#include "delete_information.h"
#include "ui_delete_information.h"

Delete_Information::Delete_Information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete_Information)
{
    ui->setupUi(this);
    this->setFixedSize(400,300);
    this->setWindowIcon(QIcon(QDir::currentPath()+"/resource/picture/Icon.ico"));
    connect(ui->pushButton,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Change_Information();
       this->close();
    });

    connect(ui->RandomButton,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        Delete_Information::Random_new_code();
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

    if(urlval == NULL || userval == NULL || passwordval == NULL){

        QMessageBox::information(nullptr,"错误","信息不全,无法添加",QMessageBox::Yes,QMessageBox::Yes);

        reject();

        return;
    }

    QString Root = QDir::currentPath();

    QFile Save_log(Root+"/config/log_2");

    if(!Save_log.open(QIODevice::WriteOnly | QIODevice::Truncate)){
        return;
    }

    Save_log.write((urlval+"\n"+userval+"\n"+passwordval).toUtf8());

    Save_log.close();

    accept();
}

void Delete_Information::Random_new_code(){
    QString code = RandomCode(10);
    ui->passwordvalue->setText(code);
    QMessageBox::information(nullptr,"随机密码",code,QMessageBox::Yes,QMessageBox::Yes);
}
