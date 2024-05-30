#ifndef DELETE_INFORMATION_H
#define DELETE_INFORMATION_H

#include <QDialog>
#include <QFile>
#include "myjson.h"
#include "code.h"

namespace Ui {
class Delete_Information;
}

class Delete_Information : public QDialog
{
    Q_OBJECT

public:
    explicit Delete_Information(QWidget *parent = nullptr);
    ~Delete_Information();

private:
    Ui::Delete_Information *ui;
    void Change_Information();
};

#endif // DELETE_INFORMATION_H
