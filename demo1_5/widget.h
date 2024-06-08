#ifndef DEMO1_5_WIDGET_H
#define DEMO1_5_WIDGET_H
#include <QWidget>
#include <QPushButton>
#include <QLabel>

class Widget : public QWidget{
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QLabel *label;
    void changeText();
    void changeColor();

private slots:

};

#endif //DEMO1_5_WIDGET_H
