#ifndef SHOWRECORDDIALOG_H
#define SHOWRECORDDIALOG_H

#include <QDialog>

namespace Ui {
class ShowRecordDialog;
}

class ShowRecordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ShowRecordDialog(QWidget *parent = 0);
    ~ShowRecordDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ShowRecordDialog *ui;
};

#endif // SHOWRECORDDIALOG_H
