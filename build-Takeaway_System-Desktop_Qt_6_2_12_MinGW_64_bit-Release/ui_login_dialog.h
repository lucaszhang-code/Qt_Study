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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login_Dialog
{
public:
    QLabel *login_title;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *text_account;
    QLineEdit *text_password;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_login;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_forgetPassword;

    void setupUi(QDialog *Login_Dialog)
    {
        if (Login_Dialog->objectName().isEmpty())
            Login_Dialog->setObjectName(QString::fromUtf8("Login_Dialog"));
        Login_Dialog->resize(400, 300);
        Login_Dialog->setMinimumSize(QSize(400, 300));
        Login_Dialog->setMaximumSize(QSize(400, 300));
        login_title = new QLabel(Login_Dialog);
        login_title->setObjectName(QString::fromUtf8("login_title"));
        login_title->setGeometry(QRect(40, 30, 301, 41));
        widget = new QWidget(Login_Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 110, 51, 81));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        widget1 = new QWidget(Login_Dialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(150, 100, 162, 101));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        text_account = new QLineEdit(widget1);
        text_account->setObjectName(QString::fromUtf8("text_account"));
        text_account->setMinimumSize(QSize(160, 30));
        text_account->setMaximumSize(QSize(160, 30));
        QFont font;
        font.setPointSize(10);
        text_account->setFont(font);

        verticalLayout_2->addWidget(text_account);

        text_password = new QLineEdit(widget1);
        text_password->setObjectName(QString::fromUtf8("text_password"));
        text_password->setMinimumSize(QSize(160, 30));
        text_password->setMaximumSize(QSize(160, 30));
        text_password->setFont(font);

        verticalLayout_2->addWidget(text_password);

        widget2 = new QWidget(Login_Dialog);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(80, 230, 231, 41));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_login = new QPushButton(widget2);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setMinimumSize(QSize(90, 30));
        btn_login->setMaximumSize(QSize(90, 30));
        btn_login->setFont(font);

        horizontalLayout->addWidget(btn_login);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_forgetPassword = new QPushButton(widget2);
        btn_forgetPassword->setObjectName(QString::fromUtf8("btn_forgetPassword"));
        btn_forgetPassword->setMinimumSize(QSize(90, 30));
        btn_forgetPassword->setMaximumSize(QSize(90, 30));
        btn_forgetPassword->setFont(font);

        horizontalLayout->addWidget(btn_forgetPassword);


        retranslateUi(Login_Dialog);

        QMetaObject::connectSlotsByName(Login_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Login_Dialog)
    {
        Login_Dialog->setWindowTitle(QCoreApplication::translate("Login_Dialog", "Dialog", nullptr));
        login_title->setText(QCoreApplication::translate("Login_Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">\346\254\242\350\277\216\347\231\273\345\275\225\351\200\201\351\244\220\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Login_Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\350\264\246\345\217\267</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Login_Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\257\206\347\240\201</span></p></body></html>", nullptr));
        btn_login->setText(QCoreApplication::translate("Login_Dialog", "\347\231\273\345\275\225", nullptr));
        btn_forgetPassword->setText(QCoreApplication::translate("Login_Dialog", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_Dialog: public Ui_Login_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_DIALOG_H
