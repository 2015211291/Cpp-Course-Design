#include "showrecorddialog.h"
#include "ui_showrecorddialog.h"
#include "header.h"


/*显示记录的界面*/
ShowRecordDialog::ShowRecordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowRecordDialog)
{
    ui->setupUi(this);
    ui->textEdit->setEnabled(false);

    // 显示操作日志
    for(int i=0; i<record_num; i++)
        ui->textEdit->append(QString::fromStdString(record_s[i]));
}

ShowRecordDialog::~ShowRecordDialog()
{
    delete ui;
}


/*返回*/
void ShowRecordDialog::on_pushButton_clicked()
{
    this->close();
}
