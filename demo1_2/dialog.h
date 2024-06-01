#ifndef DIALOG_H
#define DIALOG_H

#include<QDialog>
#include<QCheckBox>
#include<QRadioButton>
#include<QPushButton>
#include<QPlainTextEdit>


QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QCheckBox *chkBoxUnder;
    QCheckBox *chkBoxItalic;
    QCheckBox *chkBoxBold;
    QRadioButton *radioBlack;
    QRadioButton *radioBlue;
    QRadioButton *radioRed;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QPushButton *btnClose;
    QPlainTextEdit *txtEdit;
    void iniUI();
    void iniSignalSlots();

private slots:
    void do_chkBoxUnder(bool checked);
    void do_chkBoxItalic(bool checked);
    void do_chkBoxBold(bool checkded);
    void do_setFontColor();
};
#endif // DIALOG_H
