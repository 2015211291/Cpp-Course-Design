#ifndef ADMIDIALOG_H
#define ADMIDIALOG_H

#include <QDialog>

namespace Ui {
class AdmiDialog;
}

class AdmiDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdmiDialog(QWidget *parent = 0);
    ~AdmiDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::AdmiDialog *ui;
};

#endif // ADMIDIALOG_H
