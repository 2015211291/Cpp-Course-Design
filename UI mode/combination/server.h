#ifndef SERVER_H
#define SERVER_H
#include "header2.h"


class server
{
public:
    server();
    ~server();

private:
    QString sr_client;
    string s_client;
    QTcpSocket* socket;
    QTcpServer* server_i;

private slots:
    void server_New_Connect();
    void socket_Read_Data();
};

#endif // SERVER_H
