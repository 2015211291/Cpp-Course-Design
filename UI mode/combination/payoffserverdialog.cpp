#include "payoffserverdialog.h"
#include "ui_payoffserverdialog.h"
#include "header2.h"


/*支付服务端*/
PayOffServerDialog::PayOffServerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PayOffServerDialog)
{
    ui->setupUi(this);

    // 建立服务器端并监听
    server = new QTcpServer();
    server->listen(QHostAddress::Any, 6666);

    // 连接信号槽
    connect(server, &QTcpServer::newConnection, this, &PayOffServerDialog::server_New_Connect);

    // 读取缓冲区的数据
    while(s_client.empty()){}

    // 显示
    ui->textEdit->append(sr_client);

    //读取该卡信息并返回1
    if(bank_card.find_user(s_client, 0, 1))
    {
        s_client.clear();
        ui->textEdit_2->append("1");
        socket->write("1");
        while(s_client.empty()){}
        ui->textEdit->append(sr_client);

        // 检验余额是否足够
        double balance = atof(bank_card.get_sum().c_str());
        double total_price = atof(s_client.c_str());

        if(balance >= total_price)
        {
            ui->textEdit_2->append("1");
            socket->write("1");
            s_client.clear();

            bank_card.modify_sum(to_string(balance - total_price));
            bank_card.update();
        }
        else
        {
            ui->textEdit_2->append("0");
            socket->write("0");
            s_client.clear();
        }
    }

    server->close();
}

PayOffServerDialog::~PayOffServerDialog()
{
    delete ui;
}


/*退出*/
void PayOffServerDialog::on_pushButton_clicked()
{
    this->close();
}


/*检验有没有客户连接*/
void PayOffServerDialog::server_New_Connect()
{
    //获取客户端连接
    socket = server->nextPendingConnection();
    QObject::connect(socket, &QTcpSocket::readyRead, this, &PayOffServerDialog::socket_Read_Data);
}


/*读取缓冲区*/
void PayOffServerDialog::socket_Read_Data()
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
