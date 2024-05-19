#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QWidget>
#include <QFile>
#include <QtDebug>
#include <QClipboard>
#include <QMessageBox>
#include <QVector>
#include <QFrame>
#include "myjson.h"


struct QUser{
    QString _url;
    QString _user;
    QString _password;
};

namespace Ui {
class MainScreen;
}

class MainScreen : public QWidget
{
    Q_OBJECT

public:
    explicit MainScreen(QWidget *parent = nullptr);
    ~MainScreen();
    void CreateScreen();
    void show_inf();
    void _read();

    void NextPage();
    void LastPage();

    void Addnew();
    void Delete(int No);
    void Get(int No);

    void Exit_Save();

private:
    QString NullContent = "";
    Ui::MainScreen *ui;
    int pages;
    int max_pages;
    int sizes;
    std::vector<QUser> user;
    int QAQ;
    QString Username;
    QString encode(QString src);
    QString decode(QString src);
};

#endif // MAINSCREEN_H
