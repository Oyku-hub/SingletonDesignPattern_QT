#include "singletonsecond_dialog.h"
#include "ui_singletonsecond_dialog.h"

SingletonSecond_Dialog::SingletonSecond_Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SingletonSecond_Dialog)
{
    ui->setupUi(this);
    logger=Logger::instance();
}

SingletonSecond_Dialog::~SingletonSecond_Dialog()
{
    delete ui;
}

void SingletonSecond_Dialog::on_pushButton_Action2_clicked()
{
    qDebug()<<"Action 2 Button clicked";
    logger->Log("Action 2");
}


void SingletonSecond_Dialog::on_pushButton_Close_clicked()
{
    reject();
}

