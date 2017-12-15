#include "showerecorddialog.h"
#include "ui_showerecorddialog.h"
#include "header2.h"


/*显示记录界面*/
ShowErecordDialog::ShowErecordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowErecordDialog)
{
    ui->setupUi(this);
    ui->textEdit->setEnabled(false);
    ui->textEdit->setWordWrapMode(QTextOption::WordWrap);

    // 显示操作日志
    for(int i=0; i<erecord_num; i++)
    {
        ui->textEdit->append(QString::fromStdString(erecord[i]));
        cout << erecord[i] << endl;
    }
}

ShowErecordDialog::~ShowErecordDialog()
{
    delete ui;
}


/*返回界面*/
void ShowErecordDialog::on_pushButton_clicked()
{
    this->close();
}
