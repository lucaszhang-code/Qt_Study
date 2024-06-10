#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QActionGroup>
#include <QSpinBox>
#include <QFontComboBox>
#include <QLabel>
#include <QProgressBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 解决中英文界面互斥性
    QActionGroup *actionGroup = new QActionGroup(this);
    actionGroup->addAction(ui->actLang_CN);
    actionGroup->addAction(ui->actLang_EN);
    actionGroup->setExclusive(true);

    // 解决可视化UI无法解决的组件
    QSpinBox *spinFontSize = new QSpinBox(this);
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->textEdit->font().pointSize());
    spinFontSize->setMinimumWidth(50);
    ui->toolBar->addWidget(spinFontSize);

    QFontComboBox* comboFontBox = new QFontComboBox(this);
    comboFontBox->setMinimumWidth(150);
    comboFontBox->setFont(ui->textEdit->font());
    ui->toolBar->addWidget(comboFontBox);

    ui->toolBar->addSeparator();
    ui->toolBar->addAction(ui->actClose);

    // status bar
    labFile = new QLabel(this);
    labFile->setMinimumWidth(150);
    labFile->setText("文件名:");
    ui->statusBar->addWidget(labFile);
    progressBar = new QProgressBar(this);
    progressBar->setMaximum(50);
    progressBar->setMinimum(5);
    progressBar->setValue(ui->textEdit->font().pointSize());
    ui->statusBar->addWidget(progressBar);
    labInfo = new QLabel("Permanent");
    ui->statusBar->addPermanentWidget(labInfo);

    connect(spinFontSize, &QSpinBox::valueChanged, this, &MainWindow::on_fontSize_changed);
    connect(comboFontBox, &QFontComboBox::currentFontChanged, this, &MainWindow::on_font_Changed);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_actFile_New_triggered()
{

    ui->textEdit->clear();
    ui->textEdit->document()->setModified(false);
    labFile->setText("新创建的文件");
}


void MainWindow::on_actFile_Open_triggered()
{

    labFile->setText("正在打开文件");
}


void MainWindow::on_actFile_Save_triggered()
{

    ui->textEdit->document()->setModified(false);
    labFile->setText("文件已保存");
}


void MainWindow::on_textEdit_copyAvailable(bool b)
{
    ui->actEdit_Copy->setEnabled(b);
    ui->actEdit_Cut->setEnabled(b);
    ui->actEdit_Paste->setEnabled(ui->textEdit->canPaste());
}


void MainWindow::on_textEdit_selectionChanged()
{
    QTextCharFormat fmt = ui->textEdit->currentCharFormat();
    ui->actFont_Bold->setChecked(fmt.font().bold());
    ui->actFont_Italic->setChecked(fmt.font().italic());
    ui->actFont_UnderLine->setChecked(fmt.font().underline());
}


void MainWindow::on_actFont_Bold_triggered(bool checked)
{
    QTextCharFormat fmt = ui->textEdit->currentCharFormat();
    if(checked){
        fmt.setFontWeight(QFont::Bold);
    }
    else{
        fmt.setFontWeight(QFont::Normal);
    }
    ui->textEdit->setCurrentCharFormat(fmt);
}


void MainWindow::on_actFont_UnderLine_triggered(bool checked)
{
    QTextCharFormat fmt = ui->textEdit->currentCharFormat();
    fmt.setFontUnderline(checked);
    ui->textEdit->setCurrentCharFormat(fmt);
}


void MainWindow::on_actFont_Italic_triggered(bool checked)
{
    QTextCharFormat fmt = ui->textEdit->currentCharFormat();
    fmt.setFontItalic(checked);
    ui->textEdit->setCurrentCharFormat(fmt);
}

// 当用户选择了不同的字体大小时，会发送on_fontSize_changed信号，同时调用函数
void MainWindow::on_fontSize_changed(int fontSize){
    QTextCharFormat fmt = ui->textEdit->currentCharFormat();
    // 将选中的文字片段的字体大小设置为fontSize
    fmt.setFontPointSize(fontSize);
    ui->textEdit->setCurrentCharFormat(fmt);
    // 同时将进度条的数值设置为fontSize
    progressBar->setValue(fontSize);
}

//
void MainWindow::on_font_Changed(const QFont &font){
    QTextCharFormat fmt = ui->textEdit->currentCharFormat();
    fmt.setFont(font);
    ui->textEdit->setCurrentCharFormat(fmt);
    labInfo->setText("字体名称：" + font.family());
}


