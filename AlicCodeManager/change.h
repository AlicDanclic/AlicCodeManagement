#ifndef CHANGE_H
#define CHANGE_H

#include <QWidget>
#include <QFile>
#include <QDebug>
#include "myjson.h"

namespace Ui {
class ChangeUi;
}

class ChangeUi : public QWidget
{
    Q_OBJECT

public:
    explicit ChangeUi(QWidget *parent = nullptr);
    ~ChangeUi();

    void _Change();

private:
    Ui::ChangeUi *ui;
};

#endif // CHANGE_H
