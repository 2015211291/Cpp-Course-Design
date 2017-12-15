#ifndef PAYOFFDIALOG_H
#define PAYOFFDIALOG_H

#include <QDialog>
#include "header2.h"

namespace Ui {
class PayOffDialog;
}

class PayOffDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PayOffDialog(QWidget *parent = 0);
    ~PayOffDialog();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void socket_Read_Data();

private:
    Ui::PayOffDialog *ui;
    double total_price;

    /*存放服务端发过来的数据*/
    QString sr_server;
    string s_server;
    QTcpSocket* client;

    /*存放已绑定银行卡信息*/
    string* bind_card;
    int bindcard_num;
};

#endif // PAYOFFDIALOG_H
