#include "widget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>

widget::widget(QWidget *parent) : QWidget(parent) {
    initUI();
    assignSlots();
}
widget::~widget(){}

void widget::assignSlots() {
    connect(btnRed, &QPushButton::clicked, this, [this](){QPalette p;
        p.setColor(QPalette::WindowText, Qt::red);
        label->setPalette(p);});

    connect(btnBlue, &QPushButton::clicked, this, [this](){QPalette p;
        p.setColor(QPalette::WindowText, Qt::blue);
        label->setPalette(p);});

    connect(btnGreen, &QPushButton::clicked, this, [this](){QPalette p;
        p.setColor(QPalette::WindowText   , Qt::green);
        label->setPalette(p);});

}

void widget::initUI() {
    label = new QLabel("Hello World",this);
    QFont font = label->font();
    font.setPointSize(50);
    font.setBold(true);
    label->setFont(font);
    QHBoxLayout *lay1 = new QHBoxLayout;
    lay1->addWidget(label);


    btnRed = new QPushButton("红色", this);
    btnBlue = new QPushButton("蓝色", this);
    btnGreen = new QPushButton("绿色", this);
    QHBoxLayout *lay2 = new QHBoxLayout;
    lay2->addWidget(btnRed);
    lay2->addWidget(btnBlue);
    lay2->addWidget(btnGreen);

    QVBoxLayout *vLay = new QVBoxLayout;
    vLay->addLayout(lay1);
    vLay->addLayout(lay2);

    setLayout(vLay);
}

