#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QLabel>
#include<QItemSelectionModel>
#include<QStandardItemModel>
#include<QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->splitter);

    labCurFile = new QLabel("当前文件", this);
    labCurFile->setMinimumWidth(200);
    labCellPos = new QLabel("当前单元格", this);
    labCellPos->setMinimumWidth(200);
    labCellText = new QLabel("单元格内容", this);
    labCellText->setMinimumWidth(200);

    ui->statusbar->addWidget(labCurFile);
    ui->statusbar->addWidget(labCellPos);
    ui->statusbar->addWidget(labCellText);

    m_model = new QStandardItemModel(2, FixedColumnCount, this);
    m_selection = new QItemSelectionModel(m_model, this);
    ui->tableView->setModel(m_model);
    ui->tableView->setSelectionModel(m_selection);
    ui->tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);

    connect(m_selection, &QItemSelectionModel::currentChanged, this, &MainWindow::do_currentChanged);

}

void MainWindow::do_currentChanged(const QModelIndex &current, const QModelIndex &previous){
    if(current.isValid()){
        labCellPos->setText(QString("当前单元格:%1行，%2列").arg(current.row()).arg(current.column()));
        QStandardItem *aItem = m_model->itemFromIndex(current);
        labCellText->setText("单元内容：" + aItem->text());
        ui->actFontBold->setChecked(aItem->font().bold());
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::iniModelData(QStringList &aFileContent){
    int rowCount = aFileContent.size();
    m_model->setRowCount(rowCount - 1); // 第一行是标题

    QString header = aFileContent.at(0);
    QStringList headerList = header.split(QRegularExpression(R"(\s+)"), Qt::SkipEmptyParts);
    m_model->setHorizontalHeaderLabels(headerList);
    int j;

    QStandardItem *aItem;
    for(int i = 1; i < rowCount; i++){
        QString aLineText = aFileContent.at(i);
        QStringList tmpList = aLineText.split(QRegularExpression(R"(\s+)"), Qt::SkipEmptyParts);
        for(j = 0; j < FixedColumnCount - 1; j++){
            aItem = new QStandardItem(tmpList.at(j));
            m_model->setItem(i - 1, j, aItem);
        }
        aItem = new QStandardItem(tmpList.at(j));
        aItem->setCheckable(true);
        aItem->setBackground(QBrush(Qt::yellow));
        if(tmpList.at(j) == "0"){
            aItem->setCheckState(Qt::Unchecked);
        }
        else{
            aItem->setCheckState(Qt::Checked);
        }
    }
}

void MainWindow::on_actOpen_triggered()
{
    QString curPath = QCoreApplication::applicationDirPath();
    QString aFileName = QFileDialog::getOpenFileName(this, "打开一个文件", curPath, "数据文件(*.txt);;所有文件(*.*)");

    if(aFileName.isEmpty()) return;
    QFile aFile(aFileName);
    if(!aFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        return;
    }

    QStringList aFileContent;
    ui->plainTextEdit->clear();
    QTextStream aStream(&aFile);
    while(!aStream.atEnd()){
        QString str = aStream.readLine();
        ui->plainTextEdit->appendPlainText(str);
        aFileContent.append(str);
    }
    aFile.close();

    labCurFile->setText("当前文件: " + aFileName);
    ui->actAppend->setEnabled(true);
    ui->actInsert->setEnabled(true);
    ui->actDelete->setEnabled(true);

    iniModelData(aFileContent);
}

