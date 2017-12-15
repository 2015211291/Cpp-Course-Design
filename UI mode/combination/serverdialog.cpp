#include "serverdialog.h"
#include "ui_serverdialog.h"


/*服务端*/
ServerDialog::ServerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ServerDialog)
{
    ui->setupUi(this);

    // 建立服务器端并监听
   server_i = new QTcpServer();
   server_i->listen(QHostAddress::Any, 6666);

   // 连接信号槽,检测新的连接
   connect(server_i, &QTcpServer::newConnection, this, &ServerDialog::server_New_Connect);

}

ServerDialog::~ServerDialog()
{
    delete ui;
    delete server_i;
}


/*连接*/
void ServerDialog::server_New_Connect()
{
    //获取客户端连接
    socket = server_i->nextPendingConnection();
    QObject::connect(socket, &QTcpSocket::readyRead, this, &ServerDialog::socket_Read_Data);
}


/*读取缓冲区*/
void ServerDialog::socket_Read_Data()
{
    QByteArray buffer;
    int index;
    int index_2;
    string card;
    string card_password;
    string pay_sum;

    //读取缓冲区数据
    buffer = socket->readAll();
    if(!buffer.isEmpty())
    {
        sr_client = QString(buffer);
        s_client = sr_client.toStdString();

        // 绑定银行卡
        if(s_client[0] == '#')//传输格式：#卡号，密码
        {
            // 提取卡号和密码
            index = find_in_string(',', s_client);
            card = s_client.substr(1, index-1);
            card_password = s_client.substr(index+1);

            //卡号存在
            if(bank_card.find_user(card, 0, 1))
            {
                // 校验密码正确
                if(bank_card.get_password() == card_password)
                {
                    socket->write("1");// 回送1，代表绑定成功

                    // 写入文件记录用户名和银行卡号
                    ofstream f("bindcard.txt", ios::app);
                    f << eBuss.get_user_index() << endl;
                    f << card << endl;
                    f.close();
                }
                // 密码错误
                else
                {
                    socket->write("2");// 回送2，代表密码错误
                }
            }
            // 卡号不存在
            else
            {
                socket->write("0");// 回送0，代表卡号不存在
            }
        }

        // 支付,传输格式：@卡号，密码，金额
        else
        {
            // 提取卡号、密码和金额
            index = find_in_string(',', s_client);
            card = s_client.substr(1, index-1);
            index_2 = find_in_string(',', s_client.substr(index+1));
            card_password = s_client.substr(index+1, index_2);
            pay_sum = s_client.substr(index+1+index_2+1);
            cout << "pay_sum: " << pay_sum << "  length: " << pay_sum.length() << endl;

            //卡号存在
            if(bank_card.find_user(card, 0, 1))
            {
                // 校验密码正确
                if(bank_card.get_password() == card_password)
                {
                    // 检验余额是否足够
                    double balance = atof(bank_card.get_sum().c_str());
                    double total_price = atof(pay_sum.c_str());
                    cout << "balance: " << balance << endl;

                    if(balance >= total_price)// 余额足够，返回1，并扣钱
                    {
                        socket->write("1");
                        bank_card.modify_sum(to_string(balance - total_price));
                        bank_card.update();
                        bank_card.write_record(6, balance - total_price, "0");
                    }
                    else// 余额不够，返回0
                    {
                        socket->write("0");
                    }
               }
               // 密码错误,返回2
               else
                {
                    socket->write("2");
                }
            }

        }
    }
}

