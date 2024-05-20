#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QWidget>
#include <QTest>
#include <QFile>
#include <QtDebug>
#include <QClipboard>
#include <QMessageBox>
#include <QVector>
#include <QFrame>
#include "myjson.h"
#include "code.h"
#include "add_new_information.h"
#include "delete_information.h"

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

    Delete_Information changeui;
    Add_New_Information addui;

    QString NullContent = "";
    QString Username;

    int pages;
    int max_pages;
    int sizes;
    int QAQ;

    std::vector<QUser> user;
private:
    Ui::MainScreen *ui;


};

#endif // MAINSCREEN_H
