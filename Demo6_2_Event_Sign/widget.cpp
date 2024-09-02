#include "widget.h"
#include "ui_widget.h"
#include "tmylabel.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->label, &TMyLabel::doubleClicked, this, &Widget::do_doubleClick);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::mouseDoubleClickEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    ui->label->setText("窗口被双击了");
    ui->label->adjustSize();
}

inline void Widget::do_doubleClick()
{
    ui->label->setText("信号被双击了！信号槽得到响应");
    ui->label->adjustSize();
}
