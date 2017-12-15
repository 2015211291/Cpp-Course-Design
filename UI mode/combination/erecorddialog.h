#ifndef ERECORDDIALOG_H
#define ERECORDDIALOG_H

#include <QDialog>

namespace Ui {
class eRecordDialog;
}

class eRecordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit eRecordDialog(QWidget *parent = 0);
    ~eRecordDialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::eRecordDialog *ui;
};

#endif // ERECORDDIALOG_H
