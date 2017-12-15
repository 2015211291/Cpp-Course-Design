#include "addclothingdialog.h"
#include "ui_addclothingdialog.h"
#include "header2.h"


/*添加服装界面*/
AddClothingDialog::AddClothingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddClothingDialog)
{
    ui->setupUi(this);
    ui->lineEdit->setFocus();
}


AddClothingDialog::~AddClothingDialog()
{
    delete ui;
}


/*返回*/
void AddClothingDialog::on_pushButton_2_clicked()
{
    this->close();
}


/*输入完成*/
void AddClothingDialog::on_pushButton_clicked()
{
    bool space_flag = false;
    bool int_flag = true;
    bool digits_flag = true;
    bool discount_flag = true;
    string name, num, price, discount, material, description;
    int size, clothing_type;
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

    // 尺码
    size = ui->comboBox->currentIndex();

    // 原料
    sr = ui->lineEdit_6->text();
    material = sr.toStdString();

    // 类型
    clothing_type = ui->comboBox_2->currentIndex();

    // 产品描述
    sr = ui->textEdit->toPlainText();
    description = sr.toStdString();
    if(description.empty())
        space_flag = true;

    if(!space_flag && int_flag && digits_flag && discount_flag)
    {

        // 添加
        eBuss.add_clothing(name, num, price, discount,
                       size, clothing_type, material, description);

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
