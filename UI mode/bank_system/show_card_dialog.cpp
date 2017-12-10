#include "show_card_dialog.h"
#include "ui_show_card_dialog.h"
#include "header.h"


/*银行卡个人信息界面*/
/*构造函数，向文本框输出当前变量的信息*/
show_card_Dialog::show_card_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::show_card_Dialog)
{
    ui->setupUi(this);

    // 银行名称
    this->ui->lineEdit_5->setText(QString::fromStdString(bank_card.get_bank_name()));
    this->ui->lineEdit_5->setFocusPolicy(Qt::NoFocus);// 不可被选中输入

    // 卡号
    this->ui->lineEdit_6->setText(QString::fromStdString(bank_card.get_index()));
    this->ui->lineEdit_6->setFocusPolicy(Qt::NoFocus);// 不可被选中输入

    // 姓名
    this->ui->lineEdit->setText(QString::fromStdString(bank_card.get_holder_name()));
    this->ui->lineEdit->setFocusPolicy(Qt::NoFocus);// 不可被选中输入

    // 身份证号
    this->ui->lineEdit_2->setText(QString::fromStdString(bank_card.get_ID()));
    this->ui->lineEdit_2->setFocusPolicy(Qt::NoFocus);// 不可被选中输入

    // 手机号
    this->ui->lineEdit_3->setText(QString::fromStdString(bank_card.get_telephone()));
    this->ui->lineEdit_3->setFocusPolicy(Qt::NoFocus);// 不可被选中输入

    // 余额
    this->ui->lineEdit_7->setText(QString::fromStdString(bank_card.get_sum()));
    this->ui->lineEdit_7->setFocusPolicy(Qt::NoFocus);// 不可被选中输入
}


show_card_Dialog::~show_card_Dialog()
{
    delete ui;
}


/*返回*/
void show_card_Dialog::on_pushButton_clicked()
{
    this->accept();
}
