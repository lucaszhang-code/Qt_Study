/********************************************************************************
** Form generated from reading UI file 'login_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_DIALOG_H
#define UI_LOGIN_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QLabel *login_title;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_7;
    QStackedWidget *stackedWidget;
    QWidget *page_login;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QLineEdit *text_account;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_3;
    QLineEdit *text_password;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QComboBox *comboBox_selectId;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *btn_login;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_forgetPassword;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_5;
    QWidget *page_forgetPassword;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *text_forgetAccount;
    QLineEdit *text_forgetPassword;
    QLineEdit *text_verifyPassword;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_changePassword;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_backLogin;

    void setupUi(QDialog *Login_Dialog)
    {
        if (Login_Dialog->objectName().isEmpty())
            Login_Dialog->setObjectName(QString::fromUtf8("Login_Dialog"));
        Login_Dialog->resize(450, 300);
        Login_Dialog->setMinimumSize(QSize(450, 300));
        Login_Dialog->setMaximumSize(QSize(450, 300));
        verticalLayout_2 = new QVBoxLayout(Login_Dialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        login_title = new QLabel(Login_Dialog);
        login_title->setObjectName(QString::fromUtf8("login_title"));

        horizontalLayout_6->addWidget(login_title);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);


        verticalLayout_2->addLayout(horizontalLayout_6);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        stackedWidget = new QStackedWidget(Login_Dialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QFont font;
        font.setPointSize(10);
        stackedWidget->setFont(font);
        page_login = new QWidget();
        page_login->setObjectName(QString::fromUtf8("page_login"));
        gridLayout = new QGridLayout(page_login);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_2 = new QLabel(page_login);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        text_account = new QLineEdit(page_login);
        text_account->setObjectName(QString::fromUtf8("text_account"));
        text_account->setMinimumSize(QSize(160, 30));
        text_account->setMaximumSize(QSize(160, 30));
        text_account->setFont(font);

        horizontalLayout_3->addWidget(text_account);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        label_3 = new QLabel(page_login);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        text_password = new QLineEdit(page_login);
        text_password->setObjectName(QString::fromUtf8("text_password"));
        text_password->setMinimumSize(QSize(160, 30));
        text_password->setMaximumSize(QSize(160, 30));
        text_password->setFont(font);

        horizontalLayout_4->addWidget(text_password);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(17, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        comboBox_selectId = new QComboBox(page_login);
        comboBox_selectId->addItem(QString());
        comboBox_selectId->addItem(QString());
        comboBox_selectId->addItem(QString());
        comboBox_selectId->setObjectName(QString::fromUtf8("comboBox_selectId"));

        horizontalLayout_5->addWidget(comboBox_selectId);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_13);

        btn_login = new QPushButton(page_login);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setMinimumSize(QSize(90, 30));
        btn_login->setMaximumSize(QSize(90, 30));
        btn_login->setFont(font);

        horizontalLayout->addWidget(btn_login);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_forgetPassword = new QPushButton(page_login);
        btn_forgetPassword->setObjectName(QString::fromUtf8("btn_forgetPassword"));
        btn_forgetPassword->setMinimumSize(QSize(90, 30));
        btn_forgetPassword->setMaximumSize(QSize(90, 30));
        btn_forgetPassword->setFont(font);

        horizontalLayout->addWidget(btn_forgetPassword);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_14);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        stackedWidget->addWidget(page_login);
        page_forgetPassword = new QWidget();
        page_forgetPassword->setObjectName(QString::fromUtf8("page_forgetPassword"));
        layoutWidget_2 = new QWidget(page_forgetPassword);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(80, 40, 94, 111));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_4->addWidget(label_5);

        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_4->addWidget(label);

        layoutWidget = new QWidget(page_forgetPassword);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 40, 162, 106));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        text_forgetAccount = new QLineEdit(layoutWidget);
        text_forgetAccount->setObjectName(QString::fromUtf8("text_forgetAccount"));
        text_forgetAccount->setMinimumSize(QSize(160, 30));
        text_forgetAccount->setMaximumSize(QSize(160, 30));

        verticalLayout_5->addWidget(text_forgetAccount);

        text_forgetPassword = new QLineEdit(layoutWidget);
        text_forgetPassword->setObjectName(QString::fromUtf8("text_forgetPassword"));
        text_forgetPassword->setMinimumSize(QSize(160, 30));
        text_forgetPassword->setMaximumSize(QSize(160, 30));

        verticalLayout_5->addWidget(text_forgetPassword);

        text_verifyPassword = new QLineEdit(layoutWidget);
        text_verifyPassword->setObjectName(QString::fromUtf8("text_verifyPassword"));
        text_verifyPassword->setMinimumSize(QSize(160, 30));
        text_verifyPassword->setMaximumSize(QSize(160, 30));

        verticalLayout_5->addWidget(text_verifyPassword);

        layoutWidget1 = new QWidget(page_forgetPassword);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(110, 180, 225, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_changePassword = new QPushButton(layoutWidget1);
        btn_changePassword->setObjectName(QString::fromUtf8("btn_changePassword"));
        btn_changePassword->setMinimumSize(QSize(90, 30));
        btn_changePassword->setMaximumSize(QSize(90, 30));

        horizontalLayout_2->addWidget(btn_changePassword);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btn_backLogin = new QPushButton(layoutWidget1);
        btn_backLogin->setObjectName(QString::fromUtf8("btn_backLogin"));
        btn_backLogin->setMinimumSize(QSize(90, 30));
        btn_backLogin->setMaximumSize(QSize(90, 30));

        horizontalLayout_2->addWidget(btn_backLogin);

        stackedWidget->addWidget(page_forgetPassword);

        verticalLayout_2->addWidget(stackedWidget);


        retranslateUi(Login_Dialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Login_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Login_Dialog)
    {
        Login_Dialog->setWindowTitle(QCoreApplication::translate("Login_Dialog", "Dialog", nullptr));
        login_title->setText(QCoreApplication::translate("Login_Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">\346\254\242\350\277\216\347\231\273\345\275\225\351\200\201\351\244\220\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Login_Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\350\264\246\345\217\267</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Login_Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\257\206\347\240\201</span></p></body></html>", nullptr));
        comboBox_selectId->setItemText(0, QCoreApplication::translate("Login_Dialog", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        comboBox_selectId->setItemText(1, QCoreApplication::translate("Login_Dialog", "\345\272\227\345\256\266\347\231\273\345\275\225", nullptr));
        comboBox_selectId->setItemText(2, QCoreApplication::translate("Login_Dialog", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", nullptr));

        btn_login->setText(QCoreApplication::translate("Login_Dialog", "\347\231\273\345\275\225", nullptr));
        btn_forgetPassword->setText(QCoreApplication::translate("Login_Dialog", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("Login_Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\350\264\246\345\217\267</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Login_Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\257\206\347\240\201</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Login_Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\347\241\256\350\256\244\345\257\206\347\240\201</span></p></body></html>", nullptr));
        btn_changePassword->setText(QCoreApplication::translate("Login_Dialog", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        btn_backLogin->setText(QCoreApplication::translate("Login_Dialog", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_Dialog: public Ui_Login_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_DIALOG_H
