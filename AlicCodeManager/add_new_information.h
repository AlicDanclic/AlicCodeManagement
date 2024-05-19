#ifndef ADD_NEW_INFORMATION_H
#define ADD_NEW_INFORMATION_H

#include <QDialog>
#include <QFile>
#include <QDebug>
#include "myjson.h"

namespace Ui {
class Add_New_Information;
}

class Add_New_Information : public QDialog
{
    Q_OBJECT

public:
    explicit Add_New_Information(QWidget *parent = nullptr);
    ~Add_New_Information();

private:
    Ui::Add_New_Information *ui;
    void add_new_information_to_log();
};

#endif // ADD_NEW_INFORMATION_H
