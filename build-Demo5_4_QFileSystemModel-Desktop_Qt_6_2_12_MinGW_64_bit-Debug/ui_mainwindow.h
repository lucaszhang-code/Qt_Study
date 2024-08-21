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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actSetRoot;
    QAction *actQuit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter_main;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioShowAll;
    QRadioButton *radioShowOnlyDir;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_EnableFilter;
    QComboBox *comboFilters;
    QPushButton *btnApplyFilters;
    QSpacerItem *horizontalSpacer_2;
    QTreeView *treeView;
    QSplitter *splitter;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QListView *listView;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labType;
    QLabel *labFileName;
    QLabel *labFileSize;
    QCheckBox *checkIsDir;
    QLabel *labPath;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(856, 611);
        actSetRoot = new QAction(MainWindow);
        actSetRoot->setObjectName(QString::fromUtf8("actSetRoot"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/folder1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSetRoot->setIcon(icon);
        actSetRoot->setMenuRole(QAction::NoRole);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon1);
        actQuit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        splitter_main = new QSplitter(centralwidget);
        splitter_main->setObjectName(QString::fromUtf8("splitter_main"));
        splitter_main->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter_main);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(groupBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioShowAll = new QRadioButton(frame);
        radioShowAll->setObjectName(QString::fromUtf8("radioShowAll"));

        horizontalLayout_3->addWidget(radioShowAll);

        radioShowOnlyDir = new QRadioButton(frame);
        radioShowOnlyDir->setObjectName(QString::fromUtf8("radioShowOnlyDir"));

        horizontalLayout_3->addWidget(radioShowOnlyDir);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        checkBox_EnableFilter = new QCheckBox(frame);
        checkBox_EnableFilter->setObjectName(QString::fromUtf8("checkBox_EnableFilter"));

        horizontalLayout_4->addWidget(checkBox_EnableFilter);

        comboFilters = new QComboBox(frame);
        comboFilters->addItem(QString());
        comboFilters->addItem(QString());
        comboFilters->addItem(QString());
        comboFilters->setObjectName(QString::fromUtf8("comboFilters"));
        comboFilters->setEnabled(false);
        comboFilters->setEditable(false);

        horizontalLayout_4->addWidget(comboFilters);

        btnApplyFilters = new QPushButton(frame);
        btnApplyFilters->setObjectName(QString::fromUtf8("btnApplyFilters"));
        btnApplyFilters->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/icons/828.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnApplyFilters->setIcon(icon2);

        horizontalLayout_4->addWidget(btnApplyFilters);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(frame);

        treeView = new QTreeView(groupBox);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        verticalLayout_2->addWidget(treeView);

        splitter_main->addWidget(groupBox);
        splitter = new QSplitter(splitter_main);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listView = new QListView(groupBox_2);
        listView->setObjectName(QString::fromUtf8("listView"));

        horizontalLayout->addWidget(listView);

        splitter->addWidget(groupBox_2);
        groupBox_3 = new QGroupBox(splitter);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tableView = new QTableView(groupBox_3);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        horizontalLayout_2->addWidget(tableView);

        splitter->addWidget(groupBox_3);
        splitter_main->addWidget(splitter);

        verticalLayout_3->addWidget(splitter_main);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labType = new QLabel(centralwidget);
        labType->setObjectName(QString::fromUtf8("labType"));
        labType->setMaximumSize(QSize(16777215, 50));

        horizontalLayout_5->addWidget(labType);

        labFileName = new QLabel(centralwidget);
        labFileName->setObjectName(QString::fromUtf8("labFileName"));

        horizontalLayout_5->addWidget(labFileName);

        labFileSize = new QLabel(centralwidget);
        labFileSize->setObjectName(QString::fromUtf8("labFileSize"));

        horizontalLayout_5->addWidget(labFileSize);

        checkIsDir = new QCheckBox(centralwidget);
        checkIsDir->setObjectName(QString::fromUtf8("checkIsDir"));

        horizontalLayout_5->addWidget(checkIsDir);


        verticalLayout_3->addLayout(horizontalLayout_5);

        labPath = new QLabel(centralwidget);
        labPath->setObjectName(QString::fromUtf8("labPath"));
        labPath->setMaximumSize(QSize(16777215, 50));

        verticalLayout_3->addWidget(labPath);

        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actSetRoot);
        toolBar->addSeparator();
        toolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actSetRoot->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\240\271\347\233\256\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        actSetRoot->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\240\271\347\233\256\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "TreeView", nullptr));
        radioShowAll->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\347\233\256\345\275\225\345\222\214\346\226\207\344\273\266", nullptr));
        radioShowOnlyDir->setText(QCoreApplication::translate("MainWindow", "\345\217\252\346\230\276\347\244\272\347\233\256\345\275\225", nullptr));
        checkBox_EnableFilter->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\350\277\207\346\273\244", nullptr));
        comboFilters->setItemText(0, QCoreApplication::translate("MainWindow", "*.h;*.cpp;*.ui", nullptr));
        comboFilters->setItemText(1, QCoreApplication::translate("MainWindow", "*.txt", nullptr));
        comboFilters->setItemText(2, QCoreApplication::translate("MainWindow", "*.jpg", nullptr));

        btnApplyFilters->setText(QCoreApplication::translate("MainWindow", "\345\272\224\347\224\250", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "ListView", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "TableView", nullptr));
        labType->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\347\261\273\345\236\213", nullptr));
        labFileName->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\345\220\215\357\274\232", nullptr));
        labFileSize->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\345\244\247\345\260\217\357\274\232", nullptr));
        checkIsDir->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\346\230\257\345\220\246\346\230\257\347\233\256\345\275\225", nullptr));
        labPath->setText(QCoreApplication::translate("MainWindow", "\350\267\257\345\276\204\345\220\215\357\274\232", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
