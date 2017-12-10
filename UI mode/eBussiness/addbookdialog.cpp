#include "addbookdialog.h"
#include "ui_addbookdialog.h"
#include "header2.h"


/*添加图书界面*/
AddBookDialog::AddBookDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBookDialog)
{
    ui->setupUi(this);
    ui->lineEdit->setFocus();
}


AddBookDialog::~AddBookDialog()
{
    delete ui;
}


/*返回*/
void AddBookDialog::on_pushButton_2_clicked()
{
    this->close();
}


/*完成输入*/
void AddBookDialog::on_pushButton_clicked()
{
    bool space_flag = false;
    bool int_flag = true;
    bool digits_flag = true;
    bool discount_flag = true;
    string name, num, price, discount,
            publication_date, author, press, description;
    QString sr;

    // 名称
    sr = ui->lineEdit->text();
    name = sr.toStdString();
    if(name.empty())
        space_flag = true;

    // 数量
    sr = ui->lineEdit_2->text();
    num = sr.toStdString();
    if(!judge_digits(num))
        int_flag = false;
    if(num.empty())
        space_flag = true;

    // 单价
    sr = ui->lineEdit_3->text();
    price = sr.toStdString();
    if(!judge_decimal(price))
        digits_flag = false;
    if(price.empty())
        space_flag = true;

    // 折扣系数
    sr = ui->lineEdit_4->text();
    discount = sr.toStdString();
    if(!judge_in_range(discount, 0, 1))
        discount_flag = false;
    if(discount.empty())
        space_flag = true;

    // 出版日期
    sr = ui->lineEdit_5->text();
    publication_date = sr.toStdString();
    if(publication_date.empty())
        space_flag = true;

    // 作者
    sr = ui->lineEdit_6->text();
    author = sr.toStdString();
    if(author.empty())
        space_flag = true;

    // 出版社
    sr = ui->lineEdit_7->text();
    press = sr.toStdString();
    if(press.empty())
        space_flag = true;

    // 产品描述
    sr = ui->textEdit->toPlainText();
    description = sr.toStdString();
    if(description.empty())
        space_flag = true;

    if(!space_flag && int_flag && digits_flag && discount_flag)
    {

        // 添加
        eBuss.add_book(name, num, price, discount,
                       publication_date, author, press, description);

        // 关闭
        this->close();
    }
    else
    {
        if(space_flag)
            QMessageBox::information(this, tr("提示对话框"), tr("您还有没填的信息！请补充完整。"), QMessageBox::Ok);
        else
            if(!int_flag)
                QMessageBox::information(this, tr("提示对话框"), tr("数量栏应输入整数！"), QMessageBox::Ok);
            else
                if(!digits_flag)
                    QMessageBox::information(this, tr("提示对话框"), tr("单价栏应输入整数或小数!"), QMessageBox::Ok);
                else
                    if(!discount_flag)
                        QMessageBox::information(this, tr("提示对话框"), tr("折扣系数范围在0和1之间！"), QMessageBox::Ok);
    }
}
