#ifndef SINGLETONSECOND_DIALOG_H
#define SINGLETONSECOND_DIALOG_H
#include"logger.h"

#include <QDialog>

namespace Ui {
class SingletonSecond_Dialog;
}

class SingletonSecond_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit SingletonSecond_Dialog(QWidget *parent = nullptr);
    ~SingletonSecond_Dialog();

private slots:
    void on_pushButton_Action2_clicked();

    void on_pushButton_Close_clicked();

private:
    Ui::SingletonSecond_Dialog *ui;
    Logger*logger;
};

#endif // SINGLETONSECOND_DIALOG_H
