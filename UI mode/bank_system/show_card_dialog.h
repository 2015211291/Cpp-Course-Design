#ifndef SHOW_CARD_DIALOG_H
#define SHOW_CARD_DIALOG_H

#include <QDialog>

namespace Ui {
class show_card_Dialog;
}

class show_card_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit show_card_Dialog(QWidget *parent = 0);
    ~show_card_Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::show_card_Dialog *ui;
};

#endif // SHOW_CARD_DIALOG_H
