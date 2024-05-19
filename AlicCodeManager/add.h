#ifndef ADD_H
#define ADD_H

#include <QWidget>
#include <QFile>
#include <QDebug>
#include "myjson.h"

namespace Ui {
class Add;
}

class Add : public QWidget
{
    Q_OBJECT

public:
    explicit Add(QWidget *parent = nullptr);
    ~Add();

private:
    Ui::Add *ui;
    void _Add();
};

#endif // ADD_H
