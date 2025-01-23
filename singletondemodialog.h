#ifndef SINGLETONDEMODIALOG_H
#define SINGLETONDEMODIALOG_H

#include <QDialog>
#include "singletonsecond_dialog.h"
#include"ui_singletonsecond_dialog.h"
#include"logger.h"

namespace Ui {
class SingletonDemoDialog;
}

class SingletonDemoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SingletonDemoDialog(QWidget *parent = nullptr);
    ~SingletonDemoDialog();

private slots:
    void on_pushButton_Action1_clicked();

    void on_pushButton_GoToDialog2_clicked();

    void on_pushButton_Close_clicked();

private:
    Ui::SingletonDemoDialog *ui;
   SingletonSecond_Dialog secondDialog;
    Logger*logger;
};

#endif // SINGLETONDEMODIALOG_H
