#include "mainwindow.h"
#include <QApplication>
#include <QSharedMemory>
#include <QMessageBox>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSharedMemory singleton(a.applicationName());

    if(!singleton.create(1)){
        QMessageBox::warning(nullptr,"Warning","Program already running!");
        return false;
    }

    EnterUI eui;
    eui.show();

    return a.exec();
}
