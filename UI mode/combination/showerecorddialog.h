#ifndef SHOWERECORDDIALOG_H
#define SHOWERECORDDIALOG_H

#include <QDialog>

namespace Ui {
class ShowErecordDialog;
}

class ShowErecordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ShowErecordDialog(QWidget *parent = 0);
    ~ShowErecordDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ShowErecordDialog *ui;
};

#endif // SHOWERECORDDIALOG_H
