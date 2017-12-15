#ifndef BINDINGCARDDIALOG_H
#define BINDINGCARDDIALOG_H

#include <QDialog>
#include "header2.h"


namespace Ui {
class BindingCardDialog;
}

class BindingCardDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BindingCardDialog(QWidget *parent = 0);
    ~BindingCardDialog();

private slots:
    void on_pushButton_2_clicked();
    void socket_Read_Data();   
    void on_pushButton_1_clicked();

private:
    Ui::BindingCardDialog *ui;
    /*存放服务端发过来的数据*/
    QString sr_server;
    string s_server;
    QTcpSocket* client;

};

#endif // BINDINGCARDDIALOG_H
