#include "log_in_dialog.h"
#include "ui_log_in_dialog.h"
#include "header2.h"
#include "userdialog.h"
#include "adverdialog.h"


/*登录界面*/
log_in_Dialog::log_in_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::log_in_Dialog)
{
    ui->setupUi(this);
    this->ui->lineEdit->setFocus();
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
}


log_in_Dialog::~log_in_Dialog()
{
    delete ui;
}


/*退出按钮*/
void log_in_Dialog::on_pushButton_4_clicked()
{
    this->close();
}


/*登录按钮*/
void log_in_Dialog::on_pushButton_3_clicked()
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
    if(eBuss.find_user(s_index, 0))
    {
        if(s_password == eBuss.get_user_password())// 验证密码正确
        {
            AdverDialog adver;
            this->close();
            adver.exec();
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
