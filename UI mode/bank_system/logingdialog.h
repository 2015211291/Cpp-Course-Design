#ifndef LOGINGDIALOG_H
#define LOGINGDIALOG_H

#include <QDialog>

namespace Ui {
class LogingDialog;
}

class LogingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LogingDialog(QWidget *parent = 0);
    ~LogingDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::LogingDialog *ui;
};

#endif // LOGINGDIALOG_H
