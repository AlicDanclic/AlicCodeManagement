#include "change.h"
#include "ui_change.h"

ChangeUi::ChangeUi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChangeUi)
{
    ui->setupUi(this);

    connect(ui->pushButton,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        _Change();
    });

}

ChangeUi::~ChangeUi()
{
    delete ui;
}


void ChangeUi::_Change(){
    QString url = ui->url->text();
    QString username = ui->user->text();
    QString password = ui->password->text();

    QString path = "../config/log_2";

    QFile passwordFile(path);

    if(!passwordFile.open(QIODevice::WriteOnly | QIODevice::Truncate)){
        qDebug()<< "Error 1231 : can't open error";
        return ;
    }

    QJsonArray _UserArray;

    QJsonObject _users;
    _users.insert("_url",url);
    _users.insert("_user",username);
    _users.insert("_password",password);

    _UserArray.append(_users);

    QJsonDocument docs;

    docs.setArray(_UserArray);

    passwordFile.write(docs.toJson());

    passwordFile.close();

    this->close();
}
