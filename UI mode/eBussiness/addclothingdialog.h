#ifndef ADDCLOTHINGDIALOG_H
#define ADDCLOTHINGDIALOG_H

#include <QDialog>

namespace Ui {
class AddClothingDialog;
}

class AddClothingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddClothingDialog(QWidget *parent = 0);
    ~AddClothingDialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::AddClothingDialog *ui;
};

#endif // ADDCLOTHINGDIALOG_H
