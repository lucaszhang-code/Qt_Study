#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>
#include <QDate>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    labCellIndex = new QLabel("当前单元格坐标:", this);
    labCellIndex->setMinimumWidth(250);
    labCellType = new QLabel("当前单元格类型:", this);
    labCellType->setMinimumWidth(200);
    labStuId = new QLabel("学生Id:",this);
    labStuId->setMinimumWidth(200);

    ui->statusbar->addWidget(labCellIndex);
    ui->statusbar->addWidget(labCellType);
    ui->statusbar->addWidget(labStuId);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_setHeader_clicked()
{
    ui->spinRowCount->clear();
    QStringList headerText;
    headerText<<"姓名"<<"性别"<<"出生日期"<<"民族"<<"分数"<<"是否党员";
    ui->tableWidget->setColumnCount(headerText.size());
    // ui->tableWidget->setHorizontalHeaderLabels(headerText);

    for(int i = 0; i < ui->tableWidget->columnCount(); i++){
        QTableWidgetItem *headerItem = new QTableWidgetItem(headerText.at(i));
        QFont font = headerItem->font();
        font.setBold(true);
        font.setPointSize(11);
        headerItem->setFont(font);
        headerItem->setForeground(QBrush(Qt::red));
        ui->tableWidget->setHorizontalHeaderItem(i, headerItem);
    }
}


void MainWindow::on_btnSetRow_clicked()
{

    ui->tableWidget->setRowCount(ui->spinRowCount->value());
}


void MainWindow::on_btnIniData_clicked()
{
    ui->tableWidget->clearContents();
    QDate birth(2000, 2, 2);
    for(int i = 0; i < ui->tableWidget->rowCount(); i++){
        QString strName = QString("学生%1").arg(i);
        QString strSex = (i % 2) ? "男生" : "女生";
        bool isParty = (i % 2) ? false : true;
        int score = QRandomGenerator::global()->bounded(60, 100);
        createItemRow(i, strName, strSex, birth, "汉族", isParty, score);
        birth = birth.addDays(20);
    }
}

void MainWindow::createItemRow(int rowNo, QString name, QString sex, QDate birth, QString nation, bool isPM, int score)
{
    uint stuID = 20221000;
    // 姓名
    QTableWidgetItem *item = new QTableWidgetItem(name, ctName);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    stuID += rowNo;
    item->setData(Qt::UserRole, QVariant(stuID));
    ui->tableWidget->setItem(rowNo, colName, item);
    // 性别
    QIcon icon;
    if(sex == "男生")
        icon.addFile(":/images/icons/boy.ico");
    else
        icon.addFile(":/images/icons/girl.ico");
    item = new QTableWidgetItem(sex, ctSex);
    item->setIcon(icon);
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNo, colSex, item);
    // 出生日期
    item = new QTableWidgetItem(birth.toString("yyyy-MM-dd"), ctBirth);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNo, colBirth, item);
    // 民族
    item = new QTableWidgetItem(nation, ctNation);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNo, colNation, item);
    // 是否党员
    item = new QTableWidgetItem("党员", ctParty);
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled | Qt::ItemIsUserCheckable);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    if(isPM)
        item->setCheckState(Qt::Checked);
    else
        item->setCheckState(Qt::Unchecked);
    item->setBackground(QBrush(Qt::yellow));
    ui->tableWidget->setItem(rowNo, colParty, item);
    // 分数
    item = new QTableWidgetItem(QString::number(score), ctScore);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNo, colScore, item);
}


void MainWindow::on_btnInsertRow_clicked()
{
    int curRow = ui->tableWidget->currentRow();
    ui->tableWidget->insertRow(curRow);
    createItemRow(curRow, "新学生", "男生", QDate::fromString("2000-1-1", "yyyy-M-d"), "汉族", false, 78);
}


void MainWindow::on_btnAddRow_clicked()
{
    int curRow = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(curRow);
    createItemRow(curRow, "新学生", "女生", QDate::fromString("2000-1-1", "yyyy-M-d"), "汉族", true, 78);
}


void MainWindow::on_btnDelCurRow_clicked()
{
    int curRow = ui->tableWidget->currentRow();
    ui->tableWidget->removeRow(curRow);
}


void MainWindow::on_btnAutoHeight_clicked()
{
    ui->tableWidget->resizeRowsToContents();
}


void MainWindow::on_btnAutoWidth_clicked()
{
    ui->tableWidget->resizeColumnsToContents();
}


void MainWindow::on_btnReadToEdit_clicked()
{
    ui->plainTextEdit->clear();
    QTableWidgetItem *item;
    for(int i = 0; i < ui->tableWidget->rowCount(); i++){
        QString str = QString("第%1行").arg(i + 1);
        for(int j = 0; j < ui->tableWidget->columnCount() - 1; j++){
            item = ui->tableWidget->item(i, j);
            str = str + item->text() + " ";
        }

        item = ui->tableWidget->item(i, colParty);
        if(item->checkState() == Qt::Checked)
            str += "党员";
        else
            str += "群众";
        ui->plainTextEdit->appendPlainText(str);
    }
}


void MainWindow::on_chkBoxTabEditable_clicked(bool checked)
{
    if(checked)
        ui->tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::SelectedClicked);
    else
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
}


void MainWindow::on_chkBoxRowColor_clicked(bool checked)
{
    ui->tableWidget->setAlternatingRowColors(checked);
}


void MainWindow::on_chkBoxHeaderH_clicked(bool checked)
{
    ui->tableWidget->horizontalHeader()->setVisible(checked);
}


void MainWindow::on_chkBoxHeaderV_clicked(bool checked)
{
    ui->tableWidget->verticalHeader()->setVisible(checked);
}


void MainWindow::on_rBtnSelectRow_clicked()
{
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
}


void MainWindow::on_rBtnSelectItem_clicked()
{
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
}


void MainWindow::on_tableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn)
{
    Q_UNUSED(previousRow);
    Q_UNUSED(previousColumn);
    QTableWidgetItem *item = ui->tableWidget->item(currentRow, currentColumn);
    if(item == nullptr) return;
    labCellIndex->setText(QString::asprintf("当前单元格坐标:%d, %d", currentRow, currentColumn));
    labCellType->setText(QString::asprintf("当前单元格类型：%d", item->type()));
    item = ui->tableWidget->item(currentRow, colName);
    labStuId->setText(QString::asprintf("学生学号: %d", item->data(Qt::UserRole).toUInt()));
}

