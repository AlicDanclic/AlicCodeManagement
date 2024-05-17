#include "mainscreen.h"
#include "ui_mainscreen.h"

MainScreen::MainScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainScreen)
{
    ui->setupUi(this);

    CreateScreen();


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

    ui->Pages->setText("1");
}
