#include "fulloffdialog.h"
#include "ui_fulloffdialog.h"
#include "header2.h"


/*满减界面*/
FullOffDialog::FullOffDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FullOffDialog)
{
    ui->setupUi(this);
}


FullOffDialog::~FullOffDialog()
{
    delete ui;
}


/*返回*/
void FullOffDialog::on_pushButton_2_clicked()
{
    this->close();
}


/*选择完成*/
void FullOffDialog::on_pushButton_clicked()
{
    bool int_flag = true;
    QString sr_full = ui->lineEdit->text();
    string s_full = sr_full.toStdString();
    int i_full = atoi(s_full.c_str());
    if(!judge_digits(s_full))
        int_flag = false;

    QString sr_off = ui->lineEdit_2->text();
    string s_off = sr_off.toStdString();
    int i_off = atoi(s_off.c_str());
    if(!judge_digits(s_off))
        int_flag = false;

    int index = ui->comboBox->currentIndex();

    if(int_flag)
    {
        switch(index)
        {
            // 全场满减
            case 0:
                full_off_flag_all = 1;
                all_full = i_full;
                all_off = i_off;
                break;

            // 食品满减
            case 1:
                full_off_flag_food = 1;
                food_full = i_full;
                food_off = i_off;
                break;

            // 图书满减
            case 2:
                full_off_flag_book = 1;
                book_full = i_full;
                book_off = i_off;
                break;

            // 服装满减
            case 3:
                full_off_flag_clothing = 1;
                clothing_full = i_full;
                clothing_off = i_off;
                break;

            // 取消满减
            case 4:
                full_off_flag_all = 0;
                full_off_flag_food = 0;
                full_off_flag_book = 0;
                full_off_flag_clothing = 0;
                break;

            default:break;

        }

        this->close();
    }
    else
        QMessageBox::information(this, tr("提示对话框"), tr("请输入整数！"), QMessageBox::Ok);
}
