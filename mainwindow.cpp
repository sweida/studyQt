#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //    开始页面，车辆管理
//    on_actionCar_triggered();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionCar_triggered()
{
    //    切换到车辆管理页面
    ui->stackedWidget->setCurrentWidget(ui->car);
    ui->label->setText("车辆管理");
}

void MainWindow::on_actionCalc_triggered()
{
    //    切换到销售统计
    ui->stackedWidget->setCurrentWidget(ui->calc);
    ui->label->setText("销售统计");
}




