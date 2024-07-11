#include "login_dialog.h"
#include "ui_login_dialog.h"
#include <QMessageBox>
#include "mainwindow.h"

Login_Dialog::Login_Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login_Dialog)
{
    ui->setupUi(this);
    // 将密码输入框设置为文字不可见
    ui->text_password->setEchoMode(QLineEdit::Password);
    ui->text_forgetPassword->setEchoMode(QLineEdit::Password);
    ui->text_verifyPassword->setEchoMode(QLineEdit::Password);
}

Login_Dialog::~Login_Dialog()
{
    delete ui;
}

int Login_Dialog::getSelectId() {
    return select_id;
}

void Login_Dialog::on_btn_login_clicked()
{
    QString account = ui->text_account->text();
    QString password = ui->text_password->text();

    if(account.isEmpty() || password.isEmpty()){
        QMessageBox::warning(this, "Warning" , "输入框不能为空");
        return;
    }

    if(account != real_account || password != real_password){
        QMessageBox::warning(this, "Warning" , "用户名或密码不正确");
        return;
    }

    QString combox_option = ui->comboBox_selectId->currentText();
    if(combox_option == "用户登录"){
        select_id = 0;
    }
    if(combox_option == "店家登录"){
        select_id = 1;
    }
    if(combox_option == "管理员登录"){
        select_id = 2;
    }

    // 关闭对话框并返回QDialog::Accepted
    accept();

}


void Login_Dialog::on_btn_forgetPassword_clicked()
{
    ui->stackedWidget->setCurrentIndex(page_forgetPassword);
}


void Login_Dialog::on_btn_backLogin_clicked()
{
    ui->stackedWidget->setCurrentIndex(page_login);
}


void Login_Dialog::on_btn_changePassword_clicked()
{
    QString forget_account = ui->text_forgetAccount->text();
    QString forget_password = ui->text_forgetPassword->text();
    QString verity_password = ui->text_verifyPassword->text();

    if(forget_account != real_account){
        QMessageBox::warning(this, "Warning" , "请输入正确的账号");
        return;
    }
    if(forget_password != verity_password){
        QMessageBox::warning(this, "Warning" , "两次密码不一致");
        return;
    }
    if(forget_password == verity_password){
        real_password = verity_password;
    }
    QMessageBox::information(this, "提示", "修改成功");
    ui->stackedWidget->setCurrentIndex(page_login);
}

