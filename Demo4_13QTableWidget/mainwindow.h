#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QLabel;
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    enum FieldColNum {colName = 0, colSex, colBirth, colNation, colScore, colParty};
    enum CellType {ctName = 1000, ctSex, ctBirth, ctNation, ctParty, ctScore};
    QLabel *labCellIndex;
    QLabel *labCellType;
    QLabel *labStuId;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_setHeader_clicked();

    void on_btnSetRow_clicked();

    void on_btnIniData_clicked();

    void on_btnInsertRow_clicked();

    void on_btnAddRow_clicked();

    void on_btnDelCurRow_clicked();

    void on_btnAutoHeight_clicked();

    void on_btnAutoWidth_clicked();

    void on_btnReadToEdit_clicked();

    void on_chkBoxTabEditable_clicked(bool checked);

    void on_chkBoxRowColor_clicked(bool checked);

    void on_chkBoxHeaderH_clicked(bool checked);

    void on_chkBoxHeaderV_clicked(bool checked);

    void on_rBtnSelectRow_clicked();

    void on_rBtnSelectItem_clicked();

    void on_tableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);

private:
    Ui::MainWindow *ui;

private:
    void createItemRow(int rowNo, QString name, QString sex, QDate birth, QString nation, bool isPM, int score);
};
#endif // MAINWINDOW_H
