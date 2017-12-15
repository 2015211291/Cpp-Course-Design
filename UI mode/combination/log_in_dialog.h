#ifndef LOG_IN_DIALOG_H
#define LOG_IN_DIALOG_H

#include <QDialog>

namespace Ui {
class log_in_Dialog;
}

class log_in_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit log_in_Dialog(QWidget *parent = 0);
    ~log_in_Dialog();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::log_in_Dialog *ui;
};

#endif // LOG_IN_DIALOG_H
