#include "logingdialog.h"
#include "ui_logingdialog.h"
#include "header.h"
#include "logindialog.h"


/*登录界面*/
LogingDialog::LogingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogingDialog)
{
    ui->setupUi(this);
    this->ui->lineEdit_5->setFocus();
    ui->lineEdit_4->setEchoMode(QLineEdit::Password);
}


LogingDialog::~LogingDialog()
{
    delete ui;
}


/*登录按钮*/
void LogingDialog::on_pushButton_clicked()
{
    QString sr;
    string card_index;
    string password;

    // 获得卡号
    sr = this->ui->lineEdit_5->text();
    card_index = sr.toStdString();

    // 获得密码
    sr = this->ui->lineEdit_4->text();
    password = sr.toStdString();

    // 校验正确则进入用户界面
    if((bank_card.find_user(card_index, 0, 1)) && (password == bank_card.get_password()))
    {
        LoginDialog login(this);
        this->close();
        login.show();
        login.exec();
    }
    else
    {
        if(!(bank_card.find_user(card_index, 0, 1)))
            QMessageBox::warning(this, tr("警告对话框"), tr("用户不存在！"), QMessageBox::Abort);
        else
            QMessageBox::warning(this, tr("警告对话框"), tr("密码错误！"), QMessageBox::Abort);
    }
}


/*返回*/
void LogingDialog::on_pushButton_2_clicked()
{
    this->accept();
}
