/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actExit;
    QAction *actModelData;
    QAction *actAlignLeft;
    QAction *actAlignCenter;
    QAction *actAlignRight;
    QAction *actFontBold;
    QAction *actOpen;
    QAction *actAppend;
    QAction *actInsert;
    QAction *actDelete;
    QWidget *centralwidget;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *plainTextEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actExit = new QAction(MainWindow);
        actExit->setObjectName(QString::fromUtf8("actExit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/icons/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actExit->setIcon(icon);
        actExit->setMenuRole(QAction::NoRole);
        actModelData = new QAction(MainWindow);
        actModelData->setObjectName(QString::fromUtf8("actModelData"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/icons/export1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actModelData->setIcon(icon1);
        actModelData->setMenuRole(QAction::NoRole);
        actAlignLeft = new QAction(MainWindow);
        actAlignLeft->setObjectName(QString::fromUtf8("actAlignLeft"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/icons/508.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actAlignLeft->setIcon(icon2);
        actAlignLeft->setMenuRole(QAction::NoRole);
        actAlignCenter = new QAction(MainWindow);
        actAlignCenter->setObjectName(QString::fromUtf8("actAlignCenter"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/icons/510.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actAlignCenter->setIcon(icon3);
        actAlignCenter->setMenuRole(QAction::NoRole);
        actAlignRight = new QAction(MainWindow);
        actAlignRight->setObjectName(QString::fromUtf8("actAlignRight"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/icons/512.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actAlignRight->setIcon(icon4);
        actAlignRight->setMenuRole(QAction::NoRole);
        actFontBold = new QAction(MainWindow);
        actFontBold->setObjectName(QString::fromUtf8("actFontBold"));
        actFontBold->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/icons/500.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFontBold->setIcon(icon5);
        actFontBold->setMenuRole(QAction::NoRole);
        actOpen = new QAction(MainWindow);
        actOpen->setObjectName(QString::fromUtf8("actOpen"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/icons/open.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen->setIcon(icon6);
        actOpen->setMenuRole(QAction::NoRole);
        actAppend = new QAction(MainWindow);
        actAppend->setObjectName(QString::fromUtf8("actAppend"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/icons/append.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actAppend->setIcon(icon7);
        actAppend->setMenuRole(QAction::NoRole);
        actInsert = new QAction(MainWindow);
        actInsert->setObjectName(QString::fromUtf8("actInsert"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/icons/306.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actInsert->setIcon(icon8);
        actInsert->setMenuRole(QAction::NoRole);
        actDelete = new QAction(MainWindow);
        actDelete->setObjectName(QString::fromUtf8("actDelete"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/image/icons/delete.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actDelete->setIcon(icon9);
        actDelete->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(100, 70, 560, 234));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        horizontalLayout->addWidget(tableView);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        horizontalLayout_2->addWidget(plainTextEdit);

        splitter->addWidget(groupBox_2);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actOpen);
        toolBar->addAction(actModelData);
        toolBar->addSeparator();
        toolBar->addAction(actAppend);
        toolBar->addAction(actInsert);
        toolBar->addAction(actDelete);
        toolBar->addSeparator();
        toolBar->addAction(actAlignLeft);
        toolBar->addAction(actAlignCenter);
        toolBar->addAction(actAlignRight);
        toolBar->addAction(actFontBold);
        toolBar->addSeparator();
        toolBar->addAction(actExit);

        retranslateUi(MainWindow);
        QObject::connect(actExit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actExit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actModelData->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\346\265\217\350\247\210", nullptr));
#if QT_CONFIG(tooltip)
        actModelData->setToolTip(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\346\265\217\350\247\210", nullptr));
#endif // QT_CONFIG(tooltip)
        actAlignLeft->setText(QCoreApplication::translate("MainWindow", "\345\261\205\345\267\246", nullptr));
#if QT_CONFIG(tooltip)
        actAlignLeft->setToolTip(QCoreApplication::translate("MainWindow", "\345\261\205\345\267\246", nullptr));
#endif // QT_CONFIG(tooltip)
        actAlignCenter->setText(QCoreApplication::translate("MainWindow", "\345\261\205\344\270\255", nullptr));
#if QT_CONFIG(tooltip)
        actAlignCenter->setToolTip(QCoreApplication::translate("MainWindow", "\345\261\205\344\270\255", nullptr));
#endif // QT_CONFIG(tooltip)
        actAlignRight->setText(QCoreApplication::translate("MainWindow", "\345\261\205\345\217\263", nullptr));
#if QT_CONFIG(tooltip)
        actAlignRight->setToolTip(QCoreApplication::translate("MainWindow", "\345\261\205\345\217\263", nullptr));
#endif // QT_CONFIG(tooltip)
        actFontBold->setText(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actFontBold->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actOpen->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(tooltip)
        actOpen->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actAppend->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\241\214", nullptr));
#if QT_CONFIG(tooltip)
        actAppend->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        actInsert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\214", nullptr));
#if QT_CONFIG(tooltip)
        actInsert->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        actDelete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\241\214", nullptr));
#if QT_CONFIG(tooltip)
        actDelete->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "TableView", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "PlainTextEdit", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
