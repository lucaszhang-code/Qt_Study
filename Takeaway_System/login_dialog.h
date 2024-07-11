#ifndef LOGIN_DIALOG_H
#define LOGIN_DIALOG_H

#include <QDialog>

namespace Ui {
class Login_Dialog;
}

class Login_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Login_Dialog(QWidget *parent = nullptr);
    ~Login_Dialog();

    int getSelectId();

private slots:
    void on_btn_login_clicked();

    void on_btn_forgetPassword_clicked();

    void on_btn_backLogin_clicked();

    void on_btn_changePassword_clicked();

private:
    Ui::Login_Dialog *ui;

    enum loginPage {page_login, page_forgetPassword};

    QString real_account = "123456";
    QString real_password = "123456";

    QString merchant_account = "654321";
    QString merchant_password = "654321";

    int select_id = 0;
};

#endif // LOGIN_DIALOG_H
