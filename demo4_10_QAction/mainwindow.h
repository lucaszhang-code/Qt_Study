#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
QT_BEGIN_NAMESPACE
class QLabel;
class QProgressBar;
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actFile_New_triggered();

    void on_actFile_Open_triggered();

    void on_actFile_Save_triggered();

    void on_textEdit_copyAvailable(bool b);

    void on_textEdit_selectionChanged();

    void on_actFont_Bold_triggered(bool checked);

    void on_actFont_Italic_triggered(bool checked);

    void on_actFont_UnderLine_triggered(bool checked);

    void on_fontSize_changed(int fontSize);

    void on_font_Changed(const QFont &font);

private:
    Ui::MainWindow *ui;
    QLabel* labFile;
    QProgressBar* progressBar;
    QLabel* labInfo;
};
#endif // MAINWINDOW_H
