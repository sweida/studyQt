#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//3行解决中文乱码
#ifdef WIN32
#pragma execution_character_set("utf-8")
#endif

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionCar_triggered();

    void on_actionCalc_triggered();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
