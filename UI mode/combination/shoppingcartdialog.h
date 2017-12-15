#ifndef SHOPPINGCARTDIALOG_H
#define SHOPPINGCARTDIALOG_H

#include <QDialog>

namespace Ui {
class ShoppingCartDialog;
}

class ShoppingCartDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ShoppingCartDialog(QWidget *parent = 0);
    ~ShoppingCartDialog();
    void output();// 输出表格

private slots:
    void Delete();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ShoppingCartDialog *ui;
};

#endif // SHOPPINGCARTDIALOG_H
