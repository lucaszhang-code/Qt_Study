// MainWindow.cpp部分
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDialog>
#include<QFileDialog>
#include <QSpinBox>

// 递归调用函数
void MainWindow::changeItemCaption(QTreeWidgetItem *item)
{
    // 给遍历的当前节点的文件名开头添加*
    QString str = "*" + item->text(colItem);
    item->setText(colItem, str);
    // 如果当前节点的子节点数量大于0，调用此函数，遍历他的每个子节点
    if(item->childCount() > 0)
        for(int i = 0; i < item->childCount(); i++){
            changeItemCaption(item->child(i));
        }
}

// 图片显示函数，传入用户当前选择的图片节点
void MainWindow::displayImage(QTreeWidgetItem *item)
{
    // 从传入的树节点 item 中获取存储在 Qt::UserRole 角色中的文件路径，并将其转换为字符串。
    QString fileName = item->data(colItem, Qt::UserRole).toString();
    // 更新他们的名称
    labFileName->setText(fileName);
    labNodeText->setText(item->text(colItem));
    // 使用m_pixmap加载图片，m_pixmap会存储当前显示的图片
    m_pixmap.load(fileName);
    // 调用图片宽度适应函数
    ui->actZoomKitH->triggered();

    // 其他有关图像操作的组件均可使用
    ui->actZoomKitH->setEnabled(true);
    ui->actZoomFitW->setEnabled(true);
    ui->actZoomIn->setEnabled(true);
    ui->actZoomOut->setEnabled(true);
    ui->actZoomRealSize->setEnabled(true);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 清除treeWidget控件，释放内存
    ui->treeWidget->clear();

    // 设置QTreeWidgetItem的表头字段名
    QTreeWidgetItem* header = new QTreeWidgetItem();
    header->setText(colItem, "目录和文件");
    header->setText(colItemType, "节点类型");
    header->setText(colDate, "最后的修改日期");

    // 设置字体对齐方式（竖直和垂直方向居中对齐）
    header->setTextAlignment(colItem, Qt::AlignHCenter | Qt::AlignVCenter);
    header->setTextAlignment(colItemType, Qt::AlignHCenter | Qt::AlignVCenter);
    header->setTextAlignment(colDate, Qt::AlignHCenter | Qt::AlignVCenter);

    // 将设置好的参数作为treeWidget的表头名
    ui->treeWidget->setHeaderItem(header);

    // 添加一个根节点
    QIcon icon(":/images/icons/15.ico");
    QTreeWidgetItem* topItem = new QTreeWidgetItem(itTopItem);
    topItem->setIcon(colItem, icon);
    topItem->setText(colItem, "图片");
    topItem->setText(colItemType, "Top Item");
    topItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);
    topItem->setCheckState(colItem, Qt::Checked);
    ui->treeWidget->addTopLevelItem(topItem);

    // 底部工具栏
    labNodeText = new QLabel("节点标题", this);
    // 设置最小宽度为200px
    labNodeText->setMinimumWidth(200);
    ui->statusbar->addWidget(labNodeText);

    // 设置缩放比例控件
    spinRatio = new QSpinBox(this);
    // 设置范围
    spinRatio->setRange(0, 2000);
    // 设置默认值
    spinRatio->setValue(100);
    // 设置后缀为 " %"
    spinRatio->setSuffix(" %");
    // 设置用户可读，但不可编辑
    spinRatio->setReadOnly(true);
    // 隐藏控件的增减按钮
    spinRatio->setButtonSymbols(QAbstractSpinBox::NoButtons);
    // 添加到状态栏上，并设置为永久显示的控件
    ui->statusbar->addPermanentWidget(spinRatio);

    labFileName = new QLabel("文件名", this);
    ui->statusbar->addPermanentWidget(labFileName);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 添加目录
void MainWindow::on_actAddFolder_triggered()
{
    // 弹出文件选择框，记录用户用户选择的文件夹名称
    QString dir = QFileDialog::getExistingDirectory();
    // 如果用户没选文件夹，程序不再进行
    if(dir.isEmpty()) return;
    // 获取用户当前选择的树状结构节点
    QTreeWidgetItem* parItem = ui->treeWidget->currentItem();
    // 若用户没有选择节点，程序不再进行
    if(parItem == nullptr) return;

    // 如果用户没有选择(itImageItem)图片，就允许添加目录
    // 毕竟图片是根节点，不能在根节点添加目录
    if(parItem->type() != itImageItem){
        int cnt = dir.length();
        // 得到最后一个/的位置
        int i = dir.lastIndexOf("/");
        // 通过一个小算法得到文件名
        QString nodeName = dir.right(cnt- i -1);
        // 创建一个新节点用于容纳文件夹
        QTreeWidgetItem* item = new QTreeWidgetItem();
        QIcon icon(":/images/icons/open3.bpm");
        // 注意colItem和colItemType是枚举的值
        // 给colItem列（第0列）的节点设置图标
        item->setIcon(colItem, icon);
        // 给colItem列（第0列）的节点设置字为nodeName(文件名)
        item->setText(colItem, nodeName);
        // colItemType（第1列）的节点设置字为Group Item
        item->setText(colItemType, "Group Item");
        // 设置节点的标志，使其可选择、可检查、可启用等
        item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);
        // 节点的检查状态为选中
        item->setCheckState(colItem, Qt::Checked);
        // 将文件夹路径存储在节点的用户角色数据中
        item->setData(colItem, Qt::UserRole, QVariant(dir));
        // 将新节点作为选中节点的子节点
        parItem->addChild(item);
    }
}

// 添加图片
void MainWindow::on_actAddFiles_triggered()
{
    // 打开一个文件选择框，选择框的标题是选择文件
    /**
    * QFileDialog::getOpenFileNames函数用法
    * QStringList QFileDialog::getOpenFileNames(QWidget *parent = nullptr,
                                          const QString &caption = QString(),
                                          const QString &dir = QString(),
                                          const QString &filter = QString());
    * getOpenFileNames（打开窗口的位置， 对话框的标题， 默认打开目录， 文件过滤器（指定文件类））
    */
    QStringList files = QFileDialog::getOpenFileNames(this, "选择文件", "", "Images(*.jpg)");
    if(files.isEmpty()) return;
    QTreeWidgetItem *parItem, *item;
    // 获取当前选择的节点
    item = ui->treeWidget->currentItem();
    // 如果没有选择节点，默认选择顶层节点
    if(!item) item = ui->treeWidget->topLevelItem(0);

    /**
    * 这个判断条件的目的是，我们只允许在文件夹下面添加图片，也就是在parItem
    * 如果点击了图片节点，是不允许在图片节点下面添加节点的，所以只能在他的父节点添加，此时添加的节点与图片是同一节点
    * 反之就可以在当前节点下面添加新节点
    */
    // 如果当前节点是图片
    if(item->type() == itImageItem)
        // 则将当前节点的父节点设置为parItem
        parItem = item->parent();
    else
        // 如果当前节点是文件夹，则设置自身为parItem
        parItem = item;

    // 处理用户选择的每个图片文件
    for(int i = 0; i < files.size(); i++){
        QString fileName = files.at(i);
        QIcon icon(":/images/icons/31.ico");
        // 获取文件的详细信息
        QFileInfo fileInfo(fileName);
        // 获取文件名
        QString NodeText = fileInfo.fileName();
        // 获取文件的最后修改时间
        QDateTime dateTime = fileInfo.lastModified();

        // 设置item类型为itImageItem
        QTreeWidgetItem* item = new QTreeWidgetItem(itImageItem);
        item->setIcon(colItem, icon);
        item->setText(colItem, NodeText);
        item->setText(colItemType, "Image Item");
        item->setText(colDate, dateTime.toString("yyyy-mm-dd"));
        item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);
        item->setCheckState(colItem, Qt::Checked);
        item->setData(colItem, Qt::UserRole, QVariant(fileName));
        parItem->addChild(item);
    }
    parItem->setExpanded(true);
}

// 删除节点
void MainWindow::on_actDeleteItem_triggered()
{
    QTreeWidgetItem* item = ui->treeWidget->currentItem();
    if(item == nullptr) return;
    QTreeWidgetItem* parItem = item->parent();
    // 通过父节点删除子节点，如果子节点是文件夹，它里面的所有文件均会被删除
    parItem->removeChild(item);
}

// 选中项的类型，启用或禁用一些操作（如添加文件夹、添加文件、删除项）以及在选择图像项时显示图像。
void MainWindow::on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    // 增加current == previous判断的目的是减少程序的开支，不用进行重复判断
    if(current == nullptr || current == previous) return;

    switch (current->type()) {
        // 如果选择顶层节点，不允许删除
    case itTopItem:
        ui->actAddFolder->setEnabled(true);
        ui->actAddFiles->setEnabled(true);
        ui->actDeleteItem->setEnabled(false);
        break;
            // 选中中间节点，所有操作均可做
    case itGroupItem:
        ui->actAddFolder->setEnabled(true);
        ui->actAddFiles->setEnabled(true);
        ui->actDeleteItem->setEnabled(true);
        break;
            // 选中图片节点，不允许增加节点，并且调用图片显示函数
    case itImageItem:
        ui->actAddFolder->setEnabled(false);
        ui->actAddFiles->setEnabled(true);
        ui->actDeleteItem->setEnabled(true);
        displayImage(current);
        break;
    }
}

// 调用递归遍历函数
void MainWindow::on_actScanItems_triggered()
{
    // ui->treeWidget->topLevelItemCount()是获取顶层节点的数量，并且传入当前节点，调用递归函数
    for(int i = 0; i < ui->treeWidget->topLevelItemCount(); i++){
        changeItemCaption(ui->treeWidget->topLevelItem(i));
    }
}

// 图片自适应宽度
void MainWindow::on_actZoomFitW_triggered()
{
    // 获取scrollArea的宽度，并减去30px
    int w = ui->scrollArea->width() - 30;
    // 获取图片的真实宽度
    int realw = m_pixmap.width();
    // 缩放比例是软件界面的宽度除以图片真实宽度
    m_ratio = float(w) / realw;
    // 给spinRatio设置数值为比例*100
    spinRatio->setValue(m_ratio * 100);
    // 保持图片的宽高比，以w - 30为基准，得到新的图片对象pix
    QPixmap pix = m_pixmap.scaledToWidth(w - 30);
    // 将pix显示在labPic中
    ui->labPic->setPixmap(pix);
}

// 图片自适应高度
void MainWindow::on_actZoomKitH_triggered()
{
    int h = ui->scrollArea->height() - 30;
    int realh = m_pixmap.height();
    m_ratio = float(h) / realh;

    spinRatio->setValue(m_ratio * 100);
    QPixmap pix = m_pixmap.scaledToHeight(h - 30);
    ui->labPic->setPixmap(pix);
}

// 展示图片的真实大小
void MainWindow::on_actZoomRealSize_triggered()
{
    ui->labPic->setPixmap(m_pixmap);
    m_ratio = 1;
    spinRatio->setValue(100);
}

// 放大
void MainWindow::on_actZoomIn_triggered()
{
    m_ratio *= 1.2;
    int w = m_ratio * m_pixmap.width();
    int h = m_ratio * m_pixmap.height();
    // 图片的大小为当前大小*相应的宽高缩放比
    ui->labPic->setPixmap(m_pixmap.scaled(w, h));
    spinRatio->setValue(100 * m_ratio);
}

// 缩小
void MainWindow::on_actZoomOut_triggered()
{
    m_ratio *= 0.8;
    int w = m_ratio * m_pixmap.width();
    int h = m_ratio * m_pixmap.height();
    ui->labPic->setPixmap(m_pixmap.scaled(w, h));
    spinRatio->setValue(100 * m_ratio);
}


void MainWindow::on_actDoVisible_triggered(bool checked)
{
    ui->dockWidget->setVisible(checked);
}


void MainWindow::on_actDockFloat_triggered(bool checked)
{
    ui->dockWidget->setFloating(checked);
}


void MainWindow::on_dockWidget_visibilityChanged(bool visible)
{
    ui->actDoVisible->setChecked(visible);
}


void MainWindow::on_dockWidget_topLevelChanged(bool topLevel)
{
    ui->actDockFloat->setEnabled(topLevel);
}
