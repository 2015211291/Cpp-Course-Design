#include "payoffdialog.h"
#include "ui_payoffdialog.h"
#include "header2.h"
#include "payoffserverdialog.h"


/*支付界面*/
PayOffDialog::PayOffDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PayOffDialog)
{
    ui->setupUi(this);
    ui->lineEdit->setFocusPolicy(Qt::NoFocus);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    bindcard_num = 0;

    // 输出订单总价
    /*订单总价*/
    total_price = eBuss.cal_all_price();
    cout << total_price << endl;
    ui->lineEdit->setText(QString::fromStdString(to_string(total_price)));

    // 查找已绑定的银行卡
    // 先统计银行卡数目，再读入
    string s_bc;
    fstream f("bindcard.txt");
    while(!f.eof())
    {
        f >> s_bc;
        if(s_bc == eBuss.get_user_index())
            bindcard_num++;
    }
    f.close();

    bind_card = new string[bindcard_num];
    f.open("bindcard.txt");
    int bindcard_count = 0;
    while(!f.eof())
    {
        f >> s_bc;
        if(s_bc == eBuss.get_user_index())
            f >> bind_card[bindcard_count++];
    }
    f.close();

    // 显示绑定的银行卡
    // 若没有绑定，则提示
    if(bind_card == 0)
         QMessageBox::information(this, tr("提示对话框"), tr("您还未绑定银行卡！"), QMessageBox::Ok);
    else
    {
        for(int i=0; i<bindcard_num; i++)
        {
            bank_card.find_user(bind_card[i], 0, 1);
            s_bc = bind_card[i] + " " + bank_card.get_bank_name();
            ui->comboBox->addItem(QString::fromStdString(s_bc));
        }
    }

    client = new QTcpSocket();

    // 连接信号槽
    QObject::connect(client, &QTcpSocket::readyRead, this, &PayOffDialog::socket_Read_Data);
}


PayOffDialog::~PayOffDialog()
{
    delete ui;
    delete [] bind_card;
    delete client;

    // 断开连接
    client->disconnectFromHost();
}


/*返回*/
void PayOffDialog::on_pushButton_2_clicked()
{
    this->close();
}


/*读缓冲区发过来的信息*/
void PayOffDialog::socket_Read_Data()
{
    QByteArray buffer;
    int index;

    //读取缓冲区数据
    buffer = client->readAll();
    if(!buffer.isEmpty())
    {
        sr_server = tr(buffer);
        s_server = sr_server.toStdString();
        index = atoi(s_server.c_str());

        switch(index)
        {
            // 余额不足
            case 0:
                QMessageBox::information(this, tr("提示对话框"), tr("余额不足！"), QMessageBox::Ok);
                this->close();
            break;

            // 支付成功
            case 1:
                 QMessageBox::information(this, tr("提示对话框"), tr("支付成功！"), QMessageBox::Ok);
                 eBuss.write_record();
                 eBuss.clean_order();
                 this->close();
            break;

            // 密码错误
            case 2:
                QMessageBox::information(this, tr("提示对话框"), tr("密码错误！"), QMessageBox::Ok);
                this->close();
            break;

            default:break;
        }
    }
}


/*支付*/
void PayOffDialog::on_pushButton_clicked()
{
    int index;
    string password;
    string transmission;

    // 获取银行卡代号
    index = ui->comboBox->currentIndex();

    // 获取密码
    password = ui->lineEdit_2->text().toStdString();

    // 建立通信
    client->connectToHost(QHostAddress("127.0.0.1"), 6666);

    // 检验连接超时就报警
    if(!client->waitForConnected(30000))
    {
        QMessageBox::information(this, tr("提示对话框"), tr("连接超时！"), QMessageBox::Ok);
        return;
    }

    // 传送信息，格式：@卡号，密码，金额
    transmission = "@" + bind_card[index] + "," + password + "," + to_string(total_price);
    client->write(transmission.c_str());
}
