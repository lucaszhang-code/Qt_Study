#ifndef DEMO1_4_WIDGET_H
#define DEMO1_4_WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>

class widget : public QWidget {
public:
    widget(QWidget *parent = nullptr);
    ~widget();

private:
    QPushButton *btnRed;
    QPushButton *btnBlue;
    QPushButton *btnGreen;
    QLabel *label;
    void initUI();
    void assignSlots();

private slots:

};


#endif //DEMO1_4_WIDGET_H
