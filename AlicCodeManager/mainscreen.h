#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QWidget>
#include <QFile>
#include <QtDebug>


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

private:
    Ui::MainScreen *ui;
};

#endif // MAINSCREEN_H
