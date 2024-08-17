#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
