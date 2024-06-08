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
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QKeySequenceEdit>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QToolButton *toolButton;
    QRadioButton *radioButton;
    QCheckBox *checkBox;
    QCommandLinkButton *commandLinkButton;
    QDialogButtonBox *buttonBox;
    QComboBox *comboBox;
    QFontComboBox *fontComboBox;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QPlainTextEdit *plainTextEdit;
    QSpinBox *spinBox;
    QDoubleSpinBox *doubleSpinBox;
    QDateEdit *dateEdit;
    QDial *dial;
    QScrollBar *horizontalScrollBar;
    QScrollBar *verticalScrollBar;
    QSlider *verticalSlider;
    QSlider *horizontalSlider;
    QKeySequenceEdit *keySequenceEdit;
    QLabel *label;
    QTextBrowser *textBrowser;
    QGraphicsView *graphicsView;
    QCalendarWidget *calendarWidget;
    QLCDNumber *lcdNumber;
    QProgressBar *progressBar;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 70, 80, 24));
        toolButton = new QToolButton(Widget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(160, 70, 41, 31));
        radioButton = new QRadioButton(Widget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(260, 80, 97, 22));
        checkBox = new QCheckBox(Widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(370, 80, 81, 22));
        commandLinkButton = new QCommandLinkButton(Widget);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(440, 70, 168, 41));
        buttonBox = new QDialogButtonBox(Widget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(50, 140, 166, 24));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        comboBox = new QComboBox(Widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(50, 190, 72, 24));
        fontComboBox = new QFontComboBox(Widget);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));
        fontComboBox->setGeometry(QRect(160, 190, 227, 24));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(420, 190, 113, 23));
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(50, 250, 104, 70));
        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(190, 250, 104, 70));
        spinBox = new QSpinBox(Widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(320, 250, 42, 24));
        doubleSpinBox = new QDoubleSpinBox(Widget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(320, 290, 62, 24));
        dateEdit = new QDateEdit(Widget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(400, 250, 110, 24));
        dial = new QDial(Widget);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(400, 280, 50, 64));
        horizontalScrollBar = new QScrollBar(Widget);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(550, 250, 160, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        verticalScrollBar = new QScrollBar(Widget);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(760, 230, 16, 160));
        verticalScrollBar->setOrientation(Qt::Vertical);
        verticalSlider = new QSlider(Widget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(60, 360, 16, 160));
        verticalSlider->setOrientation(Qt::Vertical);
        horizontalSlider = new QSlider(Widget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(100, 360, 160, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        keySequenceEdit = new QKeySequenceEdit(Widget);
        keySequenceEdit->setObjectName(QString::fromUtf8("keySequenceEdit"));
        keySequenceEdit->setGeometry(QRect(100, 400, 113, 23));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 540, 54, 16));
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(110, 490, 161, 111));
        graphicsView = new QGraphicsView(Widget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(290, 440, 191, 151));
        calendarWidget = new QCalendarWidget(Widget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(500, 290, 248, 156));
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(510, 460, 64, 23));
        progressBar = new QProgressBar(Widget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(510, 500, 118, 23));
        progressBar->setValue(24);
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(220, 0, 251, 61));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        toolButton->setText(QCoreApplication::translate("Widget", "...", nullptr));
        radioButton->setText(QCoreApplication::translate("Widget", "\345\215\225\351\200\211", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "\345\244\232\351\200\211", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("Widget", "\351\223\276\346\216\245", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Widget", "\344\275\240\345\245\275", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Widget", "\346\210\221\345\245\275", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Widget", "\345\244\247\345\256\266\345\245\275", nullptr));

        lineEdit->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\345\215\225\350\241\214\346\226\207\345\255\227", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\270\200\344\270\252\345\256\214\345\205\250\347\232\204\350\276\223\345\205\245\346\241\206</p></body></html>", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("Widget", "\345\217\252\350\203\275\350\276\223\345\205\245\346\226\207\345\255\227\n"
"", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\240\207\347\255\276", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\257\214\346\226\207\346\234\254\357\274\214\345\217\252\350\203\275\350\257\273</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Widget", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Widget", "\351\241\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Widget", "\351\241\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Widget", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
