#include "widget.h"
#include <QVBoxLayout>
#include <QHBoxLayout>

Widget::Widget(QWidget *parent) {
    btn1 = new QPushButton("改变文字", this);
    btn2 = new QPushButton("改变颜色", this);
    btn3 = new QPushButton("退出", this);
    label = new QLabel("Hello World", this);

    auto *vLay = new QVBoxLayout;
    auto *hLay = new QHBoxLayout;

   QFont font = label -> font();
   font.setPointSize(50);
   label ->setFont(font);


    vLay->addWidget(label);
    vLay->addLayout(hLay);
    hLay->addWidget(btn1);
    hLay->addWidget(btn2);
    hLay->addStretch();
    hLay->addWidget(btn3);


    setLayout(vLay);

    connect(btn3, &QPushButton::clicked,this, &QWidget::close);
    connect(btn1, &QPushButton::released, this, &Widget::changeText);
    connect(btn2, &QPushButton::released, this, &Widget::changeColor);

    show();
}

Widget::~Widget(){}

void Widget::changeText() {
    label ->setText("你好世界");
}

void Widget::changeColor() {
    QPalette palette;
    palette.setColor(QPalette::WindowText, Qt::red);
    label->setPalette(palette);

}