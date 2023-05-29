#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    bool isincol(int grid[9][9], int col, int num);
    bool isinrow(int grid[9][9], int row, int num);
    bool isinbox(int grid[9][9], int brow, int bcol, int num);
    bool findemptyslot(int grid[9][9], int row, int col);
    bool isvalid(int grid[9][9], int row, int col, int num);
    bool solve(int grid[9][9]);


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

