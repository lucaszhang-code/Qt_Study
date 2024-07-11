#ifndef ADMINMAINWINDOW_H
#define ADMINMAINWINDOW_H
#include "structures.h"
#include <QList>

#include <QMainWindow>

namespace Ui {
class AdminMainWindow;
}

class AdminMainWindow : public QMainWindow
{
    Q_OBJECT


public:
    explicit AdminMainWindow(QWidget *parent = nullptr);
    ~AdminMainWindow();

private slots:
    void on_act_qualification_review_triggered();

    void on_act_account_setting_triggered();

    void on_act_complaint_handing_triggered();

private:
    Ui::AdminMainWindow *ui;

    QList<Store> storeMsg;
    QList<Complain> complainMsg;

    enum pages{page_admin = 0, page_verifyLicence, page_complain};
    int storeRow; // 全局变量，用户当前点击的是哪一列
    int complainRow;    // 全局变量，用户点击的投诉列表的哪一列


    QList<Store> loadStoresFromJson(const QString &filePath);
    QList<Complain> loadComplainFromJson(const QString &filePath);
    void initListWidget(); // 初始化列表
    void addStoreList(QString id, bool status); // 待审核列表添加事项
    void initComplainList();
    void addComplainList(QString id, bool status);


};

#endif // ADMINMAINWINDOW_H
