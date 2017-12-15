#include "bindserverdialog.h"
#include "ui_bindserverdialog.h"
#include "header2.h"


/*绑定银行卡的服务端*/
BindServerDialog::BindServerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BindServerDialog)
{
    ui->setupUi(this);
    
    // 建立服务器端并监听
    server = new QTcpServer();
    server->listen(QHostAddress::Any, 6666);
    
    // 连接信号槽
    connect(server, &QTcpServer::newConnection, this, &BindServerDialog::server_New_Connect);

    // 读取缓冲区的数据
    while(s_client.empty()){}

    // 显示
    ui->textEdit->append(sr_client);

    // 在文件中查找，找到则读入，并回送1
    // 找不到回送0
    if(bank_card.find_user(s_client, 0, 1))
    {
        // 写入文件记录用户名和银行卡号
        ofstream f("bindcard.txt", ios::app);
        f << eBuss.get_admi_index() << endl;
        f << s_client << endl;
        f.close();

        s_client.clear();
        ui->textEdit_2->append("1");
        socket->write("1");
        while(s_client.empty()){}
        ui->textEdit->append(sr_client);

        // 检验密码
        if(s_client == bank_card.get_password())
        {
            ui->textEdit_2->append("1");
            socket->write("1");
            s_client.clear();
        }
        else
        {
            ui->textEdit_2->append("0");
            socket->write("0");
            s_client.clear();
        }
    }
    else
    {
        s_client.clear();
        ui->textEdit_2->append("0");
        socket->write("0");
    }
    
    server->close();
}


BindServerDialog::~BindServerDialog()
{
    delete ui;
}


/*关闭*/
void BindServerDialog::on_pushButton_clicked()
{
    this->close();
}


/*检验有没有客户连接*/
void BindServerDialog::server_New_Connect()  
{  
    //获取客户端连接  
    socket = server->nextPendingConnection(); 
    QObject::connect(socket, &QTcpSocket::readyRead, this, &BindServerDialog::socket_Read_Data);
}  


/*读取缓冲区*/
void BindServerDialog::socket_Read_Data()  
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

