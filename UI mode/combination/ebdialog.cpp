#include "ebdialog.h"
#include "ui_ebdialog.h"
#include "header2.h"


/*电商平台主界面*/
eBDialog::eBDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::eBDialog)
{
    ui->setupUi(this);
    this->ui->lineEdit->setFocus();
}


eBDialog::~eBDialog()
{
    delete ui;
}


/*退出*/
void eBDialog::on_pushButton_4_clicked()
{
    this->close();
}


/*确定*/
void eBDialog::on_pushButton_3_clicked()
{
    int flag = 1;
    int user_flag = 0;
    QString sr;
    string s;


    // 获取用户名
    sr = this->ui->lineEdit->text();
    s = sr.toStdString();
    if(eBuss.find_user(s, 0))
        user_flag = 1;
    if(s.empty())
        flag = 0;
    eBuss.modify_user_index(s);

    // 获取密码
    sr = this->ui->lineEdit_2->text();
    s = sr.toStdString();
    if(s.empty())
        flag = 0;
    eBuss.modify_user_password(s);

    // 提醒注册成功或报错处理
    if(flag && !user_flag)
    {
        // 将信息写入文件
        fstream f_user("euser_information.txt", ios_base::out | ios_base::app);

        f_user << eBuss.get_user_index() << endl;
        f_user << eBuss.get_user_password() << endl;

        f_user.close();

        // 注册成功
        int ret = QMessageBox::information(this, tr("提示对话框"), tr("注册成功！"), QMessageBox::Ok);

        // 关闭当前页面
        this->close();
    }
    else
    {
        if(user_flag)
            QMessageBox::information(this, tr("提示对话框"), tr("该用户名已被注册！"), QMessageBox::Ok);
        else
            QMessageBox::information(this, tr("提示对话框"), tr("您还有内容没有填写，请填写完整！"), QMessageBox::Ok);
    }

}
