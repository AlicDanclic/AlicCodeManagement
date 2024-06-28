#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QWidget>
#include <QTest>
#include <QFile>
#include <QClipboard>
#include <QMessageBox>
#include <QVector>
#include <QFrame>
#include <QSystemTrayIcon>
#include <QCloseEvent>
#include <QAction>
#include <QMenu>
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
    void updata();

    void NextPage();
    void LastPage();

    void Addnew();
    void Delete(int No);
    void Change(int No);
    void Get(int No);

    void Exit_Save();

    void _Search(QString src);
    void OutSearch();

    Delete_Information changeui;
    Add_New_Information addui;

    QString NullContent = "";
    QString Username;

    QString Root;

    int modes;

    int pages;
    int max_pages;
    int sizes;
    int QAQ;

    std::vector<QUser> user;
    std::vector<QUser> Search_vec;

private:
    Ui::MainScreen *ui;

    QSystemTrayIcon *SysIcon;
    QAction *Reset;
    QAction *Quit;
    QMenu *menu;
    void closeEvent(QCloseEvent *event);

private slots:
    void on_activatedSysTrayIcon(QSystemTrayIcon::ActivationReason reason);

};

#endif // MAINSCREEN_H
