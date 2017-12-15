#include "erecorddialog.h"
#include "ui_erecorddialog.h"
#include "header2.h"
#include "showerecorddialog.h"


/*显示历史订单记录的界面*/
eRecordDialog::eRecordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::eRecordDialog)
{
    ui->setupUi(this);
}

eRecordDialog::~eRecordDialog()
{
    delete ui;
}


/*关闭*/
void eRecordDialog::on_pushButton_2_clicked()
{
    this->close();
}


/*确定输入*/
void eRecordDialog::on_pushButton_clicked()
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
    erecord = eBuss.read_record(s);
    if(erecord_num == 0)
        QMessageBox::warning(this, tr("警告对话框"), tr("查询不到该天的操作记录！"), QMessageBox::Abort);
    else
    {
        ShowErecordDialog show_record(this);
        show_record.exec();
    }

}
