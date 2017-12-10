#ifndef PLATFORMDIALOG_H
#define PLATFORMDIALOG_H

#include <QDialog>

namespace Ui {
class PlatformDialog;
}

class PlatformDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PlatformDialog(QWidget *parent = 0);
    ~PlatformDialog();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::PlatformDialog *ui;
};

#endif // PLATFORMDIALOG_H
