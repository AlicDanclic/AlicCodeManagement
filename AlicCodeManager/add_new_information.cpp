#include "add_new_information.h"
#include "ui_add_new_information.h"

Add_New_Information::Add_New_Information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_New_Information)
{
    ui->setupUi(this);

    connect(ui->pushButton,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Add_New_Information();
    });

}

Add_New_Information::~Add_New_Information()
{
    delete ui;
}

void Add_New_Information::add_new_information_to_log(){

    QJsonArray user;

    QJsonObject user_inf;
    user_inf.insert("_url",ui->urlvalue->text());
    user_inf.insert("_user",ui->uservalue->text());
    user_inf.insert("_password",ui->passwordvalue->text());

    user.append(user_inf);

    QJsonDocument docs;
    docs.setArray(user);

    QFile file("../config/log_1");

    if(!file.open(QIODevice::WriteOnly | QIODevice::Truncate)){
        return;
    }

    file.write(docs.toJson());
    file.close();

    this->close();

    return;
}
