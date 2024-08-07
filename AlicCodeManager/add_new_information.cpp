/**
 * @Name add_new_information.cpp
 * @Function 通过调用"添加",输入信息,传递给mainscreen
 * @List void Add_New_Information::add_new_information_to_log():读取信息并写入log_1,以便于传递信息
 * @Author 永生和_Alic
 */

#include "add_new_information.h"
#include "ui_add_new_information.h"
#include "QMessageBox"


Add_New_Information::Add_New_Information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_New_Information)
{
    ui->setupUi(this);
    this->setFixedSize(400,300);
    this->setWindowIcon(QIcon(QDir::currentPath()+"/resource/picture/Icon.ico"));

    connect(ui->pushButton,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Add_New_Information::add_new_information_to_log();

       this->close();
    });

    connect(ui->RandomButton,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        Add_New_Information::Random_new_code();
    });

}

Add_New_Information::~Add_New_Information()
{
    delete ui;
}

/**
 * @Name void Add_New_Information::add_new_information_to_log()
 * @Function 读取信息并写入log_1,以便于传递信息
 * @List None
 * @Author 永生和_Alic
 */

/*
 * 读取Qline里面的信息,同时用QDir获取应用程序执行目录
 * encode对输入密码进行加密
 * 一行一个信息的写入
 */
void Add_New_Information::add_new_information_to_log(){

    QString urlval = ui->urlvalue->text();
    QString userval = ui->uservalue->text();
    QString passwordval = encode(ui->passwordvalue->text());

    if(urlval == NULL || userval == NULL || passwordval == NULL){

        QMessageBox::information(nullptr,"错误","信息不全,无法添加",QMessageBox::Yes,QMessageBox::Yes);

        reject();

        return;
    }

    QString Root = QDir::currentPath();

    QFile Save_log(Root+"/config/log_1");

    if(!Save_log.open(QIODevice::WriteOnly | QIODevice::Truncate)){
        return;
    }

    Save_log.write((urlval+"\n"+userval+"\n"+passwordval).toUtf8());

    Save_log.close();
    accept();
}

void Add_New_Information::Random_new_code(){
    QString code = RandomCode(10);
    ui->passwordvalue->setText(code);
    QMessageBox::information(nullptr,"随机密码",code,QMessageBox::Yes,QMessageBox::Yes);
}


