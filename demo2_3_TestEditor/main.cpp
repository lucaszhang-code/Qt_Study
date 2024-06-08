#include <QApplication>
#include "widget.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    Widget w;
    w.setWindowTitle("QWidget");
    w.resize(400,300);
    w.show();

    return QApplication::exec();
}
