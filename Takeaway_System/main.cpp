#include "mainwindow.h"
#include "login_dialog.h"
#include "usermainwindow.h"
#include "structures.h"
#include "adminmainwindow.h"
#include <QMainWindow>
#include <QDir>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login_Dialog loginDialog;
    loginDialog.setWindowTitle("登录");

    if (loginDialog.exec() == QDialog::Accepted) {
        int select_id = loginDialog.getSelectId();

        if (select_id == 1) {
            MainWindow mainWindow;
            mainWindow.setWindowTitle("hungry-校园外卖速递-店家端");
            mainWindow.setMinimumSize(400,300);
            mainWindow.show();
            return a.exec();
        } else if (select_id == 0) {
            userMainWindow userMainWindow;
            userMainWindow.setWindowTitle("hungry-校园外卖速递-客户端");
            userMainWindow.setMinimumSize(400,300);
            userMainWindow.show();
            return a.exec();
        } else if (select_id == 2){
            AdminMainWindow adminMainWindow;
            adminMainWindow.setWindowTitle("hungry-校园外卖速递-管理员端");
            adminMainWindow.setMinimumSize(400, 300);
            adminMainWindow.show();
            return a.exec();
        }
    }
    else {
        return 0;
    }
}
