/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *btn_move;
    QLabel *lab_move;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        btn_move = new QPushButton(Widget);
        btn_move->setObjectName(QString::fromUtf8("btn_move"));
        btn_move->setGeometry(QRect(200, 120, 141, 91));
        lab_move = new QLabel(Widget);
        lab_move->setObjectName(QString::fromUtf8("lab_move"));
        lab_move->setGeometry(QRect(210, 300, 131, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        lab_move->setFont(font);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        btn_move->setText(QCoreApplication::translate("Widget", "Movable Button \n"
" W,S,A,D\347\247\273\345\212\250", nullptr));
        lab_move->setText(QCoreApplication::translate("Widget", "\347\202\271\345\207\273\351\274\240\346\240\207\345\267\246\351\224\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
