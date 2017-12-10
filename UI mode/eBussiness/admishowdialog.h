#ifndef ADMISHOWDIALOG_H
#define ADMISHOWDIALOG_H

#include <QDialog>

namespace Ui {
class AdmiShowDialog;
}

class AdmiShowDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdmiShowDialog(QWidget *parent = 0);
    ~AdmiShowDialog();
    void output();// 输出表格

private slots:
    void Delete();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::AdmiShowDialog *ui;
};

#endif // ADMISHOWDIALOG_H
