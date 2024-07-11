/********************************************************************************
** Form generated from reading UI file 'adminmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMAINWINDOW_H
#define UI_ADMINMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminMainWindow
{
public:
    QAction *act_account_setting;
    QAction *act_qualification_review;
    QAction *act_complaint_handing;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_admin;
    QLabel *label;
    QWidget *layoutWidget_15;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_22;
    QLineEdit *text_admin_age_2;
    QWidget *layoutWidget_16;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_23;
    QLineEdit *lineEdit_4;
    QPushButton *btn_admin_edit_2;
    QWidget *layoutWidget_18;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_25;
    QRadioButton *radio_admin_man_2;
    QRadioButton *radio_admin_female_2;
    QWidget *layoutWidget_11;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_21;
    QDateEdit *data_admin_birth_2;
    QWidget *layoutWidget_19;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_26;
    QLineEdit *text_admin_address_2;
    QWidget *layoutWidget_17;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_24;
    QLineEdit *text_admin_name_2;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_9;
    QLabel *avatar_frame;
    QPushButton *btn_change_avator_2;
    QWidget *page_verifyLicence;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QWidget *widget;
    QLabel *label_2;
    QLabel *label_licence;
    QLabel *label_9;
    QPushButton *btn_licence_refuse;
    QPushButton *btn_licence_access;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_storeMain;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_storeKind;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *label_storeName;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLabel *label_storeIdNum;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLabel *label_storeBankCard;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLabel *label_isPass;
    QWidget *page_complain;
    QFormLayout *formLayout;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout_9;
    QListWidget *complainList;
    QWidget *widget_2;
    QLabel *label_10;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QLabel *label_orderId;
    QTextEdit *text_complainText;
    QLabel *label_13;
    QLabel *label_complainImage;
    QLabel *label_15;
    QTextEdit *text_anwser;
    QPushButton *btn_saveAnswer;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *AdminMainWindow)
    {
        if (AdminMainWindow->objectName().isEmpty())
            AdminMainWindow->setObjectName(QString::fromUtf8("AdminMainWindow"));
        AdminMainWindow->resize(945, 699);
        act_account_setting = new QAction(AdminMainWindow);
        act_account_setting->setObjectName(QString::fromUtf8("act_account_setting"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/yonghu.svg"), QSize(), QIcon::Normal, QIcon::Off);
        act_account_setting->setIcon(icon);
        act_account_setting->setMenuRole(QAction::NoRole);
        act_qualification_review = new QAction(AdminMainWindow);
        act_qualification_review->setObjectName(QString::fromUtf8("act_qualification_review"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/shenhe.svg"), QSize(), QIcon::Normal, QIcon::Off);
        act_qualification_review->setIcon(icon1);
        act_qualification_review->setMenuRole(QAction::NoRole);
        act_complaint_handing = new QAction(AdminMainWindow);
        act_complaint_handing->setObjectName(QString::fromUtf8("act_complaint_handing"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/tousuchuli.svg"), QSize(), QIcon::Normal, QIcon::Off);
        act_complaint_handing->setIcon(icon2);
        act_complaint_handing->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(AdminMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_admin = new QWidget();
        page_admin->setObjectName(QString::fromUtf8("page_admin"));
        label = new QLabel(page_admin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 10, 281, 61));
        layoutWidget_15 = new QWidget(page_admin);
        layoutWidget_15->setObjectName(QString::fromUtf8("layoutWidget_15"));
        layoutWidget_15->setGeometry(QRect(420, 250, 231, 32));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget_15);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(layoutWidget_15);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_12->addWidget(label_22);

        text_admin_age_2 = new QLineEdit(layoutWidget_15);
        text_admin_age_2->setObjectName(QString::fromUtf8("text_admin_age_2"));
        text_admin_age_2->setMinimumSize(QSize(0, 30));
        text_admin_age_2->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setPointSize(12);
        text_admin_age_2->setFont(font);

        horizontalLayout_12->addWidget(text_admin_age_2);

        layoutWidget_16 = new QWidget(page_admin);
        layoutWidget_16->setObjectName(QString::fromUtf8("layoutWidget_16"));
        layoutWidget_16->setGeometry(QRect(420, 330, 277, 35));
        horizontalLayout_18 = new QHBoxLayout(layoutWidget_16);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(layoutWidget_16);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_18->addWidget(label_23);

        lineEdit_4 = new QLineEdit(layoutWidget_16);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setFont(font);

        horizontalLayout_18->addWidget(lineEdit_4);

        btn_admin_edit_2 = new QPushButton(page_admin);
        btn_admin_edit_2->setObjectName(QString::fromUtf8("btn_admin_edit_2"));
        btn_admin_edit_2->setGeometry(QRect(380, 500, 100, 30));
        btn_admin_edit_2->setMaximumSize(QSize(100, 30));
        btn_admin_edit_2->setFont(font);
        layoutWidget_18 = new QWidget(page_admin);
        layoutWidget_18->setObjectName(QString::fromUtf8("layoutWidget_18"));
        layoutWidget_18->setGeometry(QRect(240, 250, 160, 33));
        horizontalLayout_20 = new QHBoxLayout(layoutWidget_18);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(layoutWidget_18);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_20->addWidget(label_25);

        radio_admin_man_2 = new QRadioButton(layoutWidget_18);
        radio_admin_man_2->setObjectName(QString::fromUtf8("radio_admin_man_2"));
        radio_admin_man_2->setFont(font);
        radio_admin_man_2->setChecked(true);

        horizontalLayout_20->addWidget(radio_admin_man_2);

        radio_admin_female_2 = new QRadioButton(layoutWidget_18);
        radio_admin_female_2->setObjectName(QString::fromUtf8("radio_admin_female_2"));
        radio_admin_female_2->setFont(font);

        horizontalLayout_20->addWidget(radio_admin_female_2);

        layoutWidget_11 = new QWidget(page_admin);
        layoutWidget_11->setObjectName(QString::fromUtf8("layoutWidget_11"));
        layoutWidget_11->setGeometry(QRect(240, 330, 171, 31));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(layoutWidget_11);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_8->addWidget(label_21);

        data_admin_birth_2 = new QDateEdit(layoutWidget_11);
        data_admin_birth_2->setObjectName(QString::fromUtf8("data_admin_birth_2"));
        data_admin_birth_2->setMinimumSize(QSize(0, 0));
        data_admin_birth_2->setMaximumSize(QSize(16777215, 16777215));
        data_admin_birth_2->setDateTime(QDateTime(QDate(2004, 2, 16), QTime(8, 0, 0)));

        horizontalLayout_8->addWidget(data_admin_birth_2);

        layoutWidget_19 = new QWidget(page_admin);
        layoutWidget_19->setObjectName(QString::fromUtf8("layoutWidget_19"));
        layoutWidget_19->setGeometry(QRect(240, 410, 461, 32));
        horizontalLayout_21 = new QHBoxLayout(layoutWidget_19);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(layoutWidget_19);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_21->addWidget(label_26);

        text_admin_address_2 = new QLineEdit(layoutWidget_19);
        text_admin_address_2->setObjectName(QString::fromUtf8("text_admin_address_2"));
        text_admin_address_2->setMinimumSize(QSize(0, 30));
        text_admin_address_2->setMaximumSize(QSize(16777215, 30));
        text_admin_address_2->setFont(font);

        horizontalLayout_21->addWidget(text_admin_address_2);

        layoutWidget_17 = new QWidget(page_admin);
        layoutWidget_17->setObjectName(QString::fromUtf8("layoutWidget_17"));
        layoutWidget_17->setGeometry(QRect(420, 170, 231, 32));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget_17);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(layoutWidget_17);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_19->addWidget(label_24);

        text_admin_name_2 = new QLineEdit(layoutWidget_17);
        text_admin_name_2->setObjectName(QString::fromUtf8("text_admin_name_2"));
        text_admin_name_2->setMinimumSize(QSize(30, 0));
        text_admin_name_2->setMaximumSize(QSize(16777215, 30));
        text_admin_name_2->setFont(font);

        horizontalLayout_19->addWidget(text_admin_name_2);

        layoutWidget_8 = new QWidget(page_admin);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(240, 70, 122, 157));
        verticalLayout_9 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        avatar_frame = new QLabel(layoutWidget_8);
        avatar_frame->setObjectName(QString::fromUtf8("avatar_frame"));
        avatar_frame->setMinimumSize(QSize(120, 120));
        avatar_frame->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_9->addWidget(avatar_frame);

        btn_change_avator_2 = new QPushButton(layoutWidget_8);
        btn_change_avator_2->setObjectName(QString::fromUtf8("btn_change_avator_2"));

        verticalLayout_9->addWidget(btn_change_avator_2);

        stackedWidget->addWidget(page_admin);
        page_verifyLicence = new QWidget();
        page_verifyLicence->setObjectName(QString::fromUtf8("page_verifyLicence"));
        scrollArea = new QScrollArea(page_verifyLicence);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 20, 231, 521));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 229, 519));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(scrollAreaWidgetContents);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);
        widget = new QWidget(page_verifyLicence);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(260, 20, 571, 521));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 10, 141, 41));
        label_licence = new QLabel(widget);
        label_licence->setObjectName(QString::fromUtf8("label_licence"));
        label_licence->setGeometry(QRect(40, 330, 271, 171));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 300, 131, 31));
        btn_licence_refuse = new QPushButton(widget);
        btn_licence_refuse->setObjectName(QString::fromUtf8("btn_licence_refuse"));
        btn_licence_refuse->setGeometry(QRect(480, 480, 80, 24));
        btn_licence_access = new QPushButton(widget);
        btn_licence_access->setObjectName(QString::fromUtf8("btn_licence_access"));
        btn_licence_access->setGeometry(QRect(390, 480, 80, 24));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 60, 201, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        label_storeMain = new QLabel(layoutWidget);
        label_storeMain->setObjectName(QString::fromUtf8("label_storeMain"));
        label_storeMain->setFont(font);

        horizontalLayout_2->addWidget(label_storeMain);

        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 110, 201, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        label_storeKind = new QLabel(layoutWidget1);
        label_storeKind->setObjectName(QString::fromUtf8("label_storeKind"));
        label_storeKind->setFont(font);

        horizontalLayout_3->addWidget(label_storeKind);

        layoutWidget2 = new QWidget(widget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 160, 201, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        label_storeName = new QLabel(layoutWidget2);
        label_storeName->setObjectName(QString::fromUtf8("label_storeName"));
        label_storeName->setFont(font);

        horizontalLayout_4->addWidget(label_storeName);

        layoutWidget3 = new QWidget(widget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(40, 200, 311, 41));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        label_storeIdNum = new QLabel(layoutWidget3);
        label_storeIdNum->setObjectName(QString::fromUtf8("label_storeIdNum"));
        label_storeIdNum->setFont(font);

        horizontalLayout_5->addWidget(label_storeIdNum);

        layoutWidget4 = new QWidget(widget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(40, 250, 377, 41));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        label_storeBankCard = new QLabel(layoutWidget4);
        label_storeBankCard->setObjectName(QString::fromUtf8("label_storeBankCard"));
        label_storeBankCard->setFont(font);

        horizontalLayout_6->addWidget(label_storeBankCard);

        layoutWidget5 = new QWidget(widget);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(390, 420, 161, 31));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        label_isPass = new QLabel(layoutWidget5);
        label_isPass->setObjectName(QString::fromUtf8("label_isPass"));
        label_isPass->setFont(font);

        horizontalLayout_7->addWidget(label_isPass);

        stackedWidget->addWidget(page_verifyLicence);
        page_complain = new QWidget();
        page_complain->setObjectName(QString::fromUtf8("page_complain"));
        formLayout = new QFormLayout(page_complain);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        scrollArea_2 = new QScrollArea(page_complain);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 278, 541));
        horizontalLayout_9 = new QHBoxLayout(scrollAreaWidgetContents_2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        complainList = new QListWidget(scrollAreaWidgetContents_2);
        complainList->setObjectName(QString::fromUtf8("complainList"));

        horizontalLayout_9->addWidget(complainList);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        formLayout->setWidget(0, QFormLayout::LabelRole, scrollArea_2);

        widget_2 = new QWidget(page_complain);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        label_10 = new QLabel(widget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(230, 0, 151, 81));
        layoutWidget6 = new QWidget(widget_2);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(30, 80, 261, 41));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget6);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_10->addWidget(label_11);

        label_orderId = new QLabel(layoutWidget6);
        label_orderId->setObjectName(QString::fromUtf8("label_orderId"));
        label_orderId->setFont(font);

        horizontalLayout_10->addWidget(label_orderId);

        text_complainText = new QTextEdit(widget_2);
        text_complainText->setObjectName(QString::fromUtf8("text_complainText"));
        text_complainText->setGeometry(QRect(30, 170, 261, 141));
        label_13 = new QLabel(widget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(30, 140, 101, 31));
        label_complainImage = new QLabel(widget_2);
        label_complainImage->setObjectName(QString::fromUtf8("label_complainImage"));
        label_complainImage->setGeometry(QRect(300, 170, 271, 141));
        label_15 = new QLabel(widget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 320, 69, 31));
        text_anwser = new QTextEdit(widget_2);
        text_anwser->setObjectName(QString::fromUtf8("text_anwser"));
        text_anwser->setGeometry(QRect(30, 360, 551, 131));
        btn_saveAnswer = new QPushButton(widget_2);
        btn_saveAnswer->setObjectName(QString::fromUtf8("btn_saveAnswer"));
        btn_saveAnswer->setGeometry(QRect(490, 510, 92, 28));

        formLayout->setWidget(0, QFormLayout::FieldRole, widget_2);

        stackedWidget->addWidget(page_complain);

        horizontalLayout->addWidget(stackedWidget);

        AdminMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 945, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        AdminMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AdminMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(AdminMainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        AdminMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(act_account_setting);
        menu_2->addAction(act_qualification_review);
        menu_2->addAction(act_complaint_handing);
        toolBar->addAction(act_account_setting);
        toolBar->addSeparator();
        toolBar->addAction(act_qualification_review);
        toolBar->addAction(act_complaint_handing);

        retranslateUi(AdminMainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminMainWindow)
    {
        AdminMainWindow->setWindowTitle(QCoreApplication::translate("AdminMainWindow", "MainWindow", nullptr));
        act_account_setting->setText(QCoreApplication::translate("AdminMainWindow", "\350\264\246\346\210\267\350\256\276\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        act_account_setting->setToolTip(QCoreApplication::translate("AdminMainWindow", "\350\264\246\346\210\267\350\256\276\347\275\256", nullptr));
#endif // QT_CONFIG(tooltip)
        act_qualification_review->setText(QCoreApplication::translate("AdminMainWindow", "\350\265\204\350\264\250\345\256\241\346\240\270", nullptr));
#if QT_CONFIG(tooltip)
        act_qualification_review->setToolTip(QCoreApplication::translate("AdminMainWindow", "\350\265\204\350\264\250\345\256\241\346\240\270", nullptr));
#endif // QT_CONFIG(tooltip)
        act_complaint_handing->setText(QCoreApplication::translate("AdminMainWindow", "\346\212\225\350\257\211\345\244\204\347\220\206", nullptr));
#if QT_CONFIG(tooltip)
        act_complaint_handing->setToolTip(QCoreApplication::translate("AdminMainWindow", "\346\212\225\350\257\211\345\244\204\347\220\206", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">\347\256\241\347\220\206\345\221\230\345\237\272\346\234\254\344\277\241\346\201\257</span></p></body></html>", nullptr));
        label_22->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\271\264\351\276\204</span></p></body></html>", nullptr));
        text_admin_age_2->setText(QCoreApplication::translate("AdminMainWindow", "20", nullptr));
        label_23->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\350\201\224\347\263\273\346\226\271\345\274\217</span></p></body></html>", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("AdminMainWindow", "18277339007", nullptr));
        btn_admin_edit_2->setText(QCoreApplication::translate("AdminMainWindow", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        label_25->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\200\247\345\210\253</span></p></body></html>", nullptr));
        radio_admin_man_2->setText(QCoreApplication::translate("AdminMainWindow", "\347\224\267", nullptr));
        radio_admin_female_2->setText(QCoreApplication::translate("AdminMainWindow", "\345\245\263", nullptr));
        label_21->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\347\224\237\346\227\245</span></p></body></html>", nullptr));
        label_26->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\256\266\345\272\255\344\275\217\345\235\200</span></p></body></html>", nullptr));
        text_admin_address_2->setText(QCoreApplication::translate("AdminMainWindow", "\345\271\277\350\245\277\346\241\202\346\236\227\345\270\202\347\201\265\345\267\235\345\216\277", nullptr));
        label_24->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\247\223\345\220\215</span></p></body></html>", nullptr));
        text_admin_name_2->setText(QCoreApplication::translate("AdminMainWindow", "\347\256\241\347\220\206\345\221\230001", nullptr));
        avatar_frame->setText(QString());
        btn_change_avator_2->setText(QCoreApplication::translate("AdminMainWindow", "\344\277\256\346\224\271\345\244\264\345\203\217", nullptr));
        label_2->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\350\220\245\344\270\232\347\224\263\350\257\267</span></p></body></html>", nullptr));
        label_licence->setText(QString());
        label_9->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\220\245\344\270\232\346\211\247\347\205\247</span></p></body></html>", nullptr));
        btn_licence_refuse->setText(QCoreApplication::translate("AdminMainWindow", "\346\213\222\347\273\235", nullptr));
        btn_licence_access->setText(QCoreApplication::translate("AdminMainWindow", "\351\200\232\350\277\207", nullptr));
        label_3->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\274\200\345\272\227\344\270\273\344\275\223\357\274\232</span></p></body></html>", nullptr));
        label_storeMain->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\344\270\252\344\275\223</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\272\227\351\223\272\347\261\273\345\236\213\357\274\232</span></p></body></html>", nullptr));
        label_storeKind->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\344\270\223\345\215\226</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\220\245\344\270\232\350\200\205\345\247\223\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_storeName->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\234\261\345\216\237\345\221\263</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\220\245\344\270\232\350\200\205\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_storeIdNum->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">00000000000</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\351\223\266\350\241\214\350\264\246\346\210\267\344\277\241\346\201\257\357\274\232</span></p></body></html>", nullptr));
        label_storeBankCard->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">0000000000000000000</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\230\257\345\220\246\351\200\232\350\277\207\357\274\232</span></p></body></html>", nullptr));
        label_isPass->setText(QString());
        label_10->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\346\212\225\350\257\211\344\277\241\346\201\257</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\256\242\345\215\225\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_orderId->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">20240101000000</span></p></body></html>", nullptr));
        text_complainText->setHtml(QCoreApplication::translate("AdminMainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\346\261\244\345\222\214\350\217\234\351\203\275\346\222\222\344\272\206\357\274\214\345\244\226\345\215\226\344\271\237\350\266\205\346\227\266\344\272\206\357\274\214\350\257\267\346\261\202\351\200\200\346\254\276</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\212\225\350\257\211\344\277\241\346\201\257</span></p></body></html>", nullptr));
        label_complainImage->setText(QCoreApplication::translate("AdminMainWindow", "\351\205\215\345\233\276", nullptr));
        label_15->setText(QCoreApplication::translate("AdminMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\233\236\345\244\215</span></p></body></html>", nullptr));
        btn_saveAnswer->setText(QCoreApplication::translate("AdminMainWindow", "\347\241\256\345\256\232", nullptr));
        menu->setTitle(QCoreApplication::translate("AdminMainWindow", "\350\264\246\346\210\267\350\256\276\347\275\256", nullptr));
        menu_2->setTitle(QCoreApplication::translate("AdminMainWindow", "\345\267\245\344\275\234\345\214\272", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("AdminMainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMainWindow: public Ui_AdminMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMAINWINDOW_H
