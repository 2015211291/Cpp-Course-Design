#ifndef ADMINLOGDIALOG_H
#define ADMINLOGDIALOG_H

#include <QDialog>

namespace Ui {
class AdminLogDialog;
}

class AdminLogDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminLogDialog(QWidget *parent = 0);
    ~AdminLogDialog();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::AdminLogDialog *ui;
};

#endif // ADMINLOGDIALOG_H
