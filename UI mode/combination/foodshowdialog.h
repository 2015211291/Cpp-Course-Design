#ifndef FOODSHOWDIALOG_H
#define FOODSHOWDIALOG_H

#include <QDialog>

namespace Ui {
class FoodShowDialog;
}

class FoodShowDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FoodShowDialog(QWidget *parent = 0);
    ~FoodShowDialog();
    void output();// 输出表格

private slots:
    void Buy();
    void on_pushButton_clicked();

private:
    Ui::FoodShowDialog *ui;


};

#endif // FOODSHOWDIALOG_H
