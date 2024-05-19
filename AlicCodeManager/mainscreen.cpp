#include "mainscreen.h"
#include "ui_mainscreen.h"

MainScreen::MainScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainScreen)
{
    ui->setupUi(this);

    CreateScreen();

    //_read();

}

MainScreen::~MainScreen()
{
    delete ui;
}


void MainScreen::CreateScreen(){
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
    }
    else{
        QMessageBox::information(nullptr,"Error 1233","已经到顶了",QMessageBox::Yes,QMessageBox::Yes);
        return;
    }
}

void MainScreen::NextPage(){
    if(pages+1 <= max_pages){
        pages++;
    }
    else{
        QMessageBox::information(nullptr,"Error 1233","已经到最后了",QMessageBox::Yes,QMessageBox::Yes);
        return;
    }
}
/*
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
            break;
        }
        case 1:

        case 2:

        case 3:

        case 4:

        case 5:

        case 6:

        case 7:

        case 8:

        case 9:

        default:
            break;
        }
    }
}*/
