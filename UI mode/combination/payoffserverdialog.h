#ifndef PAYOFFSERVERDIALOG_H
#define PAYOFFSERVERDIALOG_H

#include <QDialog>
#include "header2.h"

namespace Ui {
class PayOffServerDialog;
}

class PayOffServerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PayOffServerDialog(QWidget *parent = 0);
    ~PayOffServerDialog();

private slots:
    void on_pushButton_clicked();
    void socket_Read_Data();
    void server_New_Connect();

private:
    Ui::PayOffServerDialog *ui;

    /*存放客户端发过来的数据*/
    QString sr_client;
    string s_client;
    QTcpSocket* socket;
    QTcpServer* server;
};

#endif // PAYOFFSERVERDIALOG_H
