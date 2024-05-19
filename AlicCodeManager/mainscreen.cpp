#include "mainscreen.h"
#include "ui_mainscreen.h"



MainScreen::MainScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainScreen)
{
    ui->setupUi(this);

    CreateScreen();

    connect(ui->EnterButton,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        if(QAQ == 0){
            MainScreen::_read();
            MainScreen::show_inf();
            QAQ = 1;
        }
        else{
             qDebug()<< "Error 1231 : can't open error";
        }
    });

    connect(ui->pushButton,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        LastPage();
    });

    connect(ui->pushButton_2,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        NextPage();
    });

    connect(ui->_Addnew,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        Addnew();
    });

    connect(ui->Search,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        _Search(ui->lineEdit->text());
    });

    connect(ui->ExitBUtton,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        Exit_Save();
    });

    /*********Get部分************/
    connect(ui->Get_1,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Get(0) ;
    });

    connect(ui->Get_2,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Get(1) ;
    });

    connect(ui->Get_3,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Get(2) ;
    });

    connect(ui->Get_4,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Get(3) ;
    });

    connect(ui->Get_5,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Get(4) ;
    });

    connect(ui->Get_6,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Get(5) ;
    });

    connect(ui->Get_7,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Get(6) ;
    });

    connect(ui->Get_8,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Get(7) ;
    });

    connect(ui->Get_9,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Get(8) ;
    });

    connect(ui->Get_10,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Get(9) ;
    });

     /*********Change部分************/
    connect(ui->Change_1,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Change(0) ;
    });

    connect(ui->Change_2,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Change(1) ;
    });

    connect(ui->Change_3,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Change(2) ;
    });

    connect(ui->Change_4,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Change(3) ;
    });

    connect(ui->Change_5,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Change(4) ;
    });

    connect(ui->Change_6,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Change(5) ;
    });

    connect(ui->Change_7,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Change(6) ;
    });

    connect(ui->Change_8,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Change(7) ;
    });

    connect(ui->Change_9,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Change(8) ;
    });

    connect(ui->Change_10,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
       Change(9) ;
    });

    /*********Delete部分************/
    connect(ui->Delete_1,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        Delete(0);
    });

    connect(ui->Delete_2,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        Delete(1);
    });

    connect(ui->Delete_3,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        Delete(2);
    });

    connect(ui->Delete_4,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        Delete(3);
    });

    connect(ui->Delete_5,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        Delete(4);
    });

    connect(ui->Delete_6,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        Delete(5);
    });

    connect(ui->Delete_7,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        Delete(6);
    });

    connect(ui->Delete_8,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        Delete(7);
    });

    connect(ui->Delete_9,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        Delete(8);
    });

    connect(ui->Delete_10,QOverload<bool>::of(&QPushButton::clicked),[=](bool check){
        Delete(9);
    });

}

MainScreen::~MainScreen()
{
    delete ui;
}

void MainScreen::Get(int No){
    QClipboard *pClip = QApplication::clipboard();
    switch (No) {
    case 0:{
        pClip->setText(decode(ui->PassWord_1->text()));
        QMessageBox::information(nullptr,"OK","复制成功",QMessageBox::Yes,QMessageBox::Yes);
        break;
    }
    case 1:{
        pClip->setText(decode(ui->PassWord_2->text()));
        QMessageBox::information(nullptr,"OK","复制成功",QMessageBox::Yes,QMessageBox::Yes);
        break;
    }
    case 2:{
        pClip->setText(decode(ui->PassWord_3->text()));
        QMessageBox::information(nullptr,"OK","复制成功",QMessageBox::Yes,QMessageBox::Yes);
        break;
    }
    case 3:{
        pClip->setText(decode(ui->PassWord_4->text()));
        QMessageBox::information(nullptr,"OK","复制成功",QMessageBox::Yes,QMessageBox::Yes);
        break;
    }
    case 4:{
        pClip->setText(decode(ui->PassWord_5->text()));
        QMessageBox::information(nullptr,"OK","复制成功",QMessageBox::Yes,QMessageBox::Yes);
        break;
    }
    case 5:{
        pClip->setText(decode(ui->PassWord_6->text()));
        QMessageBox::information(nullptr,"OK","复制成功",QMessageBox::Yes,QMessageBox::Yes);
        break;
    }
    case 6:{
        pClip->setText(decode(ui->PassWord_7->text()));
        QMessageBox::information(nullptr,"OK","复制成功",QMessageBox::Yes,QMessageBox::Yes);
        break;
    }
    case 7:{
        pClip->setText(decode(ui->PassWord_8->text()));
        QMessageBox::information(nullptr,"OK","复制成功",QMessageBox::Yes,QMessageBox::Yes);
        break;
    }
    case 8:{
        pClip->setText(decode(ui->PassWord_9->text()));
        QMessageBox::information(nullptr,"OK","复制成功",QMessageBox::Yes,QMessageBox::Yes);
        break;
    }
    case 9:{
        pClip->setText(decode(ui->PassWord_10->text()));
        QMessageBox::information(nullptr,"OK","复制成功",QMessageBox::Yes,QMessageBox::Yes);
        break;
    }
    default:
        break;
    }
}

void MainScreen::Exit_Save(){
    QString path = "../userinf/";
    path.append(Username);
    path.append(".psw");

    QFile passwordFile(path);

    if(!passwordFile.open(QIODevice::WriteOnly | QIODevice::Truncate)){
        qDebug()<< "Error 1231 : can't open error";
        return ;
    }

    QJsonArray _UserArray;

    for(int i = 0; i < sizes;i++){
        QJsonObject _users;
        _users.insert("_url",user[i]._url);
        _users.insert("_user",user[i]._user);
        _users.insert("_password",user[i]._password);

        _UserArray.append(_users);
    }

    QJsonDocument docs;
    docs.setArray(_UserArray);

    passwordFile.write(docs.toJson());

    passwordFile.close();

    this->close();
}

void MainScreen::CreateScreen(){
    QAQ = 0;
    QFile user_log("../config/log");

    if(!user_log.open(QFile::ReadOnly | QFile::Text)){
        qDebug()<< "Error 1231 : can't open error";
        return ;
    }

    QTextStream stream(&user_log);
    stream.setCodec("UTF-8");
    QString str = stream.readAll();
    Username = str;
    user_log.close();

    str = "正在使用的用户:"+str;

    setWindowTitle("主界面...");
    ui->label->setText(str.toUtf8());
    pages = 1;
    ui->Pages->setText(static_cast<QString>(pages));
}

void MainScreen::_read(){
    QString path = "../userinf/";
    path.append(Username);
    path.append(".psw");

    QFile passwordFile(path);

    if(!passwordFile.open(QFile::ReadOnly | QFile::Text)){
        qDebug()<< "Error 1231 : can't open error";
        return ;
    }

    if(passwordFile.size() == 0){
        qDebug()<< "Error 1231 : can't open error";
        return;
    }

    QTextStream _stream(&passwordFile);
    _stream.setCodec("UTF-8");
    QString _str = _stream.readAll();

    passwordFile.close();

    QJsonParseError jsonError;

    QJsonDocument doc = QJsonDocument::fromJson(_str.toUtf8(),&jsonError);

    if(jsonError.error != QJsonParseError::NoError && !doc.isNull()){
        QMessageBox::information(nullptr,"Error 1232","Json格式错误",QMessageBox::Yes,QMessageBox::Yes);
        return;
    }

    QJsonArray userArray;

    userArray = doc.array();

    for(int i = 0;i < userArray.size();i++){
        QJsonValue value = userArray.at(i);

        switch(value.type()){
        case QJsonValue::Object:{
            QJsonObject valueObj = value.toObject();
            QUser user_inf;

            QJsonValue urlvalue = valueObj.value("_url");
            QJsonValue uservalue = valueObj.value("_user");
            QJsonValue passwordvalue = valueObj.value("_password");

            user_inf._url = urlvalue.toString();
            user_inf._user = uservalue.toString();
            user_inf._password = passwordvalue.toString();

            user.push_back(user_inf);
            break;

        }
        default:
            break;
        }
    }

    sizes = static_cast<int>(user.size());

    max_pages = (sizes+9)/10;

}

void MainScreen::LastPage(){
    if(pages-1 <= 0){
        pages--;
        show_inf();
    }
    else{
        QMessageBox::information(nullptr,"Error 1233","已经到顶了",QMessageBox::Yes,QMessageBox::Yes);
        return;
    }
}

void MainScreen::NextPage(){
    if(pages+1 <= max_pages){
        pages++;
        show_inf();
    }
    else{
        QMessageBox::information(nullptr,"Error 1233","已经到最后了",QMessageBox::Yes,QMessageBox::Yes);
        return;
    }
}

void MainScreen::Addnew(){
    addui.exec();

    QString path = "../config/log_1";

    QFile File(path);

    if(!File.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Error 1231";
        return;
    }

    QTextStream stream(&File);
    stream.setCodec("UTF-8");
    QString str = stream.readAll();

    File.close();

    QJsonParseError jsonError;

    QJsonDocument doc = QJsonDocument::fromJson(str.toUtf8(),&jsonError);

    if(jsonError.error != QJsonParseError::NoError && !doc.isNull()){
        QMessageBox::information(nullptr,"Error 1232","Json格式错误",QMessageBox::Yes,QMessageBox::Yes);
        return;
    }

    QJsonArray userArray;

    userArray = doc.array();

    QJsonValue value = userArray.at(0);

    switch (value.type()) {
    case QJsonValue::Object:{
        QJsonObject valueObj = value.toObject();
        QUser user_inf;

        user_inf._url = valueObj.value("_url").toString();
        user_inf._user = valueObj.value("_user").toString();
        user_inf._password = encode(valueObj.value("_password").toString());

        user.push_back(user_inf);
    }
    default:
        break;
    }

    sizes++;
    max_pages = (sizes+9)/10;

    show_inf();
}

void MainScreen::Change(int No){
    changeui.exec();

    QString path = "../config/log_1";

    QFile File(path);

    if(!File.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Error 1231";
        return;
    }

    QTextStream stream(&File);
    stream.setCodec("UTF-8");
    QString str = stream.readAll();

    File.close();

    QJsonParseError jsonError;

    QJsonDocument doc = QJsonDocument::fromJson(str.toUtf8(),&jsonError);

    if(jsonError.error != QJsonParseError::NoError && !doc.isNull()){
        QMessageBox::information(nullptr,"Error 1232","Json格式错误",QMessageBox::Yes,QMessageBox::Yes);
        return;
    }

    QJsonArray userArray;

    userArray = doc.array();

    QJsonValue value = userArray.at(0);

    QUser user_inf;

    switch (value.type()) {
    case QJsonValue::Object:{
        QJsonObject valueObj = value.toObject();


        user_inf._url = valueObj.value("_url").toString();
        user_inf._user = valueObj.value("_user").toString();
        user_inf._password = encode(valueObj.value("_password").toString());
    }
    default:
        break;
    }

    user[pages*10-10+No] = user_inf;

    show_inf();

}

void MainScreen::Delete(int No){
    int Num = (pages-1)*10+No;
    user.erase(user.begin()+Num);
    sizes--;
    max_pages = (sizes+9)/10;
    if(sizes == 0){
        show_inf();
    }
    else if(sizes == pages*10-10){
        LastPage();

        show_inf();
    }
    else {
        show_inf();
    }


}

void MainScreen::show_inf(){
    int start = (pages-1)*10;
    int end = std::min(pages*10,sizes);
    int p = 0;
    for(int i = start;i < end;i++,p++){
        switch (p) {
        case 0:{
            ui->NO_1->setText("1");

            ui->Url_1->setText(user[i]._url);
            ui->Name_1->setText(user[i]._user);
            ui->PassWord_1->setText(user[i]._password);

            ui->Get_1->setVisible(1);
            ui->Change_1->setVisible(1);
            ui->Delete_1->setVisible(1);

            break;
        }
        case 1:{
            ui->NO_2->setText("2");

            ui->Url_2->setText(user[i]._url);
            ui->Name_2->setText(user[i]._user);
            ui->PassWord_2->setText(user[i]._password);

            ui->Get_2->setVisible(1);
            ui->Change_2->setVisible(1);
            ui->Delete_2->setVisible(1);

            break;
        }
        case 2:{
            ui->NO_3->setText("3");

            ui->Url_3->setText(user[i]._url);
            ui->Name_3->setText(user[i]._user);
            ui->PassWord_3->setText(user[i]._password);

            ui->Get_3->setVisible(1);
            ui->Change_3->setVisible(1);
            ui->Delete_3->setVisible(1);

            break;
        }
        case 3:{
            ui->NO_4->setText("4");

            ui->Url_4->setText(user[i]._url);
            ui->Name_4->setText(user[i]._user);
            ui->PassWord_4->setText(user[i]._password);

            ui->Get_4->setVisible(1);
            ui->Change_4->setVisible(1);
            ui->Delete_4->setVisible(1);

            break;
        }
        case 4:{
            ui->NO_5->setText("5");

            ui->Url_5->setText(user[i]._url);
            ui->Name_5->setText(user[i]._user);
            ui->PassWord_5->setText(user[i]._password);

            ui->Get_5->setVisible(1);
            ui->Change_5->setVisible(1);
            ui->Delete_5->setVisible(1);

            break;
        }

        case 5:{
            ui->NO_6->setText("6");

            ui->Url_6->setText(user[i]._url);
            ui->Name_6->setText(user[i]._user);
            ui->PassWord_6->setText(user[i]._password);

            ui->Get_6->setVisible(1);
            ui->Change_6->setVisible(1);
            ui->Delete_6->setVisible(1);

            break;
        }

        case 6:{
            ui->NO_7->setText("7");

            ui->Url_7->setText(user[i]._url);
            ui->Name_7->setText(user[i]._user);
            ui->PassWord_7->setText(user[i]._password);

            ui->Get_7->setVisible(1);
            ui->Change_7->setVisible(1);
            ui->Delete_7->setVisible(1);

            break;
        }

        case 7:{
            ui->NO_8->setText("8");

            ui->Url_8->setText(user[i]._url);
            ui->Name_8->setText(user[i]._user);
            ui->PassWord_8->setText(user[i]._password);

            ui->Get_8->setVisible(1);
            ui->Change_8->setVisible(1);
            ui->Delete_8->setVisible(1);

            break;
        }

        case 8:{
            ui->NO_9->setText("9");

            ui->Url_9->setText(user[i]._url);
            ui->Name_9->setText(user[i]._user);
            ui->PassWord_9->setText(user[i]._password);

            ui->Get_9->setVisible(1);
            ui->Change_9->setVisible(1);
            ui->Delete_9->setVisible(1);

            break;
        }

        case 9:{
            ui->NO_10->setText("10");

            ui->Url_10->setText(user[i]._url);
            ui->Name_10->setText(user[i]._user);
            ui->PassWord_10->setText(user[i]._password);

            ui->Get_10->setVisible(1);
            ui->Change_10->setVisible(1);
            ui->Delete_10->setVisible(1);

            break;
        }

        default:
            break;
        }
    }

    for(;p < 10;p++){
        switch (p) {
        case 0:{
            ui->NO_1->setText(NullContent);

            ui->Url_1->setText(NullContent);
            ui->Name_1->setText(NullContent);
            ui->PassWord_1->setText(NullContent);

            ui->Get_1->setVisible(0);
            ui->Change_1->setVisible(0);
            ui->Delete_1->setVisible(0);

            break;
        }
        case 1:{
            ui->NO_2->setText(NullContent);

            ui->Url_2->setText(NullContent);
            ui->Name_2->setText(NullContent);
            ui->PassWord_2->setText(NullContent);

            ui->Get_2->setVisible(0);
            ui->Change_2->setVisible(0);
            ui->Delete_2->setVisible(0);

            break;
        }
        case 2:{
            ui->NO_3->setText(NullContent);

            ui->Url_3->setText(NullContent);
            ui->Name_3->setText(NullContent);
            ui->PassWord_3->setText(NullContent);

            ui->Get_3->setVisible(0);
            ui->Change_3->setVisible(0);
            ui->Delete_3->setVisible(0);

            break;
        }
        case 3:{
            ui->NO_4->setText(NullContent);

            ui->Url_4->setText(NullContent);
            ui->Name_4->setText(NullContent);
            ui->PassWord_4->setText(NullContent);

            ui->Get_4->setVisible(0);
            ui->Change_4->setVisible(0);
            ui->Delete_4->setVisible(0);

            break;
        }
        case 4:{
            ui->NO_5->setText(NullContent);

            ui->Url_5->setText(NullContent);
            ui->Name_5->setText(NullContent);
            ui->PassWord_5->setText(NullContent);

            ui->Get_5->setVisible(0);
            ui->Change_5->setVisible(0);
            ui->Delete_5->setVisible(0);

            break;
        }

        case 5:{
            ui->NO_6->setText(NullContent);

            ui->Url_6->setText(NullContent);
            ui->Name_6->setText(NullContent);
            ui->PassWord_6->setText(NullContent);

            ui->Get_6->setVisible(0);
            ui->Change_6->setVisible(0);
            ui->Delete_6->setVisible(0);

            break;
        }

        case 6:{
            ui->NO_7->setText(NullContent);

            ui->Url_7->setText(NullContent);
            ui->Name_7->setText(NullContent);
            ui->PassWord_7->setText(NullContent);

            ui->Get_7->setVisible(0);
            ui->Change_7->setVisible(0);
            ui->Delete_7->setVisible(0);

            break;
        }

        case 7:{
            ui->NO_8->setText(NullContent);

            ui->Url_8->setText(NullContent);
            ui->Name_8->setText(NullContent);
            ui->PassWord_8->setText(NullContent);

            ui->Get_8->setVisible(0);
            ui->Change_8->setVisible(0);
            ui->Delete_8->setVisible(0);

            break;
        }

        case 8:{
            ui->NO_9->setText(NullContent);

            ui->Url_9->setText(NullContent);
            ui->Name_9->setText(NullContent);
            ui->PassWord_9->setText(NullContent);

            ui->Get_9->setVisible(0);
            ui->Change_9->setVisible(0);
            ui->Delete_9->setVisible(0);

            break;
        }

        case 9:{
            ui->NO_10->setText(NullContent);

            ui->Url_10->setText(NullContent);
            ui->Name_10->setText(NullContent);
            ui->PassWord_10->setText(NullContent);

            ui->Get_10->setVisible(0);
            ui->Change_10->setVisible(0);
            ui->Delete_10->setVisible(0);
            break;
        }

        default:
            break;
        }
    }

    ui->Pages->setText(QString::number(pages).toUtf8());
}

QString MainScreen::encode(QString src){
    QByteArray text = src.toLocal8Bit();
    QByteArray by = text.toBase64();
    return QString(by);
}

QString MainScreen::decode(QString src){
    QByteArray text = src.toLocal8Bit();
    QByteArray by = text.fromBase64(text);
    QString str = QString::fromLocal8Bit(by);
    return str;
}

void MainScreen::_Search(QString src){
    //仅支持Url搜索

    QMessageBox::information(nullptr,"Sorry","搜索还没完成",QMessageBox::Yes,QMessageBox::Yes);
    qDebug() << src;
    return;
}
