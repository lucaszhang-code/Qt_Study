#include <QApplication>
#include "dialog.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Dialog w;
    w.resize(400,300);
    w.show();
    return a.exec();
}
