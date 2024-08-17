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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QPushButton *btnInitList;
    QPushButton *btnListClear;
    QPushButton *btnListAppend;
    QPushButton *btnListInsert;
    QPushButton *pushButton_5;
    QPushButton *btnListMoveUp;
    QPushButton *btnListMoveDown;
    QPushButton *btnListSort;
    QCheckBox *chkEditable;
    QListView *listView;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnTextClear;
    QPushButton *btnTextImport;
    QPlainTextEdit *plainTextEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_3 = new QWidget(groupBox);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnInitList = new QPushButton(widget_3);
        btnInitList->setObjectName(QString::fromUtf8("btnInitList"));

        gridLayout->addWidget(btnInitList, 0, 0, 1, 1);

        btnListClear = new QPushButton(widget_3);
        btnListClear->setObjectName(QString::fromUtf8("btnListClear"));

        gridLayout->addWidget(btnListClear, 0, 1, 1, 1);

        btnListAppend = new QPushButton(widget_3);
        btnListAppend->setObjectName(QString::fromUtf8("btnListAppend"));

        gridLayout->addWidget(btnListAppend, 1, 0, 1, 1);

        btnListInsert = new QPushButton(widget_3);
        btnListInsert->setObjectName(QString::fromUtf8("btnListInsert"));

        gridLayout->addWidget(btnListInsert, 1, 1, 1, 1);

        pushButton_5 = new QPushButton(widget_3);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 1, 2, 1, 1);

        btnListMoveUp = new QPushButton(widget_3);
        btnListMoveUp->setObjectName(QString::fromUtf8("btnListMoveUp"));

        gridLayout->addWidget(btnListMoveUp, 2, 0, 1, 1);

        btnListMoveDown = new QPushButton(widget_3);
        btnListMoveDown->setObjectName(QString::fromUtf8("btnListMoveDown"));

        gridLayout->addWidget(btnListMoveDown, 2, 1, 1, 1);

        btnListSort = new QPushButton(widget_3);
        btnListSort->setObjectName(QString::fromUtf8("btnListSort"));

        gridLayout->addWidget(btnListSort, 2, 2, 1, 1);

        chkEditable = new QCheckBox(widget_3);
        chkEditable->setObjectName(QString::fromUtf8("chkEditable"));
        chkEditable->setChecked(true);

        gridLayout->addWidget(chkEditable, 0, 2, 1, 1);


        verticalLayout->addWidget(widget_3);

        listView = new QListView(groupBox);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout->addWidget(listView);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        btnTextClear = new QPushButton(groupBox_2);
        btnTextClear->setObjectName(QString::fromUtf8("btnTextClear"));

        verticalLayout_2->addWidget(btnTextClear);

        btnTextImport = new QPushButton(groupBox_2);
        btnTextImport->setObjectName(QString::fromUtf8("btnTextImport"));

        verticalLayout_2->addWidget(btnTextImport);

        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout_2->addWidget(plainTextEdit);

        splitter->addWidget(groupBox_2);

        horizontalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "LIstView", nullptr));
        btnInitList->setText(QCoreApplication::translate("MainWindow", "\346\201\242\345\244\215\345\210\227\350\241\250", nullptr));
        btnListClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
        btnListAppend->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
        btnListInsert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\241\271", nullptr));
        btnListMoveUp->setText(QCoreApplication::translate("MainWindow", "\344\270\212\347\247\273", nullptr));
        btnListMoveDown->setText(QCoreApplication::translate("MainWindow", "\344\270\213\347\247\273", nullptr));
        btnListSort->setText(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217", nullptr));
        chkEditable->setText(QCoreApplication::translate("MainWindow", "\345\205\201\350\256\270\347\274\226\350\276\221", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "PlainTetxEdit", nullptr));
        btnTextClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        btnTextImport->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\225\260\346\215\256\346\250\241\345\236\213\347\232\204StringList", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
