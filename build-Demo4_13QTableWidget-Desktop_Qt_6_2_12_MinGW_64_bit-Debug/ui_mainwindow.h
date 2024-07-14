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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnSetRow;
    QSpinBox *spinRowCount;
    QPushButton *btnInsertRow;
    QPushButton *btnAddRow;
    QPushButton *btnAutoHeight;
    QPushButton *btnAutoWidth;
    QCheckBox *chkBoxTabEditable;
    QCheckBox *chkBoxRowColor;
    QCheckBox *chkBoxHeaderH;
    QCheckBox *chkBoxHeaderV;
    QRadioButton *rBtnSelectRow;
    QRadioButton *rBtnSelectItem;
    QPushButton *btn_setHeader;
    QPushButton *btnReadToEdit;
    QPushButton *btnIniData;
    QPushButton *btnDelCurRow;
    QSplitter *splitter;
    QTableWidget *tableWidget;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(862, 644);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnSetRow = new QPushButton(groupBox);
        btnSetRow->setObjectName(QString::fromUtf8("btnSetRow"));

        gridLayout->addWidget(btnSetRow, 1, 0, 1, 1);

        spinRowCount = new QSpinBox(groupBox);
        spinRowCount->setObjectName(QString::fromUtf8("spinRowCount"));

        gridLayout->addWidget(spinRowCount, 1, 1, 1, 1);

        btnInsertRow = new QPushButton(groupBox);
        btnInsertRow->setObjectName(QString::fromUtf8("btnInsertRow"));

        gridLayout->addWidget(btnInsertRow, 3, 0, 1, 1);

        btnAddRow = new QPushButton(groupBox);
        btnAddRow->setObjectName(QString::fromUtf8("btnAddRow"));

        gridLayout->addWidget(btnAddRow, 3, 1, 1, 1);

        btnAutoHeight = new QPushButton(groupBox);
        btnAutoHeight->setObjectName(QString::fromUtf8("btnAutoHeight"));

        gridLayout->addWidget(btnAutoHeight, 5, 0, 1, 1);

        btnAutoWidth = new QPushButton(groupBox);
        btnAutoWidth->setObjectName(QString::fromUtf8("btnAutoWidth"));

        gridLayout->addWidget(btnAutoWidth, 5, 1, 1, 1);

        chkBoxTabEditable = new QCheckBox(groupBox);
        chkBoxTabEditable->setObjectName(QString::fromUtf8("chkBoxTabEditable"));
        chkBoxTabEditable->setChecked(true);

        gridLayout->addWidget(chkBoxTabEditable, 7, 0, 1, 1);

        chkBoxRowColor = new QCheckBox(groupBox);
        chkBoxRowColor->setObjectName(QString::fromUtf8("chkBoxRowColor"));
        chkBoxRowColor->setChecked(false);

        gridLayout->addWidget(chkBoxRowColor, 7, 1, 1, 1);

        chkBoxHeaderH = new QCheckBox(groupBox);
        chkBoxHeaderH->setObjectName(QString::fromUtf8("chkBoxHeaderH"));
        chkBoxHeaderH->setChecked(true);

        gridLayout->addWidget(chkBoxHeaderH, 8, 0, 1, 1);

        chkBoxHeaderV = new QCheckBox(groupBox);
        chkBoxHeaderV->setObjectName(QString::fromUtf8("chkBoxHeaderV"));
        chkBoxHeaderV->setChecked(true);

        gridLayout->addWidget(chkBoxHeaderV, 8, 1, 1, 1);

        rBtnSelectRow = new QRadioButton(groupBox);
        rBtnSelectRow->setObjectName(QString::fromUtf8("rBtnSelectRow"));

        gridLayout->addWidget(rBtnSelectRow, 9, 0, 1, 1);

        rBtnSelectItem = new QRadioButton(groupBox);
        rBtnSelectItem->setObjectName(QString::fromUtf8("rBtnSelectItem"));
        rBtnSelectItem->setChecked(true);

        gridLayout->addWidget(rBtnSelectItem, 9, 1, 1, 1);

        btn_setHeader = new QPushButton(groupBox);
        btn_setHeader->setObjectName(QString::fromUtf8("btn_setHeader"));

        gridLayout->addWidget(btn_setHeader, 0, 0, 1, 2);

        btnReadToEdit = new QPushButton(groupBox);
        btnReadToEdit->setObjectName(QString::fromUtf8("btnReadToEdit"));
        btnReadToEdit->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnReadToEdit, 6, 0, 1, 2);

        btnIniData = new QPushButton(groupBox);
        btnIniData->setObjectName(QString::fromUtf8("btnIniData"));

        gridLayout->addWidget(btnIniData, 2, 0, 1, 2);

        btnDelCurRow = new QPushButton(groupBox);
        btnDelCurRow->setObjectName(QString::fromUtf8("btnDelCurRow"));

        gridLayout->addWidget(btnDelCurRow, 4, 0, 1, 2);

        splitter_2->addWidget(groupBox);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        tableWidget = new QTableWidget(splitter);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        splitter->addWidget(tableWidget);
        plainTextEdit = new QPlainTextEdit(splitter);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        splitter->addWidget(plainTextEdit);
        splitter_2->addWidget(splitter);

        horizontalLayout->addWidget(splitter_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 862, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QTableWidgetDemo", nullptr));
        groupBox->setTitle(QString());
        btnSetRow->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\214\346\225\260", nullptr));
        btnInsertRow->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\214", nullptr));
        btnAddRow->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\241\214", nullptr));
        btnAutoHeight->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\350\241\214\351\253\230", nullptr));
        btnAutoWidth->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\345\210\227\345\256\275", nullptr));
        chkBoxTabEditable->setText(QCoreApplication::translate("MainWindow", "\350\241\250\346\240\274\345\217\257\347\274\226\350\276\221", nullptr));
        chkBoxRowColor->setText(QCoreApplication::translate("MainWindow", "\351\227\264\351\232\224\350\241\214\345\272\225\350\211\262", nullptr));
        chkBoxHeaderH->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\260\264\345\271\263\350\241\250\345\244\264", nullptr));
        chkBoxHeaderV->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\236\202\347\233\264\350\241\250\345\244\264", nullptr));
        rBtnSelectRow->setText(QCoreApplication::translate("MainWindow", "\350\241\214\351\200\211\346\213\251", nullptr));
        rBtnSelectItem->setText(QCoreApplication::translate("MainWindow", "\345\215\225\345\205\203\346\240\274\351\200\211\346\213\251", nullptr));
        btn_setHeader->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\260\264\345\271\263\350\241\250\345\244\264", nullptr));
        btnReadToEdit->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226\350\241\250\346\240\274\345\206\205\345\256\271\345\210\260\346\226\207\346\234\254", nullptr));
        btnIniData->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\350\241\250\346\240\274\346\225\260\346\215\256", nullptr));
        btnDelCurRow->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\350\241\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
