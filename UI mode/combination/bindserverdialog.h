#ifndef BINDSERVERDIALOG_H
#define BINDSERVERDIALOG_H

#include <QDialog>
#include "header2.h"

namespace Ui {
class BindServerDialog;
}

class BindServerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BindServerDialog(QWidget *parent = 0);
    ~BindServerDialog();

private slots:
    void on_pushButton_clicked();
    void server_New_Connect();
    void socket_Read_Data();
    
private:
    Ui::BindServerDialog *ui;

    /*存放客户端发过来的数据*/
    QString sr_client;
    string s_client;
    QTcpSocket* socket;
    QTcpServer* server;

};

#endif // BINDSERVERDIALOG_H
