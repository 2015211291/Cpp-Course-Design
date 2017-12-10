#ifndef EBDIALOG_H
#define EBDIALOG_H

#include <QDialog>

namespace Ui {
class eBDialog;
}

class eBDialog : public QDialog
{
    Q_OBJECT

public:
    explicit eBDialog(QWidget *parent = 0);
    ~eBDialog();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::eBDialog *ui;
};

#endif // EBDIALOG_H
