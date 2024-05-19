#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QWidget>
#include <QFile>
#include <QtDebug>
#include <QClipboard>
#include <QMessageBox>
#include <QVector>
#include <QFrame>

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
    void NextPage();
    void LastPage();
    void Addnew();
    void show_inf();
    void _read();
private:
    Ui::MainScreen *ui;
    int pages;
    int max_pages;
    int sizes;
    std::vector<QUser> user;
};

#endif // MAINSCREEN_H
