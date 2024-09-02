#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include<QMouseEvent>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() != Qt::LeftButton)
        return;
    QPoint pt = event->pos(); // 相对widget位置
    QPointF relaPt = event->position();
    QPointF winPt = event->scenePosition();
    QPointF globPt = event->globalPos(); // 相对屏幕的绝对位置
    QString str = QString("pos()=(%1,%2)").arg(pt.x()).arg(pt.y());
    str += QString("\nposition()=(%1,%2)").arg(relaPt.x()).arg(relaPt.y());
    str += QString("\nscreenPos()=(%1,%2)").arg(winPt.x()).arg(winPt.y());
    str += QString("\nglobalPos()=(%1,%2)").arg(globPt.x()).arg(globPt.y());
    ui->lab_move->setText(str);
    ui->lab_move->adjustSize();
    ui->lab_move->move(event->pos());
    QWidget::mousePressEvent(event);
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    QPoint pt = ui->btn_move->pos();
    if((event->key() == Qt::Key_A) || (event->key() == Qt::Key_Left))
        ui->btn_move->move(pt.x() - 20, pt.y());
    if((event->key() == Qt::Key_D) || (event->key() == Qt::Key_Right))
        ui->btn_move->move(pt.x() + 20, pt.y());
    if((event->key() == Qt::Key_W) || (event->key() == Qt::Key_Up))
        ui->btn_move->move(pt.x(), pt.y() - 20);
    if((event->key() == Qt::Key_S) || (event->key() == Qt::Key_Down))
        ui->btn_move->move(pt.x(), pt.y() + 20);

    QWidget::keyPressEvent(event);
}


void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0, 0, width(), this->height(), QPixmap("qrc:/icon/images/background.jpg"));
}

void Widget::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton result = QMessageBox::question(this, "消息框", "确定要退出吗？",
                                                               QMessageBox::Yes | QMessageBox::No| QMessageBox::Cancel);
    if(result == QMessageBox::Yes)
        event->accept();
    else
        event->ignore();
}
