#include "recorddialog.h"
#include "ui_recorddialog.h"
#include "header.h"
#include "showrecorddialog.h"


/*查询记录页面*/
RecordDialog::RecordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RecordDialog)
{
    ui->setupUi(this);
}

RecordDialog::~RecordDialog()
{
    delete ui;
}


/*返回*/
void RecordDialog::on_pushButton_2_clicked()
{
    this->close();
}


/*输入完成*/
void RecordDialog::on_pushButton_clicked()
{
    QString sr;
    int tmp;
    string s;

    // 获取年份
    sr = ui->lineEdit->text();
    s += (sr.toStdString() + "/");

    // 获取月份
    tmp = ui->comboBox->currentIndex();
    tmp += 1;
    s += (to_string(tmp) + "/");

    // 获取天
    tmp = ui->comboBox_2->currentIndex();
    tmp += 1;
    if(tmp < 10)
    {
        s += "0";
    }
    s += to_string(tmp);
    cout << s << endl;

    // 查找
    record_s = bank_card.read_record(s);
    if(record_num == 0)
        QMessageBox::warning(this, tr("警告对话框"), tr("查询不到该天的操作记录！"), QMessageBox::Abort);
    else
    {
        ShowRecordDialog show_record(this);
        show_record.exec();
    }

}
