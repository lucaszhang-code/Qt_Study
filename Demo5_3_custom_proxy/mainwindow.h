#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class TSpinkBoxDelegate;
class TComboBoxDelegate;
class TFloatSpinDelegate;
class QLabel;
class QStandardItemModel;
class QItemSelectionModel;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    TSpinkBoxDelegate *intSpinDelegate;
    TFloatSpinDelegate *floatSpinDelegate;
    TComboBoxDelegate *comboDelegate;
    const int FixedColumnCount = 6;
    QLabel *labCurFile;
    QLabel *labCellPos;
    QLabel *labCellText;

    QStandardItemModel *m_model;
    QItemSelectionModel *m_selection;

    void iniModelData(QStringList &aFileContent);
private slots:
    void do_currentChanged(const QModelIndex &current, const QModelIndex &previous);

    void on_actOpen_triggered();

    void on_actModelData_triggered();

    void on_actAppend_triggered();

    void on_actInsert_triggered();

    void on_actDelete_triggered();

    void on_actAlignLeft_triggered();

    void on_actAlignCenter_triggered();

    void on_actAlignRight_triggered();

    void on_actFontBold_triggered(bool checked);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
