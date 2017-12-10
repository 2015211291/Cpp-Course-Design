#ifndef BOOKSHOWDIALOG_H
#define BOOKSHOWDIALOG_H

#include <QDialog>

namespace Ui {
class BookShowDialog;
}

class BookShowDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BookShowDialog(QWidget *parent = 0);
    ~BookShowDialog();
    void output();// 输出表格

private slots:
    void Buy();

    void on_pushButton_clicked();

private:
    Ui::BookShowDialog *ui;
};

#endif // BOOKSHOWDIALOG_H
