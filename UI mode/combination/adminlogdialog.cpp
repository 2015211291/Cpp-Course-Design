#include "adminlogdialog.h"
#include "ui_adminlogdialog.h"
#include "header2.h"
#include "admidialog.h"


/*管理员登录界面*/
AdminLogDialog::AdminLogDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminLogDialog)
{
    ui->setupUi(this);
    ui->lineEdit->setFocus();
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
}


AdminLogDialog::~AdminLogDialog()
{
    delete ui;
}


/*退出*/
void AdminLogDialog::on_pushButton_4_clicked()
{
    this->close();
}


/*登录*/
void AdminLogDialog::on_pushButton_3_clicked()
{
    QString sr;
    string s_index, s_password;

    // 获取用户名
    sr = this->ui->lineEdit->text();
    s_index = sr.toStdString();

    // 获取密码
    sr = this->ui->lineEdit_2->text();
    s_password = sr.toStdString();

    // 用户存在
    if(eBuss.find_admi(s_index, 0))
    {
        if(s_password == eBuss.get_admi_password())// 验证密码正确
        {
            AdmiDialog admin;
            this->close();
            admin.show();
            admin.exec();
        }
        else// 密码错误
        {
             QMessageBox::information(this, tr("提示对话框"), tr("密码错误！"), QMessageBox::Ok);
        }
    }
    // 用户不存在
    else
    {
         QMessageBox::information(this, tr("提示对话框"), tr("该用户不存在！"), QMessageBox::Ok);
    }
}
