// 头文件部分
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class QTreeWidgetItem;
class QLabel;
class QSpinBox;

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    // 枚举类型，对于treeColNum这种确定的数字，使用枚举可以有效避免出现魔法数字，便于维护和管理
    enum treeColNum{colItem = 0, colItemType, colDate};
    enum treeItemType{itTopItem = 1001, itGroupItem, itImageItem};
    // 递归遍历函数
    void changeItemCaption(QTreeWidgetItem* item);
    // 工具栏显示文件名称
    QLabel* labFileName;
    QLabel* labNodeText;
    // 工具栏缩放比例控件
    QSpinBox* spinRatio;

    // 存储图片的变量
    QPixmap m_pixmap;
    // 图片的当前比例
    float m_ratio;
    // 图片显示函数
    void displayImage(QTreeWidgetItem* item);


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actAddFolder_triggered();

    void on_actAddFiles_triggered();

    void on_actDeleteItem_triggered();

    void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

    void on_actScanItems_triggered();

    void on_actZoomFitW_triggered();

    void on_actZoomKitH_triggered();

    void on_actZoomRealSize_triggered();

    void on_actZoomIn_triggered();

    void on_actZoomOut_triggered();

    void on_actDoVisible_triggered();

    void on_actDoVisible_triggered(bool checked);

    void on_actDockFloat_triggered(bool checked);

    void on_dockWidget_visibilityChanged(bool visible);

    void on_dockWidget_topLevelChanged(bool topLevel);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
