#ifndef DEMO2_3_TESTEDITOR_WIDGET_H
#define DEMO2_3_TESTEDITOR_WIDGET_H
#include <QWidget>
#include <QPushButton>
#include <QCheckBox>
#include <QRadioButton>
#include <QTextEdit>


class Widget : public QWidget{
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    QPushButton* btn_text_left;
    QPushButton* btn_text_right;
    QPushButton* btn_text_center;
    QPushButton* btn_text_bold;
    QPushButton* btn_text_italic;
    QPushButton* btn_text_underline;
    QCheckBox* check_btn_readonly;
    QCheckBox* check_btn_enabled;
    QCheckBox* check_btn_clear;
    QRadioButton* radio_color_black;
    QRadioButton* radio_color_red;
    QRadioButton* radio_color_blue;
    QTextEdit* text_edit;
    void initUI();
    void slotConnect();

private slots:
    void on_btn_text_left_clicked();
    void on_btn_text_right_clicked();
    void on_btn_text_center_clicked();
    void on_btn_text_bold_clicked(bool checked);
    void on_btn_text_italic_clicked(bool checked);
    void on_btn_text_underline_clicked(bool checked);
    void on_check_btn_readonly_clicked();
    void on_check_btn_enabled_clicked();
    void on_check_btn_clear_clicked();
    void on_radio_color_black_clicked();
    void on_radio_color_red_clicked();
    void on_radio_color_blue_clicked();

};

#endif //DEMO2_3_TESTEDITOR_WIDGET_H
