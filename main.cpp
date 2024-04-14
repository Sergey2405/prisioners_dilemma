#include "mainwindow.h"
#include "DilemaFactory.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    DilemaFactory dilemaFactory;
    w.show();
    return a.exec();
}
