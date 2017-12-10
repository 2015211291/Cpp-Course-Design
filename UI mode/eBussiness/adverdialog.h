#ifndef ADVERDIALOG_H
#define ADVERDIALOG_H

#include <QDialog>

namespace Ui {
class AdverDialog;
}

class AdverDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdverDialog(QWidget *parent = 0);
    ~AdverDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AdverDialog *ui;
};

#endif // ADVERDIALOG_H
