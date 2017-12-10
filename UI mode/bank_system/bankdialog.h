#ifndef BANKDIALOG_H
#define BANKDIALOG_H

#include <QDialog>

namespace Ui {
class BankDialog;
}

class BankDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BankDialog(QWidget *parent = 0);
    ~BankDialog();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::BankDialog *ui;
};

#endif // BANKDIALOG_H
