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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labSC;
    QLabel *labDC;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labSC = new QLabel(Widget);
        labSC->setObjectName(QString::fromUtf8("labSC"));
        QFont font;
        font.setPointSize(15);
        labSC->setFont(font);

        verticalLayout->addWidget(labSC);

        labDC = new QLabel(Widget);
        labDC->setObjectName(QString::fromUtf8("labDC"));
        labDC->setFont(font);

        verticalLayout->addWidget(labDC);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        labSC->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\345\215\225\345\207\273\346\210\221</p></body></html>", nullptr));
        labDC->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\345\217\214\345\207\273\346\210\221</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
