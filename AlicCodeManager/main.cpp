#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    EnterUI eui;
    eui.show();

    return a.exec();
}
