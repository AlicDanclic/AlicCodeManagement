#include "delete_information.h"
#include "ui_delete_information.h"

Delete_Information::Delete_Information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete_Information)
{
    ui->setupUi(this);

    connect(ui->pushButton,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Change_Information();
    });
}

Delete_Information::~Delete_Information()
{
    delete ui;
}

void Delete_Information::Change_Information(){
    QJsonArray user;

    QJsonObject user_inf;
    user_inf.insert("_url",ui->urlvalue->text());
    user_inf.insert("_user",ui->uservalue->text());
    user_inf.insert("_password",ui->passwordvalue->text());

    user.append(user_inf);

    QJsonDocument docs;
    docs.setArray(user);

    QFile file("../config/log_2");

    if(!file.open(QIODevice::WriteOnly | QIODevice::Truncate)){
        return;
    }

    file.write(docs.toJson());
    file.close();

    this->close();

    return;
}
