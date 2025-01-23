#include "singletondemodialog.h"
#include "ui_singletondemodialog.h"

SingletonDemoDialog::SingletonDemoDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SingletonDemoDialog)
{
    ui->setupUi(this);
    logger=Logger::instance();
}

SingletonDemoDialog::~SingletonDemoDialog()
{
    delete ui;
}

void SingletonDemoDialog::on_pushButton_Action1_clicked()
{
    ui->listWidget->addItem("Action 1 cliked");
    logger->Log("Action 1");

}


void SingletonDemoDialog::on_pushButton_GoToDialog2_clicked()
{

    secondDialog.exec();
    ui->listWidget->addItem("Dialog 2 closed");
    logger->Log("Dialog 2 closed");

}


void SingletonDemoDialog::on_pushButton_Close_clicked()
{

    reject();
}

