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
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *act_add_order;
    QAction *act_check_order;
    QAction *act_delete_order;
    QAction *act_check_account;
    QAction *act_add_dishes;
    QAction *act_backDishesList;
    QAction *act_edit_dishes;
    QAction *act_delete_dishes;
    QAction *act_orderManagement;
    QAction *act_summaryDishes;
    QAction *act_orderList_visible;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_user;
    QLabel *label_5;
    QPushButton *btn_admin_edit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *text_admin_address;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *text_admin_age;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QDateEdit *data_admin_birth;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QRadioButton *radio_admin_man;
    QRadioButton *radio_admin_female;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout;
    QLabel *avatar_frame;
    QPushButton *btn_change_avator;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *text_admin_name;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QLineEdit *lineEdit_3;
    QWidget *page_order;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLabel *dishesCount;
    QLabel *label_9;
    QLabel *totalPrice;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_generate_bills;
    QPushButton *btn_clear_carts;
    QWidget *page_checked;
    QGridLayout *gridLayout;
    QFrame *frame;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QLabel *label_bill_id;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *text_bill_name;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *radio_bill_male;
    QRadioButton *radio_bill_female;
    QWidget *layoutWidget10;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_15;
    QLineEdit *text_bill_contactInfo;
    QWidget *layoutWidget11;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_16;
    QComboBox *comboBox_bill_address;
    QWidget *layoutWidget12;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_17;
    QLabel *label_bill_date;
    QPushButton *btn_pay;
    QLabel *label_10;
    QLabel *label_bill_sum;
    QToolButton *btn_back;
    QScrollArea *checked_list;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_7;
    QListWidget *listWidget;
    QWidget *page_map;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_19;
    QLabel *label_map_date;
    QWidget *splitter;
    QGraphicsView *view_map;
    QScrollArea *map_checkList;
    QWidget *scrollAreaWidgetContents_3;
    QLabel *label_map_timeout;
    QWidget *page_editDishes;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_20;
    QScrollArea *scrollArea_dishes;
    QWidget *scrollAreaWidgetContents_4;
    QWidget *page_addDishes;
    QLabel *label_21;
    QWidget *widget;
    QWidget *layoutWidget13;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_editDishes_image;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_24;
    QPushButton *btn_editDishes_updateImage;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget14;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_22;
    QLineEdit *text_editDishes_name;
    QWidget *layoutWidget15;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_23;
    QLineEdit *text_editDishes_price;
    QWidget *layoutWidget16;
    QHBoxLayout *horizontalLayout_23;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btn_editDishes;
    QPushButton *btn_deleteDishes;
    QSpacerItem *horizontalSpacer_2;
    QWidget *page_editItemDishes;
    QLabel *label_24;
    QPushButton *btn_addDishes;
    QWidget *layoutWidget17;
    QVBoxLayout *verticalLayout_10;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_4;
    QLabel *label_addDishes_image;
    QPushButton *btn_addImage;
    QWidget *layoutWidget18;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_26;
    QLineEdit *text_addDishes_name;
    QWidget *layoutWidget19;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_27;
    QLineEdit *text_addDishes_price;
    QWidget *page_revenueManagement;
    QVBoxLayout *verticalLayout_8;
    QWidget *widget_containSearchOrderTable;
    QWidget *widget_revenue_management;
    QWidget *layoutWidget20;
    QHBoxLayout *horizontalLayout_25;
    QComboBox *comboBox_searchName;
    QLineEdit *text_search_orderBuyer;
    QPushButton *btn_search_orderBuyer;
    QTableView *tableView_order;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_revenue_sumPrice;
    QWidget *page_summaryDishes;
    QVBoxLayout *verticalLayout_11;
    QWidget *widget_dishesSummary;
    QTableView *tableView_dishes;
    QWidget *widget_dishesSearch;
    QComboBox *comboBox_cuisine;
    QLabel *label_25;
    QLabel *label_28;
    QLineEdit *text_dishesName;
    QLabel *label_29;
    QLineEdit *text_lowPrice;
    QLineEdit *text_highPrice;
    QPushButton *btn_searchDishes;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout;
    QToolBox *toolBox;
    QWidget *order_setting;
    QVBoxLayout *verticalLayout_3;
    QListWidget *order_list;
    QToolBar *toolBar;
    QButtonGroup *buttonGroup_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1007, 692);
        act_add_order = new QAction(MainWindow);
        act_add_order->setObjectName(QString::fromUtf8("act_add_order"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/tianjiadingdan.svg"), QSize(), QIcon::Normal, QIcon::Off);
        act_add_order->setIcon(icon);
        act_add_order->setMenuRole(QAction::NoRole);
        act_check_order = new QAction(MainWindow);
        act_check_order->setObjectName(QString::fromUtf8("act_check_order"));
        act_check_order->setCheckable(false);
        act_check_order->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/chakandingdan.svg"), QSize(), QIcon::Normal, QIcon::Off);
        act_check_order->setIcon(icon1);
        act_check_order->setMenuRole(QAction::NoRole);
        act_delete_order = new QAction(MainWindow);
        act_delete_order->setObjectName(QString::fromUtf8("act_delete_order"));
        act_delete_order->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/shanchudingdan.svg"), QSize(), QIcon::Normal, QIcon::Off);
        act_delete_order->setIcon(icon2);
        act_delete_order->setMenuRole(QAction::NoRole);
        act_check_account = new QAction(MainWindow);
        act_check_account->setObjectName(QString::fromUtf8("act_check_account"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/yonghu.svg"), QSize(), QIcon::Normal, QIcon::Off);
        act_check_account->setIcon(icon3);
        act_check_account->setMenuRole(QAction::NoRole);
        act_add_dishes = new QAction(MainWindow);
        act_add_dishes->setObjectName(QString::fromUtf8("act_add_dishes"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/tianjiacaipin.svg"), QSize(), QIcon::Normal, QIcon::Off);
        act_add_dishes->setIcon(icon4);
        act_add_dishes->setMenuRole(QAction::NoRole);
        act_backDishesList = new QAction(MainWindow);
        act_backDishesList->setObjectName(QString::fromUtf8("act_backDishesList"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/return.svg"), QSize(), QIcon::Normal, QIcon::Off);
        act_backDishesList->setIcon(icon5);
        act_backDishesList->setMenuRole(QAction::NoRole);
        act_edit_dishes = new QAction(MainWindow);
        act_edit_dishes->setObjectName(QString::fromUtf8("act_edit_dishes"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/bianjicaipin.svg"), QSize(), QIcon::Normal, QIcon::Off);
        act_edit_dishes->setIcon(icon6);
        act_edit_dishes->setMenuRole(QAction::NoRole);
        act_delete_dishes = new QAction(MainWindow);
        act_delete_dishes->setObjectName(QString::fromUtf8("act_delete_dishes"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/shanchucaipin.svg"), QSize(), QIcon::Normal, QIcon::Off);
        act_delete_dishes->setIcon(icon7);
        act_delete_dishes->setMenuRole(QAction::NoRole);
        act_orderManagement = new QAction(MainWindow);
        act_orderManagement->setObjectName(QString::fromUtf8("act_orderManagement"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icon/ddguanli.svg"), QSize(), QIcon::Normal, QIcon::Off);
        act_orderManagement->setIcon(icon8);
        act_orderManagement->setMenuRole(QAction::NoRole);
        act_summaryDishes = new QAction(MainWindow);
        act_summaryDishes->setObjectName(QString::fromUtf8("act_summaryDishes"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icon/tongji.svg"), QSize(), QIcon::Normal, QIcon::Off);
        act_summaryDishes->setIcon(icon9);
        act_summaryDishes->setMenuRole(QAction::NoRole);
        act_orderList_visible = new QAction(MainWindow);
        act_orderList_visible->setObjectName(QString::fromUtf8("act_orderList_visible"));
        act_orderList_visible->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icon/yanjing_xianshi.svg"), QSize(), QIcon::Normal, QIcon::Off);
        act_orderList_visible->setIcon(icon10);
        act_orderList_visible->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_user = new QWidget();
        page_user->setObjectName(QString::fromUtf8("page_user"));
        label_5 = new QLabel(page_user);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(220, 20, 280, 51));
        btn_admin_edit = new QPushButton(page_user);
        btn_admin_edit->setObjectName(QString::fromUtf8("btn_admin_edit"));
        btn_admin_edit->setGeometry(QRect(290, 520, 100, 30));
        btn_admin_edit->setMaximumSize(QSize(100, 30));
        QFont font;
        font.setPointSize(12);
        btn_admin_edit->setFont(font);
        layoutWidget = new QWidget(page_user);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 430, 461, 32));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        text_admin_address = new QLineEdit(layoutWidget);
        text_admin_address->setObjectName(QString::fromUtf8("text_admin_address"));
        text_admin_address->setMinimumSize(QSize(0, 30));
        text_admin_address->setMaximumSize(QSize(16777215, 30));
        text_admin_address->setFont(font);

        horizontalLayout_6->addWidget(text_admin_address);

        layoutWidget1 = new QWidget(page_user);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(330, 270, 231, 32));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        text_admin_age = new QLineEdit(layoutWidget1);
        text_admin_age->setObjectName(QString::fromUtf8("text_admin_age"));
        text_admin_age->setMinimumSize(QSize(0, 30));
        text_admin_age->setMaximumSize(QSize(16777215, 30));
        text_admin_age->setFont(font);

        horizontalLayout_4->addWidget(text_admin_age);

        layoutWidget2 = new QWidget(page_user);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(150, 350, 171, 31));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        data_admin_birth = new QDateEdit(layoutWidget2);
        data_admin_birth->setObjectName(QString::fromUtf8("data_admin_birth"));
        data_admin_birth->setMinimumSize(QSize(0, 0));
        data_admin_birth->setMaximumSize(QSize(16777215, 16777215));
        data_admin_birth->setDateTime(QDateTime(QDate(2004, 2, 16), QTime(8, 0, 0)));

        horizontalLayout_5->addWidget(data_admin_birth);

        layoutWidget3 = new QWidget(page_user);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(150, 270, 160, 33));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        radio_admin_man = new QRadioButton(layoutWidget3);
        buttonGroup_2 = new QButtonGroup(MainWindow);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(radio_admin_man);
        radio_admin_man->setObjectName(QString::fromUtf8("radio_admin_man"));
        radio_admin_man->setFont(font);
        radio_admin_man->setChecked(true);

        horizontalLayout_3->addWidget(radio_admin_man);

        radio_admin_female = new QRadioButton(layoutWidget3);
        buttonGroup_2->addButton(radio_admin_female);
        radio_admin_female->setObjectName(QString::fromUtf8("radio_admin_female"));
        radio_admin_female->setFont(font);

        horizontalLayout_3->addWidget(radio_admin_female);

        layoutWidget4 = new QWidget(page_user);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(150, 80, 122, 157));
        verticalLayout = new QVBoxLayout(layoutWidget4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        avatar_frame = new QLabel(layoutWidget4);
        avatar_frame->setObjectName(QString::fromUtf8("avatar_frame"));
        avatar_frame->setMinimumSize(QSize(120, 120));
        avatar_frame->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(avatar_frame);

        btn_change_avator = new QPushButton(layoutWidget4);
        btn_change_avator->setObjectName(QString::fromUtf8("btn_change_avator"));

        verticalLayout->addWidget(btn_change_avator);

        layoutWidget5 = new QWidget(page_user);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(330, 190, 231, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget5);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        text_admin_name = new QLineEdit(layoutWidget5);
        text_admin_name->setObjectName(QString::fromUtf8("text_admin_name"));
        text_admin_name->setMinimumSize(QSize(30, 0));
        text_admin_name->setMaximumSize(QSize(16777215, 30));
        text_admin_name->setFont(font);

        horizontalLayout_2->addWidget(text_admin_name);

        layoutWidget6 = new QWidget(page_user);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(330, 350, 277, 35));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget6);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_7->addWidget(label_14);

        lineEdit_3 = new QLineEdit(layoutWidget6);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setFont(font);

        horizontalLayout_7->addWidget(lineEdit_3);

        stackedWidget->addWidget(page_user);
        page_order = new QWidget();
        page_order->setObjectName(QString::fromUtf8("page_order"));
        verticalLayout_4 = new QVBoxLayout(page_order);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_7 = new QLabel(page_order);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_4->addWidget(label_7);

        scrollArea = new QScrollArea(page_order);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 700, 548));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_8 = new QLabel(page_order);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_9->addWidget(label_8);

        dishesCount = new QLabel(page_order);
        dishesCount->setObjectName(QString::fromUtf8("dishesCount"));

        horizontalLayout_9->addWidget(dishesCount);

        label_9 = new QLabel(page_order);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        totalPrice = new QLabel(page_order);
        totalPrice->setObjectName(QString::fromUtf8("totalPrice"));

        horizontalLayout_9->addWidget(totalPrice);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);

        btn_generate_bills = new QPushButton(page_order);
        btn_generate_bills->setObjectName(QString::fromUtf8("btn_generate_bills"));

        horizontalLayout_9->addWidget(btn_generate_bills);

        btn_clear_carts = new QPushButton(page_order);
        btn_clear_carts->setObjectName(QString::fromUtf8("btn_clear_carts"));

        horizontalLayout_9->addWidget(btn_clear_carts);


        verticalLayout_4->addLayout(horizontalLayout_9);

        stackedWidget->addWidget(page_order);
        page_checked = new QWidget();
        page_checked->setObjectName(QString::fromUtf8("page_checked"));
        gridLayout = new QGridLayout(page_checked);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(page_checked);
        frame->setObjectName(QString::fromUtf8("frame"));
        layoutWidget7 = new QWidget(frame);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(11, 11, 211, 31));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget7);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_13->addWidget(label_13);

        label_bill_id = new QLabel(layoutWidget7);
        label_bill_id->setObjectName(QString::fromUtf8("label_bill_id"));

        horizontalLayout_13->addWidget(label_bill_id);

        layoutWidget8 = new QWidget(frame);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(11, 87, 181, 41));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget8);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_11->addWidget(label_11);

        text_bill_name = new QLineEdit(layoutWidget8);
        text_bill_name->setObjectName(QString::fromUtf8("text_bill_name"));
        QFont font1;
        font1.setPointSize(11);
        text_bill_name->setFont(font1);

        horizontalLayout_11->addWidget(text_bill_name);

        layoutWidget9 = new QWidget(frame);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(11, 163, 161, 41));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget9);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_12->addWidget(label_12);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        radio_bill_male = new QRadioButton(layoutWidget9);
        buttonGroup_2->addButton(radio_bill_male);
        radio_bill_male->setObjectName(QString::fromUtf8("radio_bill_male"));

        horizontalLayout_10->addWidget(radio_bill_male);

        radio_bill_female = new QRadioButton(layoutWidget9);
        buttonGroup_2->addButton(radio_bill_female);
        radio_bill_female->setObjectName(QString::fromUtf8("radio_bill_female"));

        horizontalLayout_10->addWidget(radio_bill_female);


        horizontalLayout_12->addLayout(horizontalLayout_10);

        layoutWidget10 = new QWidget(frame);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(11, 239, 221, 33));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget10);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget10);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_14->addWidget(label_15);

        text_bill_contactInfo = new QLineEdit(layoutWidget10);
        text_bill_contactInfo->setObjectName(QString::fromUtf8("text_bill_contactInfo"));
        text_bill_contactInfo->setFont(font1);

        horizontalLayout_14->addWidget(text_bill_contactInfo);

        layoutWidget11 = new QWidget(frame);
        layoutWidget11->setObjectName(QString::fromUtf8("layoutWidget11"));
        layoutWidget11->setGeometry(QRect(11, 315, 239, 29));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget11);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget11);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_15->addWidget(label_16);

        comboBox_bill_address = new QComboBox(layoutWidget11);
        comboBox_bill_address->addItem(QString());
        comboBox_bill_address->addItem(QString());
        comboBox_bill_address->addItem(QString());
        comboBox_bill_address->addItem(QString());
        comboBox_bill_address->addItem(QString());
        comboBox_bill_address->addItem(QString());
        comboBox_bill_address->addItem(QString());
        comboBox_bill_address->addItem(QString());
        comboBox_bill_address->addItem(QString());
        comboBox_bill_address->addItem(QString());
        comboBox_bill_address->addItem(QString());
        comboBox_bill_address->addItem(QString());
        comboBox_bill_address->addItem(QString());
        comboBox_bill_address->addItem(QString());
        comboBox_bill_address->addItem(QString());
        comboBox_bill_address->setObjectName(QString::fromUtf8("comboBox_bill_address"));
        comboBox_bill_address->setMinimumSize(QSize(150, 0));

        horizontalLayout_15->addWidget(comboBox_bill_address);

        layoutWidget12 = new QWidget(frame);
        layoutWidget12->setObjectName(QString::fromUtf8("layoutWidget12"));
        layoutWidget12->setGeometry(QRect(11, 391, 231, 40));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget12);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget12);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_16->addWidget(label_17);

        label_bill_date = new QLabel(layoutWidget12);
        label_bill_date->setObjectName(QString::fromUtf8("label_bill_date"));

        horizontalLayout_16->addWidget(label_bill_date);


        gridLayout->addWidget(frame, 1, 2, 1, 2);

        btn_pay = new QPushButton(page_checked);
        btn_pay->setObjectName(QString::fromUtf8("btn_pay"));

        gridLayout->addWidget(btn_pay, 2, 3, 1, 1);

        label_10 = new QLabel(page_checked);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 0, 1, 1, 2);

        label_bill_sum = new QLabel(page_checked);
        label_bill_sum->setObjectName(QString::fromUtf8("label_bill_sum"));

        gridLayout->addWidget(label_bill_sum, 2, 0, 1, 1);

        btn_back = new QToolButton(page_checked);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setArrowType(Qt::LeftArrow);

        gridLayout->addWidget(btn_back, 0, 0, 1, 1);

        checked_list = new QScrollArea(page_checked);
        checked_list->setObjectName(QString::fromUtf8("checked_list"));
        checked_list->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 268, 555));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        listWidget = new QListWidget(scrollAreaWidgetContents_2);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_7->addWidget(listWidget);

        checked_list->setWidget(scrollAreaWidgetContents_2);

        gridLayout->addWidget(checked_list, 1, 0, 1, 2);

        stackedWidget->addWidget(page_checked);
        page_map = new QWidget();
        page_map->setObjectName(QString::fromUtf8("page_map"));
        verticalLayout_12 = new QVBoxLayout(page_map);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_18 = new QLabel(page_map);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_12->addWidget(label_18);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_19 = new QLabel(page_map);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_8->addWidget(label_19);

        label_map_date = new QLabel(page_map);
        label_map_date->setObjectName(QString::fromUtf8("label_map_date"));

        horizontalLayout_8->addWidget(label_map_date);


        verticalLayout_12->addLayout(horizontalLayout_8);

        splitter = new QWidget(page_map);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        view_map = new QGraphicsView(splitter);
        view_map->setObjectName(QString::fromUtf8("view_map"));
        view_map->setGeometry(QRect(10, 130, 701, 71));
        map_checkList = new QScrollArea(splitter);
        map_checkList->setObjectName(QString::fromUtf8("map_checkList"));
        map_checkList->setGeometry(QRect(11, 228, 591, 41));
        map_checkList->setMaximumSize(QSize(16777215, 16777215));
        map_checkList->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 589, 39));
        map_checkList->setWidget(scrollAreaWidgetContents_3);
        label_map_timeout = new QLabel(splitter);
        label_map_timeout->setObjectName(QString::fromUtf8("label_map_timeout"));
        label_map_timeout->setGeometry(QRect(90, 20, 471, 71));

        verticalLayout_12->addWidget(splitter);

        stackedWidget->addWidget(page_map);
        page_editDishes = new QWidget();
        page_editDishes->setObjectName(QString::fromUtf8("page_editDishes"));
        verticalLayout_5 = new QVBoxLayout(page_editDishes);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_20 = new QLabel(page_editDishes);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_5->addWidget(label_20);

        scrollArea_dishes = new QScrollArea(page_editDishes);
        scrollArea_dishes->setObjectName(QString::fromUtf8("scrollArea_dishes"));
        scrollArea_dishes->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 76, 16));
        scrollArea_dishes->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_5->addWidget(scrollArea_dishes);

        stackedWidget->addWidget(page_editDishes);
        page_addDishes = new QWidget();
        page_addDishes->setObjectName(QString::fromUtf8("page_addDishes"));
        label_21 = new QLabel(page_addDishes);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(300, 40, 120, 38));
        widget = new QWidget(page_addDishes);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(190, 80, 331, 451));
        layoutWidget13 = new QWidget(widget);
        layoutWidget13->setObjectName(QString::fromUtf8("layoutWidget13"));
        layoutWidget13->setGeometry(QRect(70, 10, 201, 209));
        verticalLayout_9 = new QVBoxLayout(layoutWidget13);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_editDishes_image = new QLabel(layoutWidget13);
        label_editDishes_image->setObjectName(QString::fromUtf8("label_editDishes_image"));
        label_editDishes_image->setMinimumSize(QSize(150, 150));
        label_editDishes_image->setMaximumSize(QSize(150, 150));
        label_editDishes_image->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_editDishes_image);

        widget_2 = new QWidget(layoutWidget13);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(0, 50));
        horizontalLayout_24 = new QHBoxLayout(widget_2);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        btn_editDishes_updateImage = new QPushButton(widget_2);
        btn_editDishes_updateImage->setObjectName(QString::fromUtf8("btn_editDishes_updateImage"));
        btn_editDishes_updateImage->setMinimumSize(QSize(130, 0));
        btn_editDishes_updateImage->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_24->addWidget(btn_editDishes_updateImage);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer);


        verticalLayout_9->addWidget(widget_2);

        layoutWidget14 = new QWidget(widget);
        layoutWidget14->setObjectName(QString::fromUtf8("layoutWidget14"));
        layoutWidget14->setGeometry(QRect(11, 227, 271, 35));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget14);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(layoutWidget14);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_17->addWidget(label_22);

        text_editDishes_name = new QLineEdit(layoutWidget14);
        text_editDishes_name->setObjectName(QString::fromUtf8("text_editDishes_name"));
        text_editDishes_name->setFont(font);

        horizontalLayout_17->addWidget(text_editDishes_name);

        layoutWidget15 = new QWidget(widget);
        layoutWidget15->setObjectName(QString::fromUtf8("layoutWidget15"));
        layoutWidget15->setGeometry(QRect(11, 300, 272, 35));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget15);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(layoutWidget15);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_19->addWidget(label_23);

        text_editDishes_price = new QLineEdit(layoutWidget15);
        text_editDishes_price->setObjectName(QString::fromUtf8("text_editDishes_price"));
        text_editDishes_price->setFont(font);

        horizontalLayout_19->addWidget(text_editDishes_price);

        layoutWidget16 = new QWidget(widget);
        layoutWidget16->setObjectName(QString::fromUtf8("layoutWidget16"));
        layoutWidget16->setGeometry(QRect(11, 374, 263, 30));
        horizontalLayout_23 = new QHBoxLayout(layoutWidget16);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_5);

        btn_editDishes = new QPushButton(layoutWidget16);
        btn_editDishes->setObjectName(QString::fromUtf8("btn_editDishes"));

        horizontalLayout_23->addWidget(btn_editDishes);

        btn_deleteDishes = new QPushButton(layoutWidget16);
        btn_deleteDishes->setObjectName(QString::fromUtf8("btn_deleteDishes"));

        horizontalLayout_23->addWidget(btn_deleteDishes);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_2);

        stackedWidget->addWidget(page_addDishes);
        page_editItemDishes = new QWidget();
        page_editItemDishes->setObjectName(QString::fromUtf8("page_editItemDishes"));
        label_24 = new QLabel(page_editItemDishes);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(290, 40, 131, 41));
        btn_addDishes = new QPushButton(page_editItemDishes);
        btn_addDishes->setObjectName(QString::fromUtf8("btn_addDishes"));
        btn_addDishes->setGeometry(QRect(310, 460, 91, 31));
        layoutWidget17 = new QWidget(page_editItemDishes);
        layoutWidget17->setObjectName(QString::fromUtf8("layoutWidget17"));
        layoutWidget17->setGeometry(QRect(250, 100, 211, 211));
        verticalLayout_10 = new QVBoxLayout(layoutWidget17);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(layoutWidget17);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(0, 50));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        label_addDishes_image = new QLabel(widget_4);
        label_addDishes_image->setObjectName(QString::fromUtf8("label_addDishes_image"));
        label_addDishes_image->setGeometry(QRect(20, 0, 150, 150));
        label_addDishes_image->setMinimumSize(QSize(150, 150));
        label_addDishes_image->setMaximumSize(QSize(150, 150));
        btn_addImage = new QPushButton(widget_4);
        btn_addImage->setObjectName(QString::fromUtf8("btn_addImage"));
        btn_addImage->setGeometry(QRect(30, 160, 130, 24));
        btn_addImage->setMinimumSize(QSize(130, 0));
        btn_addImage->setMaximumSize(QSize(130, 16777215));

        verticalLayout_2->addWidget(widget_4);


        verticalLayout_10->addWidget(widget_3);

        layoutWidget18 = new QWidget(page_editItemDishes);
        layoutWidget18->setObjectName(QString::fromUtf8("layoutWidget18"));
        layoutWidget18->setGeometry(QRect(250, 320, 211, 41));
        horizontalLayout_20 = new QHBoxLayout(layoutWidget18);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(layoutWidget18);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_20->addWidget(label_26);

        text_addDishes_name = new QLineEdit(layoutWidget18);
        text_addDishes_name->setObjectName(QString::fromUtf8("text_addDishes_name"));
        text_addDishes_name->setFont(font);

        horizontalLayout_20->addWidget(text_addDishes_name);

        layoutWidget19 = new QWidget(page_editItemDishes);
        layoutWidget19->setObjectName(QString::fromUtf8("layoutWidget19"));
        layoutWidget19->setGeometry(QRect(250, 380, 211, 41));
        horizontalLayout_21 = new QHBoxLayout(layoutWidget19);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        label_27 = new QLabel(layoutWidget19);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_21->addWidget(label_27);

        text_addDishes_price = new QLineEdit(layoutWidget19);
        text_addDishes_price->setObjectName(QString::fromUtf8("text_addDishes_price"));
        text_addDishes_price->setFont(font);

        horizontalLayout_21->addWidget(text_addDishes_price);

        stackedWidget->addWidget(page_editItemDishes);
        page_revenueManagement = new QWidget();
        page_revenueManagement->setObjectName(QString::fromUtf8("page_revenueManagement"));
        verticalLayout_8 = new QVBoxLayout(page_revenueManagement);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        widget_containSearchOrderTable = new QWidget(page_revenueManagement);
        widget_containSearchOrderTable->setObjectName(QString::fromUtf8("widget_containSearchOrderTable"));
        widget_revenue_management = new QWidget(widget_containSearchOrderTable);
        widget_revenue_management->setObjectName(QString::fromUtf8("widget_revenue_management"));
        widget_revenue_management->setGeometry(QRect(9, 9, 660, 41));
        widget_revenue_management->setMinimumSize(QSize(0, 0));
        widget_revenue_management->setMaximumSize(QSize(16777215, 50));
        layoutWidget20 = new QWidget(widget_revenue_management);
        layoutWidget20->setObjectName(QString::fromUtf8("layoutWidget20"));
        layoutWidget20->setGeometry(QRect(12, 0, 311, 36));
        horizontalLayout_25 = new QHBoxLayout(layoutWidget20);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        horizontalLayout_25->setContentsMargins(0, 0, 0, 0);
        comboBox_searchName = new QComboBox(layoutWidget20);
        comboBox_searchName->addItem(QString());
        comboBox_searchName->addItem(QString());
        comboBox_searchName->setObjectName(QString::fromUtf8("comboBox_searchName"));
        comboBox_searchName->setFont(font);

        horizontalLayout_25->addWidget(comboBox_searchName);

        text_search_orderBuyer = new QLineEdit(layoutWidget20);
        text_search_orderBuyer->setObjectName(QString::fromUtf8("text_search_orderBuyer"));
        text_search_orderBuyer->setFont(font);

        horizontalLayout_25->addWidget(text_search_orderBuyer);

        btn_search_orderBuyer = new QPushButton(layoutWidget20);
        btn_search_orderBuyer->setObjectName(QString::fromUtf8("btn_search_orderBuyer"));
        btn_search_orderBuyer->setFont(font);

        horizontalLayout_25->addWidget(btn_search_orderBuyer);

        tableView_order = new QTableView(widget_containSearchOrderTable);
        tableView_order->setObjectName(QString::fromUtf8("tableView_order"));
        tableView_order->setGeometry(QRect(9, 115, 256, 192));

        verticalLayout_8->addWidget(widget_containSearchOrderTable);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_revenue_sumPrice = new QLabel(page_revenueManagement);
        label_revenue_sumPrice->setObjectName(QString::fromUtf8("label_revenue_sumPrice"));

        horizontalLayout_18->addWidget(label_revenue_sumPrice);


        verticalLayout_8->addLayout(horizontalLayout_18);

        stackedWidget->addWidget(page_revenueManagement);
        page_summaryDishes = new QWidget();
        page_summaryDishes->setObjectName(QString::fromUtf8("page_summaryDishes"));
        verticalLayout_11 = new QVBoxLayout(page_summaryDishes);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        widget_dishesSummary = new QWidget(page_summaryDishes);
        widget_dishesSummary->setObjectName(QString::fromUtf8("widget_dishesSummary"));
        tableView_dishes = new QTableView(widget_dishesSummary);
        tableView_dishes->setObjectName(QString::fromUtf8("tableView_dishes"));
        tableView_dishes->setGeometry(QRect(100, 130, 451, 281));
        widget_dishesSearch = new QWidget(widget_dishesSummary);
        widget_dishesSearch->setObjectName(QString::fromUtf8("widget_dishesSearch"));
        widget_dishesSearch->setGeometry(QRect(10, 0, 641, 50));
        widget_dishesSearch->setMaximumSize(QSize(16777215, 50));
        comboBox_cuisine = new QComboBox(widget_dishesSearch);
        comboBox_cuisine->addItem(QString());
        comboBox_cuisine->addItem(QString());
        comboBox_cuisine->addItem(QString());
        comboBox_cuisine->addItem(QString());
        comboBox_cuisine->addItem(QString());
        comboBox_cuisine->addItem(QString());
        comboBox_cuisine->addItem(QString());
        comboBox_cuisine->addItem(QString());
        comboBox_cuisine->setObjectName(QString::fromUtf8("comboBox_cuisine"));
        comboBox_cuisine->setGeometry(QRect(60, 10, 72, 24));
        comboBox_cuisine->setFont(font);
        label_25 = new QLabel(widget_dishesSearch);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(20, 10, 41, 21));
        label_28 = new QLabel(widget_dishesSearch);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(140, 10, 71, 21));
        text_dishesName = new QLineEdit(widget_dishesSearch);
        text_dishesName->setObjectName(QString::fromUtf8("text_dishesName"));
        text_dishesName->setGeometry(QRect(210, 10, 151, 23));
        text_dishesName->setFont(font);
        label_29 = new QLabel(widget_dishesSearch);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(380, 10, 71, 21));
        text_lowPrice = new QLineEdit(widget_dishesSearch);
        text_lowPrice->setObjectName(QString::fromUtf8("text_lowPrice"));
        text_lowPrice->setGeometry(QRect(460, 10, 41, 23));
        text_highPrice = new QLineEdit(widget_dishesSearch);
        text_highPrice->setObjectName(QString::fromUtf8("text_highPrice"));
        text_highPrice->setGeometry(QRect(510, 10, 41, 23));
        btn_searchDishes = new QPushButton(widget_dishesSearch);
        btn_searchDishes->setObjectName(QString::fromUtf8("btn_searchDishes"));
        btn_searchDishes->setGeometry(QRect(570, 10, 61, 24));

        verticalLayout_11->addWidget(widget_dishesSummary);

        stackedWidget->addWidget(page_summaryDishes);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1007, 17));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        MainWindow->setMenuBar(menubar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setMinimumSize(QSize(200, 225));
        dockWidget->setMaximumSize(QSize(524287, 524287));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        toolBox = new QToolBox(dockWidgetContents);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        order_setting = new QWidget();
        order_setting->setObjectName(QString::fromUtf8("order_setting"));
        order_setting->setGeometry(QRect(0, 0, 268, 577));
        verticalLayout_3 = new QVBoxLayout(order_setting);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        order_list = new QListWidget(order_setting);
        order_list->setObjectName(QString::fromUtf8("order_list"));

        verticalLayout_3->addWidget(order_list);

        toolBox->addItem(order_setting, QString::fromUtf8("\350\256\242\345\215\225\350\256\276\347\275\256"));

        horizontalLayout->addWidget(toolBox);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menu->addAction(act_check_account);
        menu_2->addAction(act_add_order);
        menu_2->addAction(act_delete_order);
        menu_3->addAction(act_add_dishes);
        menu_3->addAction(act_edit_dishes);
        menu_4->addAction(act_orderManagement);
        menu_4->addAction(act_summaryDishes);
        toolBar->addAction(act_check_account);
        toolBar->addSeparator();
        toolBar->addAction(act_add_dishes);
        toolBar->addAction(act_edit_dishes);
        toolBar->addSeparator();
        toolBar->addAction(act_orderManagement);
        toolBar->addAction(act_summaryDishes);
        toolBar->addSeparator();
        toolBar->addAction(act_orderList_visible);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        act_add_order->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\256\242\345\215\225", nullptr));
#if QT_CONFIG(tooltip)
        act_add_order->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\256\242\345\215\225", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        act_add_order->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        act_check_order->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\350\256\242\345\215\225", nullptr));
#if QT_CONFIG(tooltip)
        act_check_order->setToolTip(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\350\256\242\345\215\225", nullptr));
#endif // QT_CONFIG(tooltip)
        act_delete_order->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\256\242\345\215\225", nullptr));
#if QT_CONFIG(tooltip)
        act_delete_order->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\256\242\345\215\225", nullptr));
#endif // QT_CONFIG(tooltip)
        act_check_account->setText(QCoreApplication::translate("MainWindow", "\346\210\221\347\232\204\350\264\246\346\210\267", nullptr));
#if QT_CONFIG(tooltip)
        act_check_account->setToolTip(QCoreApplication::translate("MainWindow", "\346\210\221\347\232\204\350\264\246\346\210\267", nullptr));
#endif // QT_CONFIG(tooltip)
        act_add_dishes->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\217\234\345\223\201", nullptr));
#if QT_CONFIG(tooltip)
        act_add_dishes->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\217\234\345\223\201", nullptr));
#endif // QT_CONFIG(tooltip)
        act_backDishesList->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
#if QT_CONFIG(tooltip)
        act_backDishesList->setToolTip(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
#endif // QT_CONFIG(tooltip)
        act_edit_dishes->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\350\217\234\345\223\201", nullptr));
        act_delete_dishes->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\217\234\345\223\201", nullptr));
#if QT_CONFIG(tooltip)
        act_delete_dishes->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\217\234\345\223\201", nullptr));
#endif // QT_CONFIG(tooltip)
        act_orderManagement->setText(QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\347\273\237\350\256\241", nullptr));
#if QT_CONFIG(tooltip)
        act_orderManagement->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\347\273\237\350\256\241", nullptr));
#endif // QT_CONFIG(tooltip)
        act_summaryDishes->setText(QCoreApplication::translate("MainWindow", "\350\217\234\345\223\201\347\273\237\350\256\241", nullptr));
#if QT_CONFIG(tooltip)
        act_summaryDishes->setToolTip(QCoreApplication::translate("MainWindow", "\350\217\234\345\223\201\347\273\237\350\256\241", nullptr));
#endif // QT_CONFIG(tooltip)
        act_orderList_visible->setText(QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\346\240\217\345\217\257\350\247\206", nullptr));
#if QT_CONFIG(tooltip)
        act_orderList_visible->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\346\240\217\345\217\257\350\247\206", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">\347\256\241\347\220\206\345\221\230\345\237\272\346\234\254\344\277\241\346\201\257</span></p></body></html>", nullptr));
        btn_admin_edit->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\256\266\345\272\255\344\275\217\345\235\200</span></p></body></html>", nullptr));
        text_admin_address->setText(QCoreApplication::translate("MainWindow", "\345\271\277\350\245\277\346\241\202\346\236\227\345\270\202\347\201\265\345\267\235\345\216\277", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\271\264\351\276\204</span></p></body></html>", nullptr));
        text_admin_age->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\347\224\237\346\227\245</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\200\247\345\210\253</span></p></body></html>", nullptr));
        radio_admin_man->setText(QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        radio_admin_female->setText(QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));
        avatar_frame->setText(QString());
        btn_change_avator->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\345\244\264\345\203\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\247\223\345\220\215</span></p></body></html>", nullptr));
        text_admin_name->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\350\201\224\347\263\273\346\226\271\345\274\217</span></p></body></html>", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MainWindow", "18277339007", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\346\267\273\345\212\240\350\256\242\345\215\225</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\346\225\260\351\207\217\357\274\232</p></body></html>", nullptr));
        dishesCount->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\346\200\273\351\207\221\351\242\235\357\274\232", nullptr));
        totalPrice->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_generate_bills->setText(QCoreApplication::translate("MainWindow", "\347\273\223\350\264\246", nullptr));
        btn_clear_carts->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\350\264\255\347\211\251\350\275\246", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">\350\256\242\345\215\225\347\274\226\345\217\267</span></p></body></html>", nullptr));
        label_bill_id->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">10086</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\224\266\344\273\266\344\272\272</span></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\200\247\345\210\253</span></p></body></html>", nullptr));
        radio_bill_male->setText(QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        radio_bill_female->setText(QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\201\224\347\263\273\346\226\271\345\274\217</span></p></body></html>", nullptr));
        text_bill_contactInfo->setText(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\351\205\215\351\200\201\345\234\260\347\202\271</span></p></body></html>", nullptr));
        comboBox_bill_address->setItemText(0, QCoreApplication::translate("MainWindow", "\346\240\241\351\227\250", nullptr));
        comboBox_bill_address->setItemText(1, QCoreApplication::translate("MainWindow", "\346\226\207\347\247\221\346\245\274", nullptr));
        comboBox_bill_address->setItemText(2, QCoreApplication::translate("MainWindow", "\350\241\214\347\237\245\346\245\274", nullptr));
        comboBox_bill_address->setItemText(3, QCoreApplication::translate("MainWindow", "\344\270\200\346\225\231", nullptr));
        comboBox_bill_address->setItemText(4, QCoreApplication::translate("MainWindow", "\347\220\203\347\261\273\351\246\206", nullptr));
        comboBox_bill_address->setItemText(5, QCoreApplication::translate("MainWindow", "D\345\214\272\345\256\277\350\210\215", nullptr));
        comboBox_bill_address->setItemText(6, QCoreApplication::translate("MainWindow", "\347\247\221\346\212\200\346\245\274", nullptr));
        comboBox_bill_address->setItemText(7, QCoreApplication::translate("MainWindow", "\344\270\211\346\225\231", nullptr));
        comboBox_bill_address->setItemText(8, QCoreApplication::translate("MainWindow", "C\345\214\272\345\256\277\350\210\215", nullptr));
        comboBox_bill_address->setItemText(9, QCoreApplication::translate("MainWindow", "\345\233\233\345\210\233\344\270\255\345\277\203", nullptr));
        comboBox_bill_address->setItemText(10, QCoreApplication::translate("MainWindow", "\347\224\265\345\255\220\345\233\276\344\271\246\351\246\206", nullptr));
        comboBox_bill_address->setItemText(11, QCoreApplication::translate("MainWindow", "\346\240\241\345\214\273\351\231\242", nullptr));
        comboBox_bill_address->setItemText(12, QCoreApplication::translate("MainWindow", "\345\215\201\344\270\200\346\225\231", nullptr));
        comboBox_bill_address->setItemText(13, QCoreApplication::translate("MainWindow", "\345\233\276\344\271\246\351\246\206", nullptr));
        comboBox_bill_address->setItemText(14, QCoreApplication::translate("MainWindow", "F\345\214\272\345\256\277\350\210\215", nullptr));

        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\344\270\213\345\215\225\346\227\266\351\227\264</span></p></body></html>", nullptr));
        label_bill_date->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        btn_pay->setText(QCoreApplication::translate("MainWindow", "\346\224\257\344\273\230", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\350\256\242\345\215\225\347\241\256\350\256\244</span></p></body></html>", nullptr));
        label_bill_sum->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\200\273\351\207\221\351\242\235:</span></p></body></html>", nullptr));
        btn_back->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\350\257\267\350\200\220\345\277\203\347\255\211\345\276\205\347\276\216\345\221\263\351\200\201\350\276\276</span></p></body></html>", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\344\270\213\345\215\225\346\227\266\351\227\264</span></p></body></html>", nullptr));
        label_map_date->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">00:00:00</span></p></body></html>", nullptr));
        label_map_timeout->setText(QString());
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\347\274\226\350\276\221\350\217\234\345\223\201</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\347\274\226\350\276\221\350\217\234\345\223\201</span></p></body></html>", nullptr));
        label_editDishes_image->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        btn_editDishes_updateImage->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\274\240\345\233\276\347\211\207", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\220\215\347\247\260</span></p></body></html>", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\256\232\344\273\267</span></p></body></html>", nullptr));
        btn_editDishes->setText(QCoreApplication::translate("MainWindow", "\346\233\264\346\224\271", nullptr));
        btn_deleteDishes->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\346\267\273\345\212\240\350\217\234\345\223\201</span></p></body></html>", nullptr));
        btn_addDishes->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        label_addDishes_image->setText(QString());
        btn_addImage->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\274\240\345\233\276\347\211\207", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\220\215\347\247\260</span></p></body></html>", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\256\232\344\273\267</span></p></body></html>", nullptr));
        comboBox_searchName->setItemText(0, QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        comboBox_searchName->setItemText(1, QCoreApplication::translate("MainWindow", "\345\234\260\347\202\271", nullptr));

        btn_search_orderBuyer->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        label_revenue_sumPrice->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\200\273\350\220\245\344\270\232\351\242\235\357\274\232</span></p></body></html>", nullptr));
        comboBox_cuisine->setItemText(0, QCoreApplication::translate("MainWindow", "\345\205\250\351\203\250", nullptr));
        comboBox_cuisine->setItemText(1, QCoreApplication::translate("MainWindow", "\351\262\201", nullptr));
        comboBox_cuisine->setItemText(2, QCoreApplication::translate("MainWindow", "\345\267\235", nullptr));
        comboBox_cuisine->setItemText(3, QCoreApplication::translate("MainWindow", "\347\262\244", nullptr));
        comboBox_cuisine->setItemText(4, QCoreApplication::translate("MainWindow", "\350\213\217", nullptr));
        comboBox_cuisine->setItemText(5, QCoreApplication::translate("MainWindow", "\351\227\275", nullptr));
        comboBox_cuisine->setItemText(6, QCoreApplication::translate("MainWindow", "\346\271\230", nullptr));
        comboBox_cuisine->setItemText(7, QCoreApplication::translate("MainWindow", "\345\276\275", nullptr));

        label_25->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\217\234\347\263\273</span></p></body></html>", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\217\234\345\223\201\345\220\215\347\247\260</span></p></body></html>", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\344\273\267\346\240\274\345\214\272\351\227\264</span></p></body></html>", nullptr));
        btn_searchDishes->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\350\256\276\347\275\256", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\350\256\276\347\275\256", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\350\217\234\345\223\201\350\256\276\347\275\256", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\347\273\237\350\256\241", nullptr));
        toolBox->setItemText(toolBox->indexOf(order_setting), QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\350\256\276\347\275\256", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
