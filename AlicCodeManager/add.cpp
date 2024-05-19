#include "add.h"
#include "ui_add.h"

Add::Add(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);

    connect(ui->pushButton,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        _Add();
    });
}

Add::~Add()
{
    delete ui;
}

void Add::_Add(){
    QString url = ui->url_value->text();
    QString username = ui->username_value->text();
    QString password = ui->password_value->text();

    QString path = "../config/log_1";

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
