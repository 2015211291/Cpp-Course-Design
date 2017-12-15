#include "bindingcarddialog.h"
#include "ui_bindingcarddialog.h"
#include "header2.h"
#include "bindserverdialog.h"


/*绑定银行卡界面*/
BindingCardDialog::BindingCardDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BindingCardDialog)
{
    ui->setupUi(this);
    ui->lineEdit->setFocus();
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);

    // 建立通信
    client = new QTcpSocket(this);
    client->connectToHost(QHostAddress("127.0.0.1"), 6666);

    // 检验连接超时就报警
    if(!client->waitForConnected(30000))
    {
        QMessageBox::information(this, tr("提示对话框"), tr("连接超时！"), QMessageBox::Ok);
        return;
    }

    // 连接槽函数
    QObject::connect(client, &QTcpSocket::readyRead, this, &BindingCardDialog::socket_Read_Data);
}


BindingCardDialog::~BindingCardDialog()
{
    delete ui;
    delete client;

    // 断开连接
    client->disconnectFromHost();
}


/*确定输入*/
void BindingCardDialog::on_pushButton_2_clicked()
{
    QString sr;
    string card_index;
    string password;
    string transmission;

    // 获得卡号
    sr = ui->lineEdit->text();
    card_index = sr.toStdString();
    
    // 获得密码
    sr = ui->lineEdit_2->text();
    password = sr.toStdString();
    
    // 传送银行卡号和密码，格式：#卡号，密码
    transmission = "#" + card_index + "," + password;
    client->write(transmission.c_str());

}


/*读缓冲区发过来的信息*/
void BindingCardDialog::socket_Read_Data()  
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
            // 卡号不存在
            case 0:
                QMessageBox::information(this, tr("提示对话框"), tr("卡号不存在！"), QMessageBox::Ok);
                this->close();
            break;

            // 绑定成功
            case 1:
                 QMessageBox::information(this, tr("提示对话框"), tr("绑定成功！"), QMessageBox::Ok);
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


/*退出*/
void BindingCardDialog::on_pushButton_1_clicked()
{
    this->close();
}
