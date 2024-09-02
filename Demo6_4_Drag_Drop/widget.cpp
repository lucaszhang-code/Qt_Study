#include "widget.h"
#include "ui_widget.h"
#include <QMimeData>
#include <QFileInfo>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setAcceptDrops(true);
    ui->plainTextEdit->setAcceptDrops(false);
    ui->label->setAcceptDrops(false);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::resizeEvent(QResizeEvent *event)
{
    QSize sz = ui->plainTextEdit->size();
    ui->plainTextEdit->move(5, 5);
    ui->label->move(5, sz.height() + 10);
    ui->plainTextEdit->resize(this->width() - 10, sz.height());
    ui->label->resize(this->width() - 10, this->height() - sz.height() - 10);
    QPixmap scalePixmap = orginPix.scaledToHeight(ui->label->height(), Qt::SmoothTransformation);
    ui->label->setPixmap(scalePixmap);
    event->accept();
}

void Widget::dragEnterEvent(QDragEnterEvent *event)
{
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText("dragEnterEvent事件，mimeData的format:");
    for(auto &item : event->mimeData()->formats())
    {
        ui->plainTextEdit->appendPlainText(item);
    }
    for(auto &item : event->mimeData()->urls())
    {
        ui->plainTextEdit->appendPlainText(item.path().right(item.path().length() - 1));
    }


    if(event->mimeData()->hasUrls())
    {
        QString fileName = event->mimeData()->urls().at(0).fileName();
        QFileInfo fileInfo(fileName);
        QString ex = fileInfo.suffix().toUpper();
        if(ex == "JPG")
            event->acceptProposedAction();  // 我们接受这个东西进来
        else
            event->ignore();
    }
    else
        event->ignore();
}

void Widget::dropEvent(QDropEvent *event)
{
    QString fullPath = event->mimeData()->urls().at(0).path();
    fullPath = fullPath.right(fullPath.length() - 1);
    QPixmap pixmap(fullPath);
    orginPix = pixmap;
    pixmap = pixmap.scaledToHeight(ui->label->height(), Qt::SmoothTransformation);
    ui->label->setPixmap(pixmap);
    event->accept();
}
