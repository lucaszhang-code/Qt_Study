#include "widget.h"
#include <QHBoxLayout>

Widget::Widget(QWidget *parent){
    initUI();
    slotConnect();
}

Widget::~Widget(){

}

void Widget::slotConnect() {
    connect(btn_text_left, &QPushButton::clicked, this, &Widget::on_btn_text_left_clicked);
    connect(btn_text_center, &QPushButton::clicked, this, &Widget::on_btn_text_center_clicked);
    connect(btn_text_right, &QPushButton::clicked, this, &Widget::on_btn_text_right_clicked);
    connect(btn_text_bold, &QPushButton::toggled, this, &Widget::on_btn_text_bold_clicked);
    connect(btn_text_italic, &QPushButton::toggled, this, &Widget::on_btn_text_italic_clicked);
    connect(btn_text_underline, &QPushButton::toggled, this, &Widget::on_btn_text_underline_clicked);
    connect(check_btn_readonly, &QCheckBox::clicked, this, &Widget::on_check_btn_readonly_clicked);
    connect(check_btn_enabled, &QPushButton::clicked, this, &Widget::on_check_btn_enabled_clicked);
    connect(check_btn_clear, &QCheckBox::clicked, this, &Widget::on_check_btn_clear_clicked);
    connect(radio_color_black, &QRadioButton::clicked, this, &Widget::on_radio_color_black_clicked);
    connect(radio_color_red, &QRadioButton::clicked, this, &Widget::on_radio_color_red_clicked);
    connect(radio_color_blue, &QRadioButton::clicked, this, &Widget::on_radio_color_blue_clicked);

}

void Widget::initUI() {
    btn_text_left = new QPushButton("居左");
    btn_text_center = new QPushButton("居中");
    btn_text_right = new QPushButton("居右");
    QHBoxLayout *layout1 = new QHBoxLayout();
    layout1 -> addWidget(btn_text_left);
    layout1 -> addWidget(btn_text_center);
    layout1 -> addWidget(btn_text_right);

    btn_text_bold = new QPushButton("粗体");
    btn_text_italic = new QPushButton("斜体");
    btn_text_underline = new QPushButton("下划线");
    QHBoxLayout *layout2 = new QHBoxLayout();
    layout2 -> addWidget(btn_text_bold);
    layout2 -> addWidget(btn_text_italic);
    layout2 -> addWidget(btn_text_underline);

    check_btn_readonly = new QCheckBox("Readonly");
    check_btn_enabled = new QCheckBox("Enabled");
    check_btn_enabled -> setChecked(true);
    check_btn_clear = new QCheckBox("Clear");
    QHBoxLayout *layout3 = new QHBoxLayout();
    layout3 -> addWidget(check_btn_readonly);
    layout3 -> addWidget(check_btn_enabled);
    layout3 -> addWidget(check_btn_clear);

    radio_color_black = new QRadioButton("黑色");
    radio_color_red = new QRadioButton("红色");
    radio_color_blue = new QRadioButton("蓝色");
    radio_color_black -> setChecked(true);
    QHBoxLayout *layout4 = new QHBoxLayout();
    layout4 -> addWidget(radio_color_black);
    layout4 -> addWidget(radio_color_red);
    layout4 -> addWidget(radio_color_blue);

    text_edit = new QTextEdit("Hello World");

    QVBoxLayout *VLayout = new QVBoxLayout(this);
    VLayout -> addLayout(layout1);
    VLayout -> addLayout(layout2);
    VLayout -> addLayout(layout3);
    VLayout -> addLayout(layout4);
    VLayout -> addWidget(text_edit);

    setLayout(VLayout);

}

void Widget::on_btn_text_left_clicked() {
    text_edit -> setAlignment(Qt::AlignLeft);
}
void Widget::on_btn_text_center_clicked() {
    text_edit -> setAlignment(Qt::AlignCenter);
}

void Widget::on_btn_text_right_clicked() {
    text_edit -> setAlignment(Qt::AlignRight);
}

void Widget::on_btn_text_bold_clicked(bool checked) {
    QFont font = text_edit -> font();
    font.setBold(checked);
    text_edit -> setFont(font);
}

void Widget::on_btn_text_italic_clicked(bool checked) {
    QFont font = text_edit -> font();
    font.setItalic(checked);
    text_edit -> setFont(font);
}

void Widget::on_btn_text_underline_clicked(bool checked) {
    QFont font = text_edit -> font();
    font.setUnderline(checked);
    text_edit -> setFont(font);
}

void Widget::on_check_btn_readonly_clicked() {
    text_edit -> setReadOnly(check_btn_readonly -> isChecked());
}

void Widget::on_check_btn_enabled_clicked() {
    text_edit -> setEnabled(check_btn_enabled -> isChecked());
}

void Widget::on_check_btn_clear_clicked() {
    if(check_btn_clear -> isChecked()) {
        text_edit -> clear();
    }
}

void Widget::on_radio_color_black_clicked() {
//    QPalette palette = text_edit -> palette();
//    palette.setColor(QPalette::Text, Qt::black);
//    text_edit -> setPalette(palette);
      text_edit ->setTextColor(Qt::black);
}

void Widget::on_radio_color_red_clicked() {
//    QPalette palette = text_edit -> palette();
//    palette.setColor(QPalette::Text, Qt::red);
//    text_edit -> setPalette(palette);
      text_edit ->setTextColor(Qt::red);
}

void Widget::on_radio_color_blue_clicked() {
//   QPalette palette = text_edit -> palette();
//   palette.setColor(QPalette::Text, Qt::blue);
//   text_edit -> setPalette(palette);
     text_edit ->setTextColor(Qt::blue);
}
