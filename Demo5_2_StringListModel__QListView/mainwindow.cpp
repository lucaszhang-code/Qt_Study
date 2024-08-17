// mainwindow.cpp

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringListModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_strList<<"北京"<<"上海"<<"成都"<<"广州";	// 将城市信息放入m_strList
    m_model = new QStringListModel(this);	// 创建QListViewModel对象
    m_model->setStringList(m_strList);	// m_model使用m_strList作为信息源
    ui->listView->setModel(m_model);	// 将m_model关联到ui界面的listView，listView 将使用 m_model 中的数据来显示列表项。
    ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::SelectedClicked);	// 当列表项被双击时可以进行编辑；当选中的项被点击时也可以进行编辑

}

MainWindow::~MainWindow()
{
    delete ui;
}

// 初始化列表
void MainWindow::on_btnInitList_clicked()
{
    m_model->setStringList(m_strList);	// 再次规定m_strList作为m_model的数据源
}

// 清除列表
void MainWindow::on_btnListClear_clicked()
{
    /**
    * bool QAbstractItemModel::removeRows(int row, int count, const QModelIndex &parent = QModelIndex());
    * row:要删除的起始行的索引
    * count:要删除的行数
    * const QModelIndex &parent = QModelIndex():可选参数，表示父项的索引，默认是 QModelIndex()，通常在不涉及树形结构时可以忽略。
    * 函数返回bool值
    */
    m_model->removeRows(0, m_model->rowCount());
}

// 允许编辑
void MainWindow::on_chkEditable_clicked(bool checked)
{
    if(checked)
        ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::SelectedClicked);
    else
        // 若没有勾选，不允许编辑列表
        ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

// 添加行
void MainWindow::on_btnListAppend_clicked()
{
    /**
    * bool QAbstractItemModel::insertRows(int row, int count, const QModelIndex &parent = QModelIndex())
    * row:要添加的起始行的索引
    * count:要添加多少行（可选）
    * const QModelIndex &parent = QModelIndex():可选参数，表示父项的索引，默认是 QModelIndex()，通常在不涉及树形结构时可以忽略。
    * 函数返回bool值
    */
    m_model->insertRow(m_model->rowCount());
    QModelIndex index = m_model->index(m_model->rowCount() - 1);	// 更新列表的索引，需要行数减一，因为索引是从0开始的
    m_model->setData(index, "new item", Qt::DisplayRole);	// m_model在索引为index处添加新的行，设置为new item
    ui->listView->setCurrentIndex(index);	// 将新插入的行设置为当前选中项
}

// 插入行
void MainWindow::on_btnListInsert_clicked()
{
    QModelIndex index = ui->listView->currentIndex();	// 获取用户当前选择的行索引
    m_model->insertRow(index.row());	// 插入的位置
    m_model->setData(index, "new item", Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}

// 上移选中行
void MainWindow::on_btnListMoveUp_clicked()
{
    QModelIndex index;	// 定义一个空的 QModelIndex 对象 index。在平面模型（如 QStringListModel）中，我们通常使用空的 QModelIndex 表示根项
    int currentRow = ui->listView->currentIndex().row();	// 获取当前用户选择的行数
    /**
    * bool QAbstractItemModel::moveRow(const QModelIndex &sourceParent, int sourceRow, const QModelIndex &destinationParent, int destinationChild)
    * const QModelIndex &sourceParent：原行的父项索引，对于平面模型，一般为nullptr
    * sourceRow：原位置
    * const QModelIndex &destinationParent：目标行的父项索引，对于平面模型，一般为nullptr
    * destinationChild：目标行的位置
    * 函数返回bool值
    */
    m_model->moveRow(index, currentRow, index, currentRow - 1);
}

// 下移选中项
void MainWindow::on_btnListMoveDown_clicked()
{
    QModelIndex index;
    int currentRow = ui->listView->currentIndex().row();
    m_model->moveRow(index, currentRow, index, currentRow + 2);	// 只有索引+2才能移动到正确的位置，记住就行了
}

// 排序
void MainWindow::on_btnListSort_clicked(bool checked)
{
    if(checked)
        m_model->sort(0, Qt::AscendingOrder);	// 正序
    else
        m_model->sort(0, Qt::DescendingOrder);	// 倒序
}

// 清除文本框
void MainWindow::on_btnTextClear_clicked()
{
    ui->plainTextEdit->clear();
}

// 将列表的信息呈现到文本框
void MainWindow::on_btnTextImport_clicked()
{
    ui->plainTextEdit->clear();
    QStringList tmpList = m_model->stringList();	// 获取m_model的stringList
    for(QString str : tmpList){
        ui->plainTextEdit->appendPlainText(str);	// 将列表每一行的信息作为文本框每一行的信息
    }
}

// 底部操作框，一旦点击列表就会触发此函数
void MainWindow::on_listView_clicked(const QModelIndex &index)
{
    QString str = QString("模型索引:row = %1 column = %2   ").arg(index.row()).arg(index.column());	// 可以通过index获取行和列的信息
    str += m_model->data(index,Qt::DisplayRole).toString();	// 获取操作的对象字符串
    ui->statusbar->showMessage(str);	// 展示底部操作框
}
