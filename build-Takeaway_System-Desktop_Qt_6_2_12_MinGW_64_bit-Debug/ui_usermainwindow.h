/********************************************************************************
** Form generated from reading UI file 'usermainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMAINWINDOW_H
#define UI_USERMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userMainWindow
{
public:
    QAction *act_check_account;
    QAction *act_add_order;
    QAction *act_delete_order;
    QAction *act_orderList_visible;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_user;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *avatar_frame;
    QPushButton *btn_change_avator;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QDateEdit *data_admin_birth;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *text_admin_age;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QLineEdit *text_userContactInfo;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *text_admin_name;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QRadioButton *radio_admin_man;
    QRadioButton *radio_admin_female;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *text_admin_address;
    QPushButton *btn_admin_edit;
    QWidget *page_order;
    QVBoxLayout *verticalLayout_5;
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
    QWidget *page_checkOrder;
    QFrame *frame;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QLabel *label_bill_id;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *text_bill_name;
    QWidget *layoutWidget_12;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_15;
    QLineEdit *text_bill_contactInfo;
    QWidget *layoutWidget_13;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_16;
    QComboBox *comboBox_bill_address;
    QWidget *layoutWidget_14;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_17;
    QLabel *label_bill_date;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radio_bill_male;
    QRadioButton *radio_bill_female;
    QLabel *label_bill_sum;
    QScrollArea *checked_list;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_7;
    QListWidget *listWidget_2;
    QLabel *label_10;
    QPushButton *btn_pay;
    QToolButton *btn_back;
    QWidget *page_map;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_20;
    QLabel *label_map_date_2;
    QLabel *label_map_timeout;
    QWidget *splitter;
    QGraphicsView *view_map;
    QScrollArea *map_checkList;
    QWidget *scrollAreaWidgetContents_3;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QToolBox *toolBox;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QListWidget *order_list;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *userMainWindow)
    {
        if (userMainWindow->objectName().isEmpty())
            userMainWindow->setObjectName(QString::fromUtf8("userMainWindow"));
        userMainWindow->resize(1036, 787);
        act_check_account = new QAction(userMainWindow);
        act_check_account->setObjectName(QString::fromUtf8("act_check_account"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/yonghu.svg"), QSize(), QIcon::Normal, QIcon::Off);
        act_check_account->setIcon(icon);
        act_check_account->setMenuRole(QAction::NoRole);
        act_add_order = new QAction(userMainWindow);
        act_add_order->setObjectName(QString::fromUtf8("act_add_order"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/tianjiadingdan.svg"), QSize(), QIcon::Normal, QIcon::Off);
        act_add_order->setIcon(icon1);
        act_add_order->setMenuRole(QAction::NoRole);
        act_delete_order = new QAction(userMainWindow);
        act_delete_order->setObjectName(QString::fromUtf8("act_delete_order"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/shanchudingdan.svg"), QSize(), QIcon::Normal, QIcon::Off);
        act_delete_order->setIcon(icon2);
        act_delete_order->setMenuRole(QAction::NoRole);
        act_orderList_visible = new QAction(userMainWindow);
        act_orderList_visible->setObjectName(QString::fromUtf8("act_orderList_visible"));
        act_orderList_visible->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/yanjing_xianshi.svg"), QSize(), QIcon::Normal, QIcon::Off);
        act_orderList_visible->setIcon(icon3);
        act_orderList_visible->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(userMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_user = new QWidget();
        page_user->setObjectName(QString::fromUtf8("page_user"));
        label = new QLabel(page_user);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 20, 281, 61));
        layoutWidget = new QWidget(page_user);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 100, 122, 157));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        avatar_frame = new QLabel(layoutWidget);
        avatar_frame->setObjectName(QString::fromUtf8("avatar_frame"));
        avatar_frame->setMinimumSize(QSize(120, 120));
        avatar_frame->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(avatar_frame);

        btn_change_avator = new QPushButton(layoutWidget);
        btn_change_avator->setObjectName(QString::fromUtf8("btn_change_avator"));

        verticalLayout_2->addWidget(btn_change_avator);

        layoutWidget_2 = new QWidget(page_user);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(100, 360, 171, 31));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        data_admin_birth = new QDateEdit(layoutWidget_2);
        data_admin_birth->setObjectName(QString::fromUtf8("data_admin_birth"));
        data_admin_birth->setMinimumSize(QSize(0, 0));
        data_admin_birth->setMaximumSize(QSize(16777215, 16777215));
        data_admin_birth->setDateTime(QDateTime(QDate(2004, 2, 16), QTime(16, 0, 0)));

        horizontalLayout_5->addWidget(data_admin_birth);

        layoutWidget_3 = new QWidget(page_user);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(280, 280, 231, 32));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        text_admin_age = new QLineEdit(layoutWidget_3);
        text_admin_age->setObjectName(QString::fromUtf8("text_admin_age"));
        text_admin_age->setMinimumSize(QSize(0, 30));
        text_admin_age->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setPointSize(12);
        text_admin_age->setFont(font);

        horizontalLayout_4->addWidget(text_admin_age);

        layoutWidget_4 = new QWidget(page_user);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(280, 360, 277, 35));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_7->addWidget(label_14);

        text_userContactInfo = new QLineEdit(layoutWidget_4);
        text_userContactInfo->setObjectName(QString::fromUtf8("text_userContactInfo"));
        text_userContactInfo->setFont(font);

        horizontalLayout_7->addWidget(text_userContactInfo);

        layoutWidget_5 = new QWidget(page_user);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(280, 200, 231, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        text_admin_name = new QLineEdit(layoutWidget_5);
        text_admin_name->setObjectName(QString::fromUtf8("text_admin_name"));
        text_admin_name->setMinimumSize(QSize(30, 0));
        text_admin_name->setMaximumSize(QSize(16777215, 30));
        text_admin_name->setFont(font);

        horizontalLayout_2->addWidget(text_admin_name);

        layoutWidget_6 = new QWidget(page_user);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(100, 280, 160, 33));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        radio_admin_man = new QRadioButton(layoutWidget_6);
        radio_admin_man->setObjectName(QString::fromUtf8("radio_admin_man"));
        radio_admin_man->setFont(font);
        radio_admin_man->setChecked(true);

        horizontalLayout_3->addWidget(radio_admin_man);

        radio_admin_female = new QRadioButton(layoutWidget_6);
        radio_admin_female->setObjectName(QString::fromUtf8("radio_admin_female"));
        radio_admin_female->setFont(font);

        horizontalLayout_3->addWidget(radio_admin_female);

        layoutWidget_7 = new QWidget(page_user);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(100, 440, 461, 32));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_7);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        text_admin_address = new QLineEdit(layoutWidget_7);
        text_admin_address->setObjectName(QString::fromUtf8("text_admin_address"));
        text_admin_address->setMinimumSize(QSize(0, 30));
        text_admin_address->setMaximumSize(QSize(16777215, 30));
        text_admin_address->setFont(font);

        horizontalLayout_6->addWidget(text_admin_address);

        btn_admin_edit = new QPushButton(page_user);
        btn_admin_edit->setObjectName(QString::fromUtf8("btn_admin_edit"));
        btn_admin_edit->setGeometry(QRect(240, 530, 100, 30));
        btn_admin_edit->setMaximumSize(QSize(100, 30));
        btn_admin_edit->setFont(font);
        stackedWidget->addWidget(page_user);
        page_order = new QWidget();
        page_order->setObjectName(QString::fromUtf8("page_order"));
        verticalLayout_5 = new QVBoxLayout(page_order);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_7 = new QLabel(page_order);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_5->addWidget(label_7);

        scrollArea = new QScrollArea(page_order);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 689, 543));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_5->addWidget(scrollArea);

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


        verticalLayout_5->addLayout(horizontalLayout_9);

        stackedWidget->addWidget(page_order);
        page_checkOrder = new QWidget();
        page_checkOrder->setObjectName(QString::fromUtf8("page_checkOrder"));
        frame = new QFrame(page_checkOrder);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(310, 70, 434, 508));
        layoutWidget_9 = new QWidget(frame);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(11, 11, 211, 31));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_9);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_13->addWidget(label_13);

        label_bill_id = new QLabel(layoutWidget_9);
        label_bill_id->setObjectName(QString::fromUtf8("label_bill_id"));

        horizontalLayout_13->addWidget(label_bill_id);

        layoutWidget_10 = new QWidget(frame);
        layoutWidget_10->setObjectName(QString::fromUtf8("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(11, 87, 181, 41));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget_10);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget_10);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_11->addWidget(label_11);

        text_bill_name = new QLineEdit(layoutWidget_10);
        text_bill_name->setObjectName(QString::fromUtf8("text_bill_name"));
        QFont font1;
        font1.setPointSize(11);
        text_bill_name->setFont(font1);

        horizontalLayout_11->addWidget(text_bill_name);

        layoutWidget_12 = new QWidget(frame);
        layoutWidget_12->setObjectName(QString::fromUtf8("layoutWidget_12"));
        layoutWidget_12->setGeometry(QRect(11, 239, 221, 33));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget_12);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget_12);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_14->addWidget(label_15);

        text_bill_contactInfo = new QLineEdit(layoutWidget_12);
        text_bill_contactInfo->setObjectName(QString::fromUtf8("text_bill_contactInfo"));
        text_bill_contactInfo->setFont(font1);

        horizontalLayout_14->addWidget(text_bill_contactInfo);

        layoutWidget_13 = new QWidget(frame);
        layoutWidget_13->setObjectName(QString::fromUtf8("layoutWidget_13"));
        layoutWidget_13->setGeometry(QRect(11, 315, 239, 29));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget_13);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_13);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_15->addWidget(label_16);

        comboBox_bill_address = new QComboBox(layoutWidget_13);
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

        layoutWidget_14 = new QWidget(frame);
        layoutWidget_14->setObjectName(QString::fromUtf8("layoutWidget_14"));
        layoutWidget_14->setGeometry(QRect(11, 391, 231, 40));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget_14);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget_14);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_16->addWidget(label_17);

        label_bill_date = new QLabel(layoutWidget_14);
        label_bill_date->setObjectName(QString::fromUtf8("label_bill_date"));

        horizontalLayout_16->addWidget(label_bill_date);

        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(12, 164, 181, 31));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_10->addWidget(label_12);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radio_bill_male = new QRadioButton(layoutWidget1);
        buttonGroup = new QButtonGroup(userMainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radio_bill_male);
        radio_bill_male->setObjectName(QString::fromUtf8("radio_bill_male"));

        horizontalLayout->addWidget(radio_bill_male);

        radio_bill_female = new QRadioButton(layoutWidget1);
        buttonGroup->addButton(radio_bill_female);
        radio_bill_female->setObjectName(QString::fromUtf8("radio_bill_female"));

        horizontalLayout->addWidget(radio_bill_female);


        horizontalLayout_10->addLayout(horizontalLayout);

        label_bill_sum = new QLabel(page_checkOrder);
        label_bill_sum->setObjectName(QString::fromUtf8("label_bill_sum"));
        label_bill_sum->setGeometry(QRect(0, 590, 281, 41));
        checked_list = new QScrollArea(page_checkOrder);
        checked_list->setObjectName(QString::fromUtf8("checked_list"));
        checked_list->setGeometry(QRect(0, 70, 282, 508));
        checked_list->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 280, 506));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        listWidget_2 = new QListWidget(scrollAreaWidgetContents_2);
        new QListWidgetItem(listWidget_2);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));

        verticalLayout_7->addWidget(listWidget_2);

        checked_list->setWidget(scrollAreaWidgetContents_2);
        label_10 = new QLabel(page_checkOrder);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(80, 10, 434, 41));
        btn_pay = new QPushButton(page_checkOrder);
        btn_pay->setObjectName(QString::fromUtf8("btn_pay"));
        btn_pay->setGeometry(QRect(430, 580, 214, 24));
        btn_back = new QToolButton(page_checkOrder);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(10, 20, 24, 23));
        btn_back->setArrowType(Qt::LeftArrow);
        stackedWidget->addWidget(page_checkOrder);
        page_map = new QWidget();
        page_map->setObjectName(QString::fromUtf8("page_map"));
        verticalLayout_8 = new QVBoxLayout(page_map);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_18 = new QLabel(page_map);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_8->addWidget(label_18);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_20 = new QLabel(page_map);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_17->addWidget(label_20);

        label_map_date_2 = new QLabel(page_map);
        label_map_date_2->setObjectName(QString::fromUtf8("label_map_date_2"));

        horizontalLayout_17->addWidget(label_map_date_2);


        verticalLayout_8->addLayout(horizontalLayout_17);

        label_map_timeout = new QLabel(page_map);
        label_map_timeout->setObjectName(QString::fromUtf8("label_map_timeout"));

        verticalLayout_8->addWidget(label_map_timeout);

        splitter = new QWidget(page_map);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        view_map = new QGraphicsView(splitter);
        view_map->setObjectName(QString::fromUtf8("view_map"));
        view_map->setGeometry(QRect(30, 90, 651, 101));
        map_checkList = new QScrollArea(splitter);
        map_checkList->setObjectName(QString::fromUtf8("map_checkList"));
        map_checkList->setGeometry(QRect(50, 10, 581, 80));
        map_checkList->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 579, 78));
        map_checkList->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_8->addWidget(splitter);

        stackedWidget->addWidget(page_map);

        verticalLayout->addWidget(stackedWidget);

        userMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(userMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1036, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        userMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(userMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        userMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(userMainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        userMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        dockWidget = new QDockWidget(userMainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        toolBox = new QToolBox(dockWidgetContents);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 278, 590));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        order_list = new QListWidget(page_3);
        order_list->setObjectName(QString::fromUtf8("order_list"));

        verticalLayout_4->addWidget(order_list);

        toolBox->addItem(page_3, QString::fromUtf8("\350\256\242\345\215\225\345\210\227\350\241\250"));

        verticalLayout_3->addWidget(toolBox);

        dockWidget->setWidget(dockWidgetContents);
        userMainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(act_check_account);
        menu_2->addAction(act_add_order);
        menu_2->addAction(act_delete_order);
        toolBar->addAction(act_check_account);
        toolBar->addSeparator();
        toolBar->addAction(act_add_order);
        toolBar->addAction(act_delete_order);
        toolBar->addSeparator();
        toolBar->addAction(act_orderList_visible);

        retranslateUi(userMainWindow);

        stackedWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(userMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *userMainWindow)
    {
        userMainWindow->setWindowTitle(QCoreApplication::translate("userMainWindow", "MainWindow", nullptr));
        act_check_account->setText(QCoreApplication::translate("userMainWindow", "\350\264\246\346\210\267\350\256\276\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        act_check_account->setToolTip(QCoreApplication::translate("userMainWindow", "\350\264\246\346\210\267\350\256\276\347\275\256", nullptr));
#endif // QT_CONFIG(tooltip)
        act_add_order->setText(QCoreApplication::translate("userMainWindow", "\346\267\273\345\212\240\350\256\242\345\215\225", nullptr));
#if QT_CONFIG(tooltip)
        act_add_order->setToolTip(QCoreApplication::translate("userMainWindow", "\346\267\273\345\212\240\350\256\242\345\215\225", nullptr));
#endif // QT_CONFIG(tooltip)
        act_delete_order->setText(QCoreApplication::translate("userMainWindow", "\345\210\240\351\231\244\350\256\242\345\215\225", nullptr));
#if QT_CONFIG(tooltip)
        act_delete_order->setToolTip(QCoreApplication::translate("userMainWindow", "\345\210\240\351\231\244\350\256\242\345\215\225", nullptr));
#endif // QT_CONFIG(tooltip)
        act_orderList_visible->setText(QCoreApplication::translate("userMainWindow", "\350\256\242\345\215\225\346\240\217\345\217\257\350\247\206", nullptr));
#if QT_CONFIG(tooltip)
        act_orderList_visible->setToolTip(QCoreApplication::translate("userMainWindow", "\350\256\242\345\215\225\346\240\217\345\217\257\350\247\206", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">\347\224\250\346\210\267\345\237\272\346\234\254\344\277\241\346\201\257</span></p></body></html>", nullptr));
        avatar_frame->setText(QString());
        btn_change_avator->setText(QCoreApplication::translate("userMainWindow", "\344\277\256\346\224\271\345\244\264\345\203\217", nullptr));
        label_4->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\347\224\237\346\227\245</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\271\264\351\276\204</span></p></body></html>", nullptr));
        text_admin_age->setText(QCoreApplication::translate("userMainWindow", "20", nullptr));
        label_14->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\350\201\224\347\263\273\346\226\271\345\274\217</span></p></body></html>", nullptr));
        text_userContactInfo->setText(QCoreApplication::translate("userMainWindow", "18382243428", nullptr));
        label_2->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\247\223\345\220\215</span></p></body></html>", nullptr));
        text_admin_name->setText(QCoreApplication::translate("userMainWindow", "Lucas", nullptr));
        label_5->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\200\247\345\210\253</span></p></body></html>", nullptr));
        radio_admin_man->setText(QCoreApplication::translate("userMainWindow", "\347\224\267", nullptr));
        radio_admin_female->setText(QCoreApplication::translate("userMainWindow", "\345\245\263", nullptr));
        label_6->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\256\266\345\272\255\344\275\217\345\235\200</span></p></body></html>", nullptr));
        text_admin_address->setText(QCoreApplication::translate("userMainWindow", "\345\271\277\350\245\277\346\241\202\346\236\227\345\270\202\347\201\265\345\267\235\345\216\277", nullptr));
        btn_admin_edit->setText(QCoreApplication::translate("userMainWindow", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        label_7->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\346\267\273\345\212\240\350\256\242\345\215\225</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p>\346\225\260\351\207\217\357\274\232</p></body></html>", nullptr));
        dishesCount->setText(QCoreApplication::translate("userMainWindow", "0", nullptr));
        label_9->setText(QCoreApplication::translate("userMainWindow", "\346\200\273\351\207\221\351\242\235\357\274\232", nullptr));
        totalPrice->setText(QCoreApplication::translate("userMainWindow", "0", nullptr));
        btn_generate_bills->setText(QCoreApplication::translate("userMainWindow", "\347\273\223\350\264\246", nullptr));
        btn_clear_carts->setText(QCoreApplication::translate("userMainWindow", "\346\270\205\347\251\272\350\264\255\347\211\251\350\275\246", nullptr));
        label_13->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">\350\256\242\345\215\225\347\274\226\345\217\267</span></p></body></html>", nullptr));
        label_bill_id->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">10086</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\224\266\344\273\266\344\272\272</span></p></body></html>", nullptr));
        text_bill_name->setText(QCoreApplication::translate("userMainWindow", "\347\224\250\346\210\267001", nullptr));
        label_15->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\201\224\347\263\273\346\226\271\345\274\217</span></p></body></html>", nullptr));
        text_bill_contactInfo->setText(QCoreApplication::translate("userMainWindow", "18277339007", nullptr));
        label_16->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\351\205\215\351\200\201\345\234\260\347\202\271</span></p></body></html>", nullptr));
        comboBox_bill_address->setItemText(0, QCoreApplication::translate("userMainWindow", "\346\240\241\351\227\250", nullptr));
        comboBox_bill_address->setItemText(1, QCoreApplication::translate("userMainWindow", "\346\226\207\347\247\221\346\245\274", nullptr));
        comboBox_bill_address->setItemText(2, QCoreApplication::translate("userMainWindow", "\350\241\214\347\237\245\346\245\274", nullptr));
        comboBox_bill_address->setItemText(3, QCoreApplication::translate("userMainWindow", "\344\270\200\346\225\231", nullptr));
        comboBox_bill_address->setItemText(4, QCoreApplication::translate("userMainWindow", "\347\220\203\347\261\273\351\246\206", nullptr));
        comboBox_bill_address->setItemText(5, QCoreApplication::translate("userMainWindow", "D\345\214\272\345\256\277\350\210\215", nullptr));
        comboBox_bill_address->setItemText(6, QCoreApplication::translate("userMainWindow", "\347\247\221\346\212\200\346\245\274", nullptr));
        comboBox_bill_address->setItemText(7, QCoreApplication::translate("userMainWindow", "\344\270\211\346\225\231", nullptr));
        comboBox_bill_address->setItemText(8, QCoreApplication::translate("userMainWindow", "C\345\214\272\345\256\277\350\210\215", nullptr));
        comboBox_bill_address->setItemText(9, QCoreApplication::translate("userMainWindow", "\345\233\233\345\210\233\344\270\255\345\277\203", nullptr));
        comboBox_bill_address->setItemText(10, QCoreApplication::translate("userMainWindow", "\347\224\265\345\255\220\345\233\276\344\271\246\351\246\206", nullptr));
        comboBox_bill_address->setItemText(11, QCoreApplication::translate("userMainWindow", "\346\240\241\345\214\273\351\231\242", nullptr));
        comboBox_bill_address->setItemText(12, QCoreApplication::translate("userMainWindow", "\345\215\201\344\270\200\346\225\231", nullptr));
        comboBox_bill_address->setItemText(13, QCoreApplication::translate("userMainWindow", "\345\233\276\344\271\246\351\246\206", nullptr));
        comboBox_bill_address->setItemText(14, QCoreApplication::translate("userMainWindow", "F\345\214\272\345\256\277\350\210\215", nullptr));

        label_17->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\344\270\213\345\215\225\346\227\266\351\227\264</span></p></body></html>", nullptr));
        label_bill_date->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\200\247\345\210\253</span></p></body></html>", nullptr));
        radio_bill_male->setText(QCoreApplication::translate("userMainWindow", "\347\224\267", nullptr));
        radio_bill_female->setText(QCoreApplication::translate("userMainWindow", "\345\245\263", nullptr));
        label_bill_sum->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\200\273\351\207\221\351\242\235:</span></p></body></html>", nullptr));

        const bool __sortingEnabled = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_2->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("userMainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        listWidget_2->setSortingEnabled(__sortingEnabled);

        label_10->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\350\256\242\345\215\225\347\241\256\350\256\244</span></p></body></html>", nullptr));
        btn_pay->setText(QCoreApplication::translate("userMainWindow", "\346\224\257\344\273\230", nullptr));
        btn_back->setText(QCoreApplication::translate("userMainWindow", "\350\277\224\345\233\236", nullptr));
        label_18->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\350\257\267\350\200\220\345\277\203\347\255\211\345\276\205\347\276\216\345\221\263\351\200\201\350\276\276</span></p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\344\270\213\345\215\225\346\227\266\351\227\264</span></p></body></html>", nullptr));
        label_map_date_2->setText(QCoreApplication::translate("userMainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">00:00:00</span></p></body></html>", nullptr));
        label_map_timeout->setText(QString());
        menu->setTitle(QCoreApplication::translate("userMainWindow", "\350\264\246\346\210\267\350\256\276\347\275\256", nullptr));
        menu_2->setTitle(QCoreApplication::translate("userMainWindow", "\347\202\271\345\215\225", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("userMainWindow", "toolBar", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("userMainWindow", "\350\256\242\345\215\225\345\210\227\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userMainWindow: public Ui_userMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMAINWINDOW_H
