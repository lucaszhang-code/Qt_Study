#include "dialog.h"
#include<QHBoxLayout>

Dialog::Dialog(QWidget *parent)
        : QDialog(parent)
{

    iniUI();
    iniSignalSlots();
    setWindowTitle("手动创建UI");

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::iniUI(){
    chkBoxUnder = new QCheckBox("Underline");
    chkBoxItalic = new QCheckBox("Italic");
    chkBoxBold = new QCheckBox("Bold");
    QHBoxLayout *HLay1 = new QHBoxLayout();
    HLay1 -> addWidget(chkBoxUnder);
    HLay1 -> addWidget(chkBoxItalic);
    HLay1 -> addWidget(chkBoxBold);

    // 创建Black、Red、Blue3个单选按钮，并水平布局
    radioBlack = new QRadioButton("Black");
    radioBlack -> setChecked(true);
    radioRed = new QRadioButton("Red");
    radioRed -> setChecked(false);
    radioBlue = new QRadioButton("Blue");
    radioBlue -> setChecked(false);
    QHBoxLayout *HLay2 = new QHBoxLayout;
    HLay2 -> addWidget(radioBlack);
    HLay2 -> addWidget(radioRed);
    HLay2 -> addWidget(radioBlue);

    // 创建确定，取消退出3个按钮，并水平布局
    btnOK = new QPushButton("确定");
    btnCancel = new QPushButton("取消");
    btnClose = new QPushButton("退出");
    QHBoxLayout *HLay3 = new QHBoxLayout;
    HLay3 -> addWidget(btnOK);
    // HLay3 -> addStretch(1);
    HLay3 -> addWidget(btnCancel);
    HLay3 -> addStretch();
    HLay3 -> addWidget(btnClose);

    // 创建文本框，并设置初始字体
    txtEdit = new QPlainTextEdit();
    txtEdit -> setPlainText("Hello World\n手工创建");
    QFont font = txtEdit -> font();
    font.setPointSize(20);
    txtEdit -> setFont(font);

    // 创建垂直布局，并设置为主布局
    QVBoxLayout *VLay = new QVBoxLayout(this);
    VLay -> addLayout(HLay1);
    VLay -> addLayout(HLay2);
    VLay -> addWidget(txtEdit);
    VLay -> addLayout(HLay3);

    // 设置父组件的布局方式为垂直布局
    setLayout(VLay);

}

void Dialog::iniSignalSlots(){
    // 设置3个字体复选框
    connect(chkBoxUnder, SIGNAL(clicked(bool)), this, SLOT(do_chkBoxUnder(bool)));
    connect(chkBoxItalic, SIGNAL(clicked(bool)), this, SLOT(do_chkBoxItalic(bool)));
    connect(chkBoxBold, SIGNAL(clicked(bool)), this, SLOT(do_chkBoxBold(bool)));

    // 3个颜色的单选按钮
    connect(radioBlack, SIGNAL(clicked(bool)), this, SLOT(do_setFontColor()));
    connect(radioBlue, SIGNAL(clicked(bool)), this, SLOT(do_setFontColor()));
    connect(radioRed, SIGNAL(clicked(bool)), this, SLOT(do_setFontColor()));

    // 3个按钮与窗口的槽函数关联
    connect(btnOK, SIGNAL(clicked(bool)), this, SLOT(accept()));
    connect(btnCancel, SIGNAL(clicked(bool)), this, SLOT(reject()));
    connect(btnClose, SIGNAL(clicked(bool)), this, SLOT(close()));

}

void Dialog::do_chkBoxUnder(bool checked){
    // UnderLine复选框
    QFont font = txtEdit -> font();
    font.setUnderline(checked);
    txtEdit -> setFont(font);
}

void Dialog::do_chkBoxItalic(bool checked){
    // Italic复选框
    QFont font = txtEdit -> font();
    font.setItalic(checked);
    txtEdit -> setFont(font);
}

void Dialog::do_chkBoxBold(bool checked){
    // Bold复选框
    QFont font = txtEdit -> font();
    font.setBold(checked);
    txtEdit -> setFont(font);
}

void Dialog::do_setFontColor(){
    // 设置文字颜色
    QPalette plet = txtEdit -> palette();
    if(radioBlack -> isChecked())
        plet.setColor(QPalette::Text, Qt::black);
    if(radioBlue -> isChecked())
        plet.setColor(QPalette::Text, Qt::blue);
    if(radioRed -> isChecked())
        plet.setColor(QPalette::Text, Qt::red);

    txtEdit->setPalette(plet);
}
