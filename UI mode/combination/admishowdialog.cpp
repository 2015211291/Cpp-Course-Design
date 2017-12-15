#include "admishowdialog.h"
#include "ui_admishowdialog.h"
#include "header2.h"


/*管理员界面*/
AdmiShowDialog::AdmiShowDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdmiShowDialog)
{
    ui->setupUi(this);
    output();
}


AdmiShowDialog::~AdmiShowDialog()
{
    delete ui;
}


/*返回*/
void AdmiShowDialog::on_pushButton_2_clicked()
{
    this->close();
}


/*输出*/
/*输出表格*/
void AdmiShowDialog::output()
{
    QString sr;
    int index;
    string s;
    int temp_int;
    Food* food = eBuss.get_food();
    Book* book = eBuss.get_book();
    Clothing* clothing = eBuss.get_clothing();
    int row_food = eBuss.get_food_num();
    int row_book = eBuss.get_book_num();
    int row_clothing = eBuss.get_clothing_num();
    int col = product_data_num + 1;
    ui->tableWidget->setRowCount(row_food + row_book + row_clothing);
    ui->tableWidget->horizontalHeader()->sectionResizeMode(QHeaderView::Interactive);
    ui->tableWidget->verticalHeader()->sectionResizeMode(QHeaderView::Interactive);
    ui->tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    // 食物
    for(int i=0; i<row_food; i++)
    {
        // 为每行设置删除按钮
        QPushButton* btn=new QPushButton(tr("删除"),this);
        connect(btn,SIGNAL(clicked()),this,SLOT(Delete()));
        ui->tableWidget->setCellWidget(i, 0 , btn);
        // 该行的每列输出不同的信息
        for(int j=1; j<=col; j++)
        {
            ui->tableWidget->setItem(i, j, new QTableWidgetItem(""));
            QTableWidgetItem* item = ui->tableWidget->item(i, j);

            switch(j)
            {
                // 输出ID
                case 1:
                    s = to_string(food[i].get_ID());
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品类型
                case 2:
                    s = "食物";
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品名字
                case 3:
                    s = food[i].get_name();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品数量
                case 4:
                    s = food[i].get_num();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品原价
                case 5:
                    s = food[i].get_price();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品折扣系数
                case 6:
                    s = food[i].get_discount();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

               // 输出产品现价
                case 7:
                    s = food[i].get_discount_price();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品描述
                case 8:
                    s = food[i].get_description();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

            default:break;

            }
        }

    }

    // 图书
    for(int i=row_food; i<row_food+row_book; i++)
    {
        // 为每行设置删除按钮
        QPushButton* btn=new QPushButton(tr("删除"),this);
        connect(btn,SIGNAL(clicked()),this,SLOT(Delete()));
        ui->tableWidget->setCellWidget(i, 0 , btn);

        // 该行的每列输出不同的信息
        for(int j=1; j<=col; j++)
        {
            ui->tableWidget->setItem(i, j, new QTableWidgetItem(""));
            QTableWidgetItem* item = ui->tableWidget->item(i, j);

            index = i - row_food;
            switch(j)
            {
                // 输出ID
                case 1:
                {
                    s = to_string(book[index].get_ID());
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;
                }

                // 输出产品类型
                case 2:
                {
                    s = "图书";
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;
                }

                // 输出产品名字
                case 3:
                {
                    s = book[index].get_name();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;
                }

                // 输出产品数量
                case 4:
                {
                    s = book[index].get_num();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;
                }

                // 输出产品原价
                case 5:
                {
                    s = book[index].get_price();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;
                }

                // 输出产品折扣系数
                case 6:
                {
                    s = book[index].get_discount();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;
                }

               // 输出产品现价
                case 7:
                {
                    s = book[index].get_discount_price();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;
                }

                // 输出产品描述
                case 8:
                {
                    s = book[index].get_description();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;
                }

                default:break;
            }
        }
    }

    // 衣服
    for(int i=row_food+row_book; i<row_food+row_book+row_clothing; i++)
    {
        // 为每行设置删除按钮
        QPushButton* btn=new QPushButton(tr("删除"),this);
        connect(btn,SIGNAL(clicked()),this,SLOT(Delete()));
        ui->tableWidget->setCellWidget(i, 0 , btn);

        // 该行的每列输出不同的信息
        for(int j=1; j<=col; j++)
        {
            ui->tableWidget->setItem(i, j, new QTableWidgetItem(""));
            QTableWidgetItem* item = ui->tableWidget->item(i, j);

            index = i - row_food - row_book;
            switch(j)
            {
                // 输出ID
                case 1:
                {
                    s = to_string(clothing[index].get_ID());
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;
                }

                // 输出产品类型
                case 2:
                {
                    s = "服装";
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;
                }

                // 输出产品名字
                case 3:
                {
                    s = clothing[index].get_name();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;
                }

                // 输出产品数量
                case 4:
                {
                    s = clothing[index].get_num();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;
                }

                // 输出产品原价
                case 5:
                {
                    s = clothing[index].get_price();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;
                }

                // 输出产品折扣系数
                case 6:
                {
                    s = clothing[index].get_discount();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;
                }

               // 输出产品现价
                case 7:
                {
                    s = clothing[index].get_discount_price();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;
                }

                // 输出产品描述
                case 8:
                {
                    s = clothing[index].get_description();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;
                }

                default:break;
            }
        }
    }

}


/*删除槽*/
void AdmiShowDialog::Delete()
{
    bool ok;
    int temp_int;
    int catagory;
    QString sr;
    string s;
    Order* order = eBuss.get_order();

    // 获取当前按钮和所对应的产品ID、类型
     QPushButton* btn=qobject_cast<QPushButton*>(sender());
     QPushButton* bfind;
     int ro;
     for(int row=0; row<(eBuss.get_food_num()+eBuss.get_book_num()+eBuss.get_clothing_num()); row++)
     {
         bfind = (QPushButton*)(ui->tableWidget->cellWidget(row, 0));
         if(bfind == btn)
         {
             ro = row;
             break;
         }
     }

     QTableWidgetItem* item0 = ui->tableWidget->item(ro, 1);
     sr = item0->text();
     s = sr.toStdString();
     temp_int = atoi(s.c_str());

     item0 = ui->tableWidget->item(ro, 2);
     sr = item0->text();
     s = sr.toStdString();
     if(s == "食物")
         catagory = 1;
     else
     {
         if(s == "图书")
             catagory = 2;
         else
             catagory = 3;
     }

     // 执行删除操作
    eBuss.remove(catagory, temp_int);

    output();

}


/*更新当前表格，用于手动在表格修改后*/
void AdmiShowDialog::on_pushButton_clicked()
{
    int food_nums = eBuss.get_food_num();
    int book_nums = eBuss.get_book_num();
    int clothing_nums = eBuss.get_clothing_num();
    QString sr;

   string num[food_nums + book_nums + clothing_nums + 1];// 4
   string price[food_nums + book_nums + clothing_nums + 1];// 5
   string discount[food_nums + book_nums + clothing_nums + 1];// 6
   string description[food_nums + book_nums + clothing_nums + 1];// 8

   int total_num = food_nums + book_nums + clothing_nums;
   for(int i=0; i<total_num; i++)
   {
      sr = ui->tableWidget->item(i, 4)->text();
      num[i] = sr.toStdString();

      sr = ui->tableWidget->item(i, 5)->text();
      price[i] = sr.toStdString();

      sr = ui->tableWidget->item(i, 6)->text();
      discount[i] = sr.toStdString();

      sr = ui->tableWidget->item(i, 8)->text();
      description[i] = sr.toStdString();
   }

   // 更新变量并写入文件
   eBuss.update_admi(num, price, discount, description);
   eBuss.update_all();

   //重新输出
   output();

}
