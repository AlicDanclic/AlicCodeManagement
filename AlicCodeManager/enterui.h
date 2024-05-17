#ifndef ENTERUI_H
#define ENTERUI_H

#include <QWidget>
#include <QPalette>
#include <QString>
#include <fstream>
#include <QFile>
#include <QDebug>
#include <QMessageBox>
#include <myjson.h>
#include <mainscreen.h>

namespace Ui {
class EnterUI;
}

class EnterUI : public QWidget
{
    Q_OBJECT

public:
    explicit EnterUI(QWidget *parent = nullptr);
    ~EnterUI();
    void enter();
    void resign();
    MainScreen mainscreen;
private:
    Ui::EnterUI *ui;
};

#endif // ENTERUI_H
