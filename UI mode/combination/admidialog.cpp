#include "admidialog.h"
#include "ui_admidialog.h"
#include "header2.h"
#include "admishowdialog.h"
#include "addbookdialog.h"
#include "addclothingdialog.h"
#include "addfooddialog.h"
#include "fulloffdialog.h"


/*管理员界面*/
AdmiDialog::AdmiDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdmiDialog)
{
    ui->setupUi(this);
}

AdmiDialog::~AdmiDialog()
{
    delete ui;
}


/*退出*/
void AdmiDialog::on_pushButton_clicked()
{
    this->close();
}


/*浏览商品*/
void AdmiDialog::on_pushButton_2_clicked()
{
    AdmiShowDialog adminshow;
    adminshow.show();
    adminshow.exec();
}


/*添加食品*/
void AdmiDialog::on_pushButton_3_clicked()
{
    AddFoodDialog afood;
    afood.show();
    afood.exec();
}


/*添加图书*/
void AdmiDialog::on_pushButton_5_clicked()
{
    AddBookDialog abook;
    abook.show();
    abook.exec();
}


/*添加服装*/
void AdmiDialog::on_pushButton_6_clicked()
{
    AddClothingDialog aclothing;
    aclothing.show();
    aclothing.exec();
}


/*开启满减*/
void AdmiDialog::on_pushButton_4_clicked()
{
    FullOffDialog full_off;
    full_off.show();
    full_off.exec();
}


/*设置广告图片*/
void AdmiDialog::on_pushButton_7_clicked()
{
    QString filename;

    for(int i=0; i<img_num; i++)
    {
        filename = QFileDialog::getOpenFileName(this,
                                              tr("选择图像"),
                                              "",
                                              tr("Images (*.png *.bmp *.jpg *.tif *.GIF )"));
            if(filename.isEmpty())
            {
                 return;
            }
            else
            {

                if(! ( img[i].load(filename) ) ) //加载图像
                {
                    QMessageBox::information(this,
                                             tr("打开图像失败"),
                                             tr("打开图像失败!"));
                    return;
                }
            }
    }

}
