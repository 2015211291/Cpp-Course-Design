#ifndef CLOTHINGSHOWDIALOG_H
#define CLOTHINGSHOWDIALOG_H

#include <QDialog>

namespace Ui {
class ClothingShowDialog;
}

class ClothingShowDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ClothingShowDialog(QWidget *parent = 0);
    ~ClothingShowDialog();
    void output();// 输出表格

private slots:
    void Buy();

    void on_pushButton_clicked();

private:
    Ui::ClothingShowDialog *ui;
};

#endif // CLOTHINGSHOWDIALOG_H
