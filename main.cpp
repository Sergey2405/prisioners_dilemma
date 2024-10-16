#include "DilemaGui/DilemaGui.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DilemaGui dilemaGui;
    dilemaGui.show();
    return a.exec();
}
