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

}

MainScreen::~MainScreen()
{
    delete ui;
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

    user_log.close();

    str = "正在使用的用户:"+str;

    setWindowTitle("主界面...");
    ui->label->setText(str.toUtf8());
    pages = 1;
    ui->Pages->setText(static_cast<QString>(pages));
}

void MainScreen::_read(){
    QFile user_log("../config/log");

    if(!user_log.open(QFile::ReadOnly | QFile::Text)){
        qDebug()<< "Error 1231 : can't open error";
        return ;
    }

    QTextStream stream(&user_log);
    stream.setCodec("UTF-8");
    QString str = stream.readAll();

    user_log.close();

    QString path = "../userinf/";
    path.append(str);
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

    QTextStream _stream(&user_log);
    _stream.setCodec("UTF-8");
    QString _str = stream.readAll();

    passwordFile.close();

    int i = 0;
    QUser user_inf;

    while(stream.atEnd()){
        if(i == 2){
            i = 0;
            user_inf._password = stream.readLine();
            user.push_back(user_inf);
        }
        if(i == 1){
            i++;
            user_inf._user = stream.readLine();
        }
        if(i == 0){
            i++;
            user_inf._url = stream.readLine();
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
            ui->Delete_1->setVisible(1);

            break;
        }
        case 1:{
            ui->NO_2->setText("2");

            ui->Url_2->setText(user[i]._url);
            ui->Name_2->setText(user[i]._user);
            ui->PassWord_2->setText(user[i]._password);

            ui->Get_2->setVisible(1);
            ui->Delete_2->setVisible(1);

            break;
        }
        case 2:{
            ui->NO_3->setText("3");

            ui->Url_3->setText(user[i]._url);
            ui->Name_3->setText(user[i]._user);
            ui->PassWord_3->setText(user[i]._password);

            ui->Get_3->setVisible(1);
            ui->Delete_3->setVisible(1);

            break;
        }
        case 3:{
            ui->NO_4->setText("4");

            ui->Url_4->setText(user[i]._url);
            ui->Name_4->setText(user[i]._user);
            ui->PassWord_4->setText(user[i]._password);

            ui->Get_4->setVisible(1);
            ui->Delete_4->setVisible(1);

            break;
        }
        case 4:{
            ui->NO_5->setText("5");

            ui->Url_5->setText(user[i]._url);
            ui->Name_5->setText(user[i]._user);
            ui->PassWord_5->setText(user[i]._password);

            ui->Get_5->setVisible(1);
            ui->Delete_5->setVisible(1);

            break;
        }

        case 5:{
            ui->NO_6->setText("6");

            ui->Url_6->setText(user[i]._url);
            ui->Name_6->setText(user[i]._user);
            ui->PassWord_6->setText(user[i]._password);

            ui->Get_6->setVisible(1);
            ui->Delete_6->setVisible(1);

            break;
        }

        case 6:{
            ui->NO_7->setText("7");

            ui->Url_7->setText(user[i]._url);
            ui->Name_7->setText(user[i]._user);
            ui->PassWord_7->setText(user[i]._password);

            ui->Get_7->setVisible(1);
            ui->Delete_7->setVisible(1);

            break;
        }

        case 7:{
            ui->NO_8->setText("8");

            ui->Url_8->setText(user[i]._url);
            ui->Name_8->setText(user[i]._user);
            ui->PassWord_8->setText(user[i]._password);

            ui->Get_8->setVisible(1);
            ui->Delete_8->setVisible(1);

            break;
        }

        case 8:{
            ui->NO_9->setText("9");

            ui->Url_9->setText(user[i]._url);
            ui->Name_9->setText(user[i]._user);
            ui->PassWord_9->setText(user[i]._password);

            ui->Get_9->setVisible(1);
            ui->Delete_9->setVisible(1);

            break;
        }

        case 9:{
            ui->NO_10->setText("10");

            ui->Url_10->setText(user[i]._url);
            ui->Name_10->setText(user[i]._user);
            ui->PassWord_10->setText(user[i]._password);

            ui->Get_10->setVisible(1);
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
            ui->Delete_1->setVisible(0);

            break;
        }
        case 1:{
            ui->NO_2->setText(NullContent);

            ui->Url_2->setText(NullContent);
            ui->Name_2->setText(NullContent);
            ui->PassWord_2->setText(NullContent);

            ui->Get_2->setVisible(0);
            ui->Delete_2->setVisible(0);

            break;
        }
        case 2:{
            ui->NO_3->setText(NullContent);

            ui->Url_3->setText(NullContent);
            ui->Name_3->setText(NullContent);
            ui->PassWord_3->setText(NullContent);

            ui->Get_3->setVisible(0);
            ui->Delete_3->setVisible(0);

            break;
        }
        case 3:{
            ui->NO_4->setText(NullContent);

            ui->Url_4->setText(NullContent);
            ui->Name_4->setText(NullContent);
            ui->PassWord_4->setText(NullContent);

            ui->Get_4->setVisible(0);
            ui->Delete_4->setVisible(0);

            break;
        }
        case 4:{
            ui->NO_5->setText(NullContent);

            ui->Url_5->setText(NullContent);
            ui->Name_5->setText(NullContent);
            ui->PassWord_5->setText(NullContent);

            ui->Get_5->setVisible(0);
            ui->Delete_5->setVisible(0);

            break;
        }

        case 5:{
            ui->NO_6->setText(NullContent);

            ui->Url_6->setText(NullContent);
            ui->Name_6->setText(NullContent);
            ui->PassWord_6->setText(NullContent);

            ui->Get_6->setVisible(0);
            ui->Delete_6->setVisible(0);

            break;
        }

        case 6:{
            ui->NO_7->setText(NullContent);

            ui->Url_7->setText(NullContent);
            ui->Name_7->setText(NullContent);
            ui->PassWord_7->setText(NullContent);

            ui->Get_7->setVisible(0);
            ui->Delete_7->setVisible(0);

            break;
        }

        case 7:{
            ui->NO_8->setText(NullContent);

            ui->Url_8->setText(NullContent);
            ui->Name_8->setText(NullContent);
            ui->PassWord_8->setText(NullContent);

            ui->Get_8->setVisible(0);
            ui->Delete_8->setVisible(0);

            break;
        }

        case 8:{
            ui->NO_9->setText(NullContent);

            ui->Url_9->setText(NullContent);
            ui->Name_9->setText(NullContent);
            ui->PassWord_9->setText(NullContent);

            ui->Get_9->setVisible(0);
            ui->Delete_9->setVisible(0);

            break;
        }

        case 9:{
            ui->NO_10->setText(NullContent);

            ui->Url_10->setText(NullContent);
            ui->Name_10->setText(NullContent);
            ui->PassWord_10->setText(NullContent);

            ui->Get_10->setVisible(0);
            ui->Delete_10->setVisible(0);
            break;
        }

        default:
            break;
        }
    }
}
