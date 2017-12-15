#include "paydialog.h"
#include "ui_paydialog.h"
#include "header.h"


/*存放客户端发过来的数据*/
QString sr_client;
string s_client;
QTcpSocket socket;


/*SOCKET 服务器端*/
PayDialog::PayDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PayDialog)
{
    ui->setupUi(this);
    
    // 建立服务器端并监听
    QTcpServer* server = new QTcpServer();
    server->listen(QHostAddress::Any, 6666);
    
    // 连接信号槽
    connect(server, &QTcpServer::newConnection, this, &PayDialog::server_New_Connect);  
    
    
    
    
    
}


PayDialog::~PayDialog()
{
    delete ui;
}


/*关闭*/
void PayDialog::on_pushButton_clicked()
{
    this->close();
}


/*检验有没有客户连接*/
void PayDialog::server_New_Connect()  
{  
    //获取客户端连接  
    socket = server->nextPendingConnection(); 
    QObject::connect(socket, &QTcpSocket::readyRead, this, &PayDialog::socket_Read_Data); 
}  


/*读取缓冲区*/
void PayDialog::socket_Read_Data()  
{  
    QByteArray buffer;  
    
    //读取缓冲区数据  
    buffer = socket->readAll();  
    if(!buffer.isEmpty())  
        {  
            sr_client = tr(buffer);  
            s_client = sr_client.toStdString();
        }  
}  
