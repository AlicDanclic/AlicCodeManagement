#include "enterui.h"
#include "ui_enterui.h"

EnterUI::EnterUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EnterUI)
{
    ui->setupUi(this);

    setWindowTitle("AlicCodeManger欢迎你!");
    this->setWindowIcon(QIcon(QDir::currentPath()+"/resource/picture/Icon.ico"));
/*
    QPalette pal = this->palette();
    pal.setBrush(QPalette::Background,QBrush(QPixmap(":/resource/picture/Sexy Blue.jpg")));
    setPalette(pal);
    */

    connect(ui->enter,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        EnterUI::enter();
    });

    connect(ui->resign,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        EnterUI::resign();
    });

}

EnterUI::~EnterUI()
{
    delete ui;
}


void EnterUI::resign(){
    QString username = ui->username->text().toUtf8();
    QString password = ui->password->text().toUtf8();

    if(username == nullptr){
        return;
    }

    QString Root = QDir::currentPath();

    QJsonArray userArray;

    QFile file(Root+"/config/log.json");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        //qDebug()<< "Error 1231 : can't open error";
        return ;
    }

    QTextStream stream(&file);
    stream.setCodec("UTF-8");
    QString str = stream.readAll();

    QString newpath = Root+"/userinf/";

    file.close();

    QJsonParseError jsonError;

    QJsonDocument doc = QJsonDocument::fromJson(str.toUtf8(),&jsonError);

    if(doc.isNull()){
        QJsonObject user;

        user.insert("username",username);
        user.insert("password",password);

        userArray.append(user);

        QJsonDocument docs;
        docs.setArray(userArray);

        QFile files(Root+"/config/log.json");

        if(!files.open(QIODevice::WriteOnly | QIODevice::Truncate)){
            QMessageBox::information(nullptr,"Error 1233","文件打开错误",QMessageBox::Yes,QMessageBox::Yes);
            return;
        }

        files.write(docs.toJson());
        files.close();

        newpath.append(username);
        newpath.append(".psw");

        QFile newPassFile(newpath);

        newPassFile.open(QIODevice::WriteOnly);

        QMessageBox::information(nullptr,"test1","注册成功",QMessageBox::Yes,QMessageBox::Yes);

        newPassFile.close();

        return;
    }

    if(jsonError.error != QJsonParseError::NoError && !doc.isNull()){
        QMessageBox::information(nullptr,"Error 1232","Json格式错误",QMessageBox::Yes,QMessageBox::Yes);
        return ;
    }

    userArray = doc.array();

    //判断是不是用重复用户名
    for(int i = 0;i < userArray.size();i++){
        QJsonValue value = userArray.at(i);
        switch(value.type())
        {
        case QJsonValue::Object:{
            QJsonObject valueObj = value.toObject();
            QJsonValue usernameValue = valueObj.value("username");
            if(username == usernameValue.toString()){
                QMessageBox::information(nullptr,"Error 1234","用户名已存在",QMessageBox::Yes,QMessageBox::Yes);
                return;
            }

            break;
            }
        default:
            break;
        }
    }

    QJsonObject user;
    user.insert("password",password);
    user.insert("username",username);

    userArray.append(user);


    QJsonDocument docs;
    docs.setArray(userArray);

    QFile files(Root + "/config/log.json");
    if(!files.open(QIODevice::WriteOnly | QIODevice::Truncate)){
        QMessageBox::information(nullptr,"Error 1233","文件打开错误",QMessageBox::Yes,QMessageBox::Yes);
        return;
    }

    files.write(docs.toJson());
    files.close();

    newpath.append(username);
    newpath.append(".psw");

    QFile newPassFile(newpath);

    newPassFile.open(QIODevice::WriteOnly);

    QMessageBox::information(nullptr,"test","注册成功",QMessageBox::Yes,QMessageBox::Yes);

    newPassFile.close();

    return ;
}

void EnterUI::enter(){
    QString username = ui->username->text();
    QString password = ui->password->text();

    QJsonArray userArray;

    QString Root = QDir::currentPath();

    QFile file(Root+"/config/log.json");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        //qDebug()<< "Error 1231 : can't open error";
        return ;
    }

    QTextStream stream(&file);
    stream.setCodec("UTF-8");
    QString str = stream.readAll();

    file.close();

    QJsonParseError jsonError;

    QJsonDocument doc = QJsonDocument::fromJson(str.toUtf8(),&jsonError);

    if(jsonError.error != QJsonParseError::NoError && !doc.isNull()){
        QMessageBox::information(nullptr,"Error 1232","Json格式错误",QMessageBox::Yes,QMessageBox::Yes);
        return ;
    }

    userArray = doc.array();

    //判断是不是用重复用户名
    for(int i = 0;i < userArray.size();i++){
        QJsonValue value = userArray.at(i);
        switch(value.type())
        {
        case QJsonValue::Object:{
            QJsonObject valueObj = value.toObject();
            QJsonValue usernameValue = valueObj.value("username");
            if(username == usernameValue.toString()){
                QJsonValue passwordValue = valueObj.value("password");
                if(password == passwordValue.toString()){
                    //
                    QMessageBox::information(nullptr,"test","登陆成功",QMessageBox::Yes,QMessageBox::Yes);

                    QFile Save_log(Root+"/config/log");

                    if(!Save_log.open(QIODevice::WriteOnly | QIODevice::Truncate)){
                        //qDebug()<< "Error 1231 : can't open error";
                        return ;
                    }

                    Save_log.write(username.toUtf8());

                    Save_log.close();

                    this->close();

                    mainscreen.show();

                }
                else{
                    QMessageBox::information(nullptr,"Error 1122","密码错误",QMessageBox::Yes,QMessageBox::Yes);
                }
                return;
            }

            break;
            }
        default:
            break;
        }
    }

    QMessageBox::information(nullptr,"Error 1123","用户名错误",QMessageBox::Yes,QMessageBox::Yes);

    return;
}
