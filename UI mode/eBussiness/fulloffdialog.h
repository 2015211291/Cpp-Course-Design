#ifndef FULLOFFDIALOG_H
#define FULLOFFDIALOG_H

#include <QDialog>

namespace Ui {
class FullOffDialog;
}

class FullOffDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FullOffDialog(QWidget *parent = 0);
    ~FullOffDialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::FullOffDialog *ui;
};

#endif // FULLOFFDIALOG_H
