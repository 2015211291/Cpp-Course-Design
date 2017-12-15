#ifndef ENROLLDIALOG_H
#define ENROLLDIALOG_H

#include <QDialog>

namespace Ui {
class EnrollDialog;
}

class EnrollDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EnrollDialog(QWidget *parent = 0);
    ~EnrollDialog();

private slots:

    void on_pushButton_2_clicked();

private:
    Ui::EnrollDialog *ui;
};

#endif // ENROLLDIALOG_H
