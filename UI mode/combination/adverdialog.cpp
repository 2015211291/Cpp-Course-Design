#include "adverdialog.h"
#include "ui_adverdialog.h"
#include "userdialog.h"
#include "header2.h"
QImage img[img_num];

/*广告界面*/
AdverDialog::AdverDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdverDialog)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap::fromImage(img[0]));
    ui->label_2->setPixmap(QPixmap::fromImage(img[1]));
    ui->label_3->setPixmap(QPixmap::fromImage(img[2]));
}

AdverDialog::~AdverDialog()
{
    delete ui;
}


/*关闭*/
void AdverDialog::on_pushButton_clicked()
{
    this->close();
    UserDialog user;
    user.exec();
}
