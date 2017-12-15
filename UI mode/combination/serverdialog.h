#ifndef SERVERDIALOG_H
#define SERVERDIALOG_H

#include <QDialog>
#include "header2.h"

namespace Ui {
class ServerDialog;
}

class ServerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ServerDialog(QWidget *parent = 0);
    ~ServerDialog();

private:
    Ui::ServerDialog *ui;
    QString sr_client;
    string s_client;
    QTcpSocket* socket;
    QTcpServer* server_i;

private slots:
    void server_New_Connect();
    void socket_Read_Data();

};

#endif // SERVERDIALOG_H
