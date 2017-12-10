#include "userdialog.h"
#include "ui_userdialog.h"
#include "foodshowdialog.h"
#include "bookshowdialog.h"
#include "clothingshowdialog.h"
#include "shoppingcartdialog.h"
#include "header2.h"


/*用户界面*/
UserDialog::UserDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserDialog)
{
    ui->setupUi(this);

    string s;
    QString sr;

    if(full_off_flag_all)
        s += ("全场满" + to_string(all_full) + "减" + to_string(all_off) + "\n");
    if(full_off_flag_food)
        s += ("食品满" + to_string(food_full) + "减" + to_string(food_off) + "\n");
    if(full_off_flag_book)
       s += ("图书满" + to_string(book_full) + "减" + to_string(book_off) + "\n");
    if(full_off_flag_clothing)
       s += ("服装满" + to_string(clothing_full) + "减" + to_string(clothing_off) + "\n");
    if(s.empty())
        s += "无";

    sr = QString::fromStdString(s);
    ui->textEdit->setPlainText(sr);
    ui->textEdit->setFocusPolicy(Qt::NoFocus);

}


UserDialog::~UserDialog()
{
    delete ui;
}


/*退出*/
void UserDialog::on_pushButton_clicked()
{
    this->close();
}


/*食物*/
void UserDialog::on_pushButton_2_clicked()
{
    FoodShowDialog food_show;
    food_show.show();
    food_show.exec();
}


/*图书*/
void UserDialog::on_pushButton_3_clicked()
{
    BookShowDialog book_show;
    book_show.show();
    book_show.exec();
}


/*服装*/
void UserDialog::on_pushButton_5_clicked()
{
    ClothingShowDialog clothing_show;
    clothing_show.show();
    clothing_show.exec();
}


/*购物车*/
void UserDialog::on_pushButton_4_clicked()
{
    ShoppingCartDialog shop;
    shop.show();
    shop.exec();
}
