#include "platformdialog.h"
#include "ui_platformdialog.h"
#include "ebdialog.h"
#include "log_in_dialog.h"
#include "adminlogdialog.h"


/*电商平台主界面*/
PlatformDialog::PlatformDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlatformDialog)
{
    ui->setupUi(this);
}


PlatformDialog::~PlatformDialog()
{
    delete ui;
}


/*退出*/
void PlatformDialog::on_pushButton_4_clicked()
{
    this->close();
}


/*用户注册*/
void PlatformDialog::on_pushButton_clicked()
{
    eBDialog eb;
    this->hide();
    eb.show();
    eb.exec();
    this->show();
}


/*用户登录*/
void PlatformDialog::on_pushButton_2_clicked()
{
    log_in_Dialog log_in;
    this->hide();
    log_in.exec();
    this->show();
}


/*管理员登录*/
void PlatformDialog::on_pushButton_3_clicked()
{
    AdminLogDialog admin_log;
    this->hide();
    admin_log.show();
    admin_log.exec();
    this->show();
}
