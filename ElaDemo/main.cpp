#include "mainwindow.h"

#include <QApplication>
#include "ElaApplication.h"
#include "ElaWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ElaApplication::getInstance()->init();
    ElaWindow w;
    w.show();
    return a.exec();
}
