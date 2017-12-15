#include "bankdialog.h"
#include "ui_bankdialog.h"
#include "bank_system.h"
#include "enrolldialog.h"
#include "header.h"
#include "logindialog.h"
#include "logingdialog.h"
using namespace std;

///*存放银行名称的数组*/
//string bank[bank_num];

///*银行卡类的定义*/
//Card bank_card;


/*主界面的构造函数*/
BankDialog::BankDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BankDialog)
{
    ui->setupUi(this);
}


/*主界面的析构函数*/
BankDialog::~BankDialog()
{
    delete ui;
}


/*"退出"按钮*/
void BankDialog::on_pushButton_3_clicked()
{
    this -> close();
}


/*"注册"按钮*/
void BankDialog::on_pushButton_clicked()
{
    EnrollDialog enroll(this);
    this->hide();
    enroll.show();
    enroll.exec();
    this->show();
}


/*"登录"按钮*/
void BankDialog::on_pushButton_2_clicked()
{
    LogingDialog loging(this);
    this->hide();
    loging.show();
    loging.exec();
    this->show();
}

