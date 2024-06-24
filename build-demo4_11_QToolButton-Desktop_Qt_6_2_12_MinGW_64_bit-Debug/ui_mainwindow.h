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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actListInit;
    QAction *actListClear;
    QAction *actListInsert;
    QAction *actListAppend;
    QAction *actListDelete;
    QAction *actQuit;
    QAction *actSelAll;
    QAction *actSelNone;
    QAction *actSelInvs;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_6;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page;
    QGridLayout *gridLayout;
    QToolButton *tBtnListInit;
    QToolButton *tBtnListClear;
    QToolButton *tBtnListInsert;
    QToolButton *tBtnListAppend;
    QToolButton *tBtnListDelete;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox_Sorting;
    QToolButton *tBtnSortAsc;
    QToolButton *tBtnSortDes;
    QSpacerItem *verticalSpacer;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *tBtnClearText;
    QToolButton *tBtnAddLine;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *editCutItemText;
    QCheckBox *chkBoxListEditable;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *tBtnSelectItem;
    QToolButton *tBtnSelectAll;
    QToolButton *tBtnSelNone;
    QToolButton *tBtnSellnvs;
    QSpacerItem *horizontalSpacer;
    QListWidget *listWidget;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(771, 519);
        actListInit = new QAction(MainWindow);
        actListInit->setObjectName(QString::fromUtf8("actListInit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/128.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListInit->setIcon(icon);
        actListInit->setMenuRole(QAction::NoRole);
        actListClear = new QAction(MainWindow);
        actListClear->setObjectName(QString::fromUtf8("actListClear"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/delete1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListClear->setIcon(icon1);
        actListClear->setMenuRole(QAction::NoRole);
        actListInsert = new QAction(MainWindow);
        actListInsert->setObjectName(QString::fromUtf8("actListInsert"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/icons/424.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListInsert->setIcon(icon2);
        actListInsert->setMenuRole(QAction::NoRole);
        actListAppend = new QAction(MainWindow);
        actListAppend->setObjectName(QString::fromUtf8("actListAppend"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/icons/316.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListAppend->setIcon(icon3);
        actListAppend->setMenuRole(QAction::NoRole);
        actListDelete = new QAction(MainWindow);
        actListDelete->setObjectName(QString::fromUtf8("actListDelete"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/icons/324.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListDelete->setIcon(icon4);
        actListDelete->setMenuRole(QAction::NoRole);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        actQuit->setEnabled(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/icons/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon5);
        actQuit->setMenuRole(QAction::NoRole);
        actSelAll = new QAction(MainWindow);
        actSelAll->setObjectName(QString::fromUtf8("actSelAll"));
        actSelAll->setMenuRole(QAction::NoRole);
        actSelNone = new QAction(MainWindow);
        actSelNone->setObjectName(QString::fromUtf8("actSelNone"));
        actSelNone->setMenuRole(QAction::NoRole);
        actSelInvs = new QAction(MainWindow);
        actSelInvs->setObjectName(QString::fromUtf8("actSelInvs"));
        actSelInvs->setEnabled(false);
        actSelInvs->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_6 = new QHBoxLayout(centralwidget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setMaximumSize(QSize(200, 16777215));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 152, 310));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tBtnListInit = new QToolButton(page);
        tBtnListInit->setObjectName(QString::fromUtf8("tBtnListInit"));
        tBtnListInit->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnListInit->setAutoRaise(true);

        gridLayout->addWidget(tBtnListInit, 0, 0, 1, 1);

        tBtnListClear = new QToolButton(page);
        tBtnListClear->setObjectName(QString::fromUtf8("tBtnListClear"));
        tBtnListClear->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnListClear->setAutoRaise(true);

        gridLayout->addWidget(tBtnListClear, 1, 0, 1, 1);

        tBtnListInsert = new QToolButton(page);
        tBtnListInsert->setObjectName(QString::fromUtf8("tBtnListInsert"));
        tBtnListInsert->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnListInsert->setAutoRaise(true);

        gridLayout->addWidget(tBtnListInsert, 2, 0, 1, 1);

        tBtnListAppend = new QToolButton(page);
        tBtnListAppend->setObjectName(QString::fromUtf8("tBtnListAppend"));
        tBtnListAppend->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnListAppend->setAutoRaise(true);

        gridLayout->addWidget(tBtnListAppend, 3, 0, 1, 1);

        tBtnListDelete = new QToolButton(page);
        tBtnListDelete->setObjectName(QString::fromUtf8("tBtnListDelete"));
        tBtnListDelete->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnListDelete->setAutoRaise(true);

        gridLayout->addWidget(tBtnListDelete, 4, 0, 1, 1);

        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/icons/410.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page, icon6, QString::fromUtf8("\345\210\227\350\241\250\351\241\271\346\223\215\344\275\234"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 144, 327));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkBox_Sorting = new QCheckBox(page_2);
        checkBox_Sorting->setObjectName(QString::fromUtf8("checkBox_Sorting"));

        gridLayout_2->addWidget(checkBox_Sorting, 0, 0, 1, 1);

        tBtnSortAsc = new QToolButton(page_2);
        tBtnSortAsc->setObjectName(QString::fromUtf8("tBtnSortAsc"));
        tBtnSortAsc->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnSortAsc->setArrowType(Qt::UpArrow);

        gridLayout_2->addWidget(tBtnSortAsc, 1, 0, 1, 1);

        tBtnSortDes = new QToolButton(page_2);
        tBtnSortDes->setObjectName(QString::fromUtf8("tBtnSortDes"));
        tBtnSortDes->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnSortDes->setArrowType(Qt::DownArrow);

        gridLayout_2->addWidget(tBtnSortDes, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 213, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);

        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/icons/408.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_2, icon7, QString::fromUtf8("\345\210\227\350\241\250\346\216\222\345\272\217"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 185, 310));
        horizontalLayout_4 = new QHBoxLayout(page_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tBtnClearText = new QToolButton(page_3);
        tBtnClearText->setObjectName(QString::fromUtf8("tBtnClearText"));

        horizontalLayout_3->addWidget(tBtnClearText);

        tBtnAddLine = new QToolButton(page_3);
        tBtnAddLine->setObjectName(QString::fromUtf8("tBtnAddLine"));

        horizontalLayout_3->addWidget(tBtnAddLine);


        verticalLayout_4->addLayout(horizontalLayout_3);

        plainTextEdit = new QPlainTextEdit(page_3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout_4->addWidget(plainTextEdit);


        horizontalLayout_4->addLayout(verticalLayout_4);

        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/icons/412.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_3, icon8, QString::fromUtf8("\344\277\241\345\217\267\345\217\221\345\260\204\346\227\266\346\234\272"));
        splitter->addWidget(toolBox);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_5 = new QHBoxLayout(groupBox);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        editCutItemText = new QLineEdit(groupBox);
        editCutItemText->setObjectName(QString::fromUtf8("editCutItemText"));

        horizontalLayout->addWidget(editCutItemText);

        chkBoxListEditable = new QCheckBox(groupBox);
        chkBoxListEditable->setObjectName(QString::fromUtf8("chkBoxListEditable"));
        chkBoxListEditable->setChecked(true);

        horizontalLayout->addWidget(chkBoxListEditable);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tBtnSelectItem = new QToolButton(groupBox);
        tBtnSelectItem->setObjectName(QString::fromUtf8("tBtnSelectItem"));
        tBtnSelectItem->setPopupMode(QToolButton::MenuButtonPopup);

        horizontalLayout_2->addWidget(tBtnSelectItem);

        tBtnSelectAll = new QToolButton(groupBox);
        tBtnSelectAll->setObjectName(QString::fromUtf8("tBtnSelectAll"));

        horizontalLayout_2->addWidget(tBtnSelectAll);

        tBtnSelNone = new QToolButton(groupBox);
        tBtnSelNone->setObjectName(QString::fromUtf8("tBtnSelNone"));

        horizontalLayout_2->addWidget(tBtnSelNone);

        tBtnSellnvs = new QToolButton(groupBox);
        tBtnSellnvs->setObjectName(QString::fromUtf8("tBtnSellnvs"));

        horizontalLayout_2->addWidget(tBtnSellnvs);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        listWidget = new QListWidget(groupBox);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/icons/check2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setCheckState(Qt::Checked);
        __qlistwidgetitem->setIcon(icon9);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setCheckState(Qt::Checked);
        __qlistwidgetitem1->setIcon(icon9);
        __qlistwidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_3->addWidget(listWidget);


        horizontalLayout_5->addLayout(verticalLayout_3);

        splitter->addWidget(groupBox);

        horizontalLayout_6->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actListInit);
        toolBar->addAction(actListClear);
        toolBar->addAction(actListInsert);
        toolBar->addAction(actListAppend);
        toolBar->addAction(actListDelete);
        toolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actQuit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actListInit->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
#if QT_CONFIG(shortcut)
        actListInit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actListClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
#if QT_CONFIG(tooltip)
        actListClear->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
        actListInsert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        actListInsert->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actListInsert->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actListAppend->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        actListAppend->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actListAppend->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actListDelete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        actListDelete->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actListDelete->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actSelAll->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        actSelAll->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
        actSelNone->setText(QCoreApplication::translate("MainWindow", "\347\251\272\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        actSelNone->setToolTip(QCoreApplication::translate("MainWindow", "\347\251\272\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
        actSelInvs->setText(QCoreApplication::translate("MainWindow", "\345\217\215\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        actSelInvs->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\215\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
        tBtnListInit->setText(QCoreApplication::translate("MainWindow", "tBtnListInit", nullptr));
        tBtnListClear->setText(QCoreApplication::translate("MainWindow", "tBtnListClear", nullptr));
        tBtnListInsert->setText(QCoreApplication::translate("MainWindow", "tBtnListInsert", nullptr));
        tBtnListAppend->setText(QCoreApplication::translate("MainWindow", "tBtnListAppend", nullptr));
        tBtnListDelete->setText(QCoreApplication::translate("MainWindow", "tBtnListDelete", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250\351\241\271\346\223\215\344\275\234", nullptr));
        checkBox_Sorting->setText(QCoreApplication::translate("MainWindow", "\345\205\201\350\256\270\346\216\222\345\272\217", nullptr));
        tBtnSortAsc->setText(QCoreApplication::translate("MainWindow", "\345\215\207\345\272\217\346\216\222\345\272\217", nullptr));
        tBtnSortDes->setText(QCoreApplication::translate("MainWindow", "\351\231\215\345\272\217\346\216\222\345\272\217", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250\346\216\222\345\272\217", nullptr));
        tBtnClearText->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        tBtnAddLine->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\251\272\350\241\214", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("MainWindow", "\344\277\241\345\217\267\345\217\221\345\260\204\346\227\266\346\234\272", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\351\241\271\345\217\230\345\214\226", nullptr));
        chkBoxListEditable->setText(QCoreApplication::translate("MainWindow", "\351\241\271\345\217\257\347\274\226\350\276\221", nullptr));
        tBtnSelectItem->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\351\200\211\351\241\271", nullptr));
        tBtnSelectAll->setText(QCoreApplication::translate("MainWindow", "tBtnSelectAll", nullptr));
        tBtnSelNone->setText(QCoreApplication::translate("MainWindow", "tBtnSelNone", nullptr));
        tBtnSellnvs->setText(QCoreApplication::translate("MainWindow", "tBtnSellnvs", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\2562", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
