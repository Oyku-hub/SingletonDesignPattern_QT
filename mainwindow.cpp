#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "singletondemodialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Singleton_btt_clicked()
{

    SingletonDemoDialog dialog;
    dialog.exec();



}

