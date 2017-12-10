#include "logindialog.h"
#include "ui_logindialog.h"
#include "show_card_dialog.h"
#include "header.h"
#include "recorddialog.h"


/*用户界面构造函数*/
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}


/*用户界面析构函数*/
LoginDialog::~LoginDialog()
{
    delete ui;
}


/*退出按钮*/
void LoginDialog::on_pushButton_clicked()
{
    this->accept();
}


/*存款按钮*/
void LoginDialog::on_pushButton_2_clicked()
{
    bool ok;

    // 获得输入
    QString s_save = QInputDialog::getText(this, tr("输入存款金额对话框"),
     tr("请输入存款金额："), QLineEdit::Normal, tr("1000"), &ok );
    string s = s_save.toStdString();

    if(ok)
    {
        // 修改变量的值，并更新文件
        int temp1 = atoi(s.c_str());// 存款值
        int temp2 = atoi(bank_card.get_sum().c_str());// 卡中金额
        temp2 += temp1;

        bank_card.modify_sum(to_string(temp2));// 修改变量

        bank_card.update();// 更新文件
        bank_card.write_record(1, temp1, "0");// 写入记录文件

        // 提示存款成功
        int ret = QMessageBox::information(this, tr("提示对话框"), tr("存款成功"), QMessageBox::Ok);
    }
}


/*取款按钮*/
void LoginDialog::on_pushButton_3_clicked()
{
    bool ok;

    // 获得输入
    QString s_draw = QInputDialog::getText(this, tr("输入取款金额对话框"),
     tr("请输入取款金额："), QLineEdit::Normal, tr("1000"), &ok );
    string s = s_draw.toStdString();

    if(ok)
    {
        // 修改变量的值，并更新文件
        int temp1 = atoi(s.c_str());// 取款值
        int temp2 = atoi(bank_card.get_sum().c_str());// 卡中金额
        temp2 -= temp1;

        if(temp2 > 0)// 剩余金额大于0
        {
            bank_card.modify_sum(to_string(temp2));// 修改变量

            bank_card.update();// 更新文件
            bank_card.write_record(2, temp1, "0");// 写入记录文件

            // 提示取款成功
            QMessageBox::information(this, tr("提示对话框"), tr("取款成功"), QMessageBox::Ok);
        }
        else
            QMessageBox::warning(this, tr("警告对话框"), tr("取款金额超过余额！"), QMessageBox::Abort);
    }
}


/*修改密码*/
void LoginDialog::on_pushButton_4_clicked()
{
    bool ok;

    // 验证原密码
    QString s_pw = QInputDialog::getText(this, tr("校验密码对话框"),
     tr("请输入原密码："), QLineEdit::Normal, tr("1"), &ok );
    string s = s_pw.toStdString();

    if(ok && (s == bank_card.get_password()))
    {

        // 获得输入
        s_pw = QInputDialog::getText(this, tr("输入新密码对话框"),
         tr("请输入新密码："), QLineEdit::Normal, tr("111"), &ok );
        s = s_pw.toStdString();

        if(ok)
        {
            // 修改密码，并更新文件
            bank_card.modify_password(s);
            bank_card.write_record(3, 0, "0");
            bank_card.update();

            // 提示修改成功
            int ret = QMessageBox::information(this, tr("提示对话框"), tr("修改成功"), QMessageBox::Ok);
        }
    }
    else
        if(s != bank_card.get_password())
            QMessageBox::warning(this, tr("警告对话框"), tr("原密码错误，您没有权限修改！"), QMessageBox::Abort);
}


/*显示个人信息*/
void LoginDialog::on_pushButton_5_clicked()
{
    show_card_Dialog show_info(this);
    show_info.exec();
}


/*查询操作记录*/
void LoginDialog::on_pushButton_6_clicked()
{
   RecordDialog record_dialog(this);
   record_dialog.exec();
}


/*转账*/
void LoginDialog::on_pushButton_7_clicked()
{
    bool ok;
    Card card_temp;
    QString s_pw;
    string s;

    // 获得卡号输入
    s_pw = QInputDialog::getText(this, tr("输入卡号对话框"),
     tr("请输入对方的卡号："), QLineEdit::Normal, tr("600000000"), &ok );
    s = s_pw.toStdString();

    if(ok)
    {
        if(s == bank_card.get_index())
            QMessageBox::information(this, tr("提示对话框"), tr("请不要输入自己的卡号！"), QMessageBox::Ok);
        else
        {
            if(!card_temp.find_user(s, 0, 1))// 目的账号不存在
            {
                QMessageBox::information(this, tr("提示对话框"), tr("用户不存在！"), QMessageBox::Ok);
            }
            else
            {
                // 获得转账金额输入
                s_pw = QInputDialog::getText(this, tr("输入转账金额对话框"),
                 tr("请输入转账金额："), QLineEdit::Normal, tr("1000"), &ok );
                s = s_pw.toStdString();

                if(ok)
                {
                    //转化为整数，并检验是否转账金额大于余额
                    int temp1 = atoi(s.c_str());// 转账值
                    int temp2 = atoi(bank_card.get_sum().c_str());// 卡中金额
                    int temp3 = atoi(card_temp.get_sum().c_str());// 目标卡的余额
                    temp2 -= temp1;
                    temp3 += temp1;

                    if(temp2 < 0)// 转账金额大于余额
                        QMessageBox::information(this, tr("提示对话框"), tr("余额不足！"), QMessageBox::Ok);
                    else
                    {
                        // 转账方
                        bank_card.modify_sum(to_string(temp2));// 修改变量
                        bank_card.update();// 更新文件
                        bank_card.write_record(4, temp1, card_temp.get_index());// 写入记录文件

                        // 接受转账方
                        card_temp.modify_sum(to_string(temp3));
                        card_temp.update();// 更新文件
                        card_temp.write_record(5, temp1, bank_card.get_index());// 写入记录文件

                    }
                }
            }
        }
    }
}
