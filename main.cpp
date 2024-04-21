#include "mainwindow.h"
#include "DilemaFactory.h" // TODO: remove
#include "DilemaGui/DilemaGui.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DilemaGui dilemaGui;
    DilemaFactory dilemaFactory;
    dilemaGui.show();
    return a.exec();
}
