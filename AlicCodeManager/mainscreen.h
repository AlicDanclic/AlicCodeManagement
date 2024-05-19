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
#include "add.h"
#include "change.h"

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
    void Change(int No);
    void Get(int No);

    void Exit_Save();

    void _Search(QString src);

private:
    Ui::MainScreen *ui;

    ChangeUi changeui;
    Add addui;

    QString NullContent = "";
    QString Username;

    int pages;
    int max_pages;
    int sizes;
    int QAQ;

    std::vector<QUser> user;

    QString encode(QString src);
    QString decode(QString src);
};

#endif // MAINSCREEN_H
