#include "enrolldialog.h"
#include "ui_enrolldialog.h"
#include "header.h"


/*注册窗口*/
/*构造函数*/
EnrollDialog::EnrollDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EnrollDialog)
{
    /*读取银行名称到数组中，并添加到下拉框里*/
    QString qs_temp;
    ui->setupUi(this);
    for(int i=0; i<bank_num; i++)
    {
        qs_temp = QString::fromStdString(bank[i]);
        ui->comboBox->addItem(qs_temp);
    }
}


/*析构函数*/
EnrollDialog::~EnrollDialog()
{
    delete ui;
}


/*"确定"按钮*/
void EnrollDialog::on_pushButton_2_clicked()
{
    int index;
    QString sr;
    string s;
    int flag = 1;
    int ID_flag = 1;// 判断身份证号格式是否正确
    int ID_repeat = 0;// 判断身份证号是否重复

    // 分配银行卡号
    bank_card.give_index();

    // 银行名称
    index = this->ui->comboBox->currentIndex();
    bank_card.modify_bank_name(bank[index]);

    // 姓名
    sr = this->ui->lineEdit->text();
    s = sr.toStdString();
    if(s.empty())
        flag = 0;
    bank_card.modify_holder_name(s);

    // 身份证号
    sr = this->ui->lineEdit_2->text();
    s = sr.toStdString();
    if(s.empty())
        flag = 0;
    if((s.length()!=ID_digits) || (!bank_card.judge_int(s)) )// 身份证号是否合法
    {
        ID_flag = 0;
    }
    else
    {
        if(bank_card.find_user(s, 4, 0))// 身份证号是否重复
            ID_repeat = 1;
        else
            bank_card.modify_ID(s);
    }

    // 手机号
    sr = this->ui->lineEdit_3->text();
    s = sr.toStdString();
    if(s.empty())
        flag = 0;
    bank_card.modify_telephone(s);

    // 密码
    sr = this->ui->lineEdit_4->text();
    s = sr.toStdString();
    if(s.empty())
        flag = 0;
    bank_card.modify_password(s);



    // 提示注册成功或者错误警告
    if(!flag)
        QMessageBox::information(this, tr("提示对话框"), tr("您还有没填的信息！请补充完整。"), QMessageBox::Ok);
    else
    {
        if(!ID_flag)// 身份证号格式不合法
             QMessageBox::information(this, tr("提示对话框"), tr("身份证号不合法，请重新输入！"), QMessageBox::Ok);
        else
        {
            if(ID_repeat)// 身份证号重复
                QMessageBox::information(this, tr("提示对话框"), tr("该身份证号已被注册，请重新输入！"), QMessageBox::Ok);
            else
            {
                s = "注册成功!  您的卡号： " + bank_card.get_index();
                int ret = QMessageBox::information(this, tr("提示对话框"), tr(s.c_str()), QMessageBox::Ok);

                // 将用户信息写入文件
                bank_card.write();

                // 记录操作日志
                bank_card.write_record(0, 0, "0");

                // 关闭当前页面
                this->accept();
            }
        }
    }



}
