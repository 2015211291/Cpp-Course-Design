#include "shoppingcartdialog.h"
#include "ui_shoppingcartdialog.h"
#include "header2.h"
#include "payoffdialog.h"


/*购物车*/
ShoppingCartDialog::ShoppingCartDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShoppingCartDialog)
{
    ui->setupUi(this);
    output();
    ui->lineEdit->setFocusPolicy(Qt::NoFocus);
}


ShoppingCartDialog::~ShoppingCartDialog()
{
    delete ui;
}


/*退出*/
void ShoppingCartDialog::on_pushButton_clicked()
{
    this->close();
}


/*输出*/
/*输出表格*/
void ShoppingCartDialog::output()
{
    QString sr;
    int index;
    string s;
    int temp_int;
    Order* order = eBuss.get_order();
    Food* food = eBuss.get_food();
    Book* book = eBuss.get_book();
    Clothing* clothing = eBuss.get_clothing();
    int row = eBuss.get_order_num();
    int col = product_data_num;
    ui->tableWidget->setRowCount(row);
    ui->tableWidget->horizontalHeader()->sectionResizeMode(QHeaderView::Interactive);
    ui->tableWidget->verticalHeader()->sectionResizeMode(QHeaderView::Interactive);
    ui->tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    for(int i=0; i<row; i++)
    {
        // 为每行设置购买按钮
        QPushButton* btn=new QPushButton(tr("删除"),this);
        connect(btn,SIGNAL(clicked()),this,SLOT(Delete()));
        ui->tableWidget->setCellWidget(i, 0 , btn);

        // 该行的每列输出不同的信息
        for(int j=1; j<=col; j++)
        {
            ui->tableWidget->setItem(i,j,new QTableWidgetItem(""));
            QTableWidgetItem* item = ui->tableWidget->item(i,j);

            switch(j)
            {
                // 输出ID
                case 1:
                    s = to_string(order[i].ID);
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品类型
                case 2:
                    temp_int = order[i].category;
                    switch(temp_int)
                    {
                        case 0:
                            s = "食物";
                            index = eBuss.find_food(order[i-1].ID);
                            break;

                        case 1:
                            s = "图书";
                            index = eBuss.find_book(order[i-1].ID);
                            break;

                        case 2:
                            s = "衣服";
                            index = eBuss.find_clothing(order[i-1].ID);
                            break;

                        default:break;
                    }
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品名字
                case 3:
                    temp_int = order[i].category;
                    switch(temp_int)
                    {
                        case 0:
                            index = eBuss.find_food(order[i].ID);
                            s = food[index].get_name();
                            break;

                        case 1:
                            s = "图书";
                            index = eBuss.find_book(order[i].ID);
                            s = book[index].get_name();
                            break;

                        case 2:
                            s = "衣服";
                            index = eBuss.find_clothing(order[i].ID);
                            s = clothing[index].get_name();
                            break;

                        default:break;
                    }
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品数量
                case 4:
                    s = to_string(order[i].num);
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品总价
                case 5:
                    s = to_string(order[i].price);
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                default:
                    break;

            }
        }


    }
    double total_price = eBuss.cal_all_price();
    s = to_string(total_price);
    sr = QString::fromStdString(s);
    ui->lineEdit->setText(sr);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
}


/*删除槽*/
void ShoppingCartDialog::Delete()
{
    bool ok;
    int temp_int;
    int temp_num;
    QString sr;
    string s;
    Order* order = eBuss.get_order();

    // 获取当前按钮和所对应的产品ID
     QPushButton* btn=qobject_cast<QPushButton*>(sender());
     QPushButton* bfind;
     int ro;
     for(int row=0; row<eBuss.get_order_num(); row++)
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

     // 请用户输入数量
     temp_num = QInputDialog::getInt(this, tr("输入数量"),
                tr("请输入要删除的数量："), 0, 0, order[ro].num, 1, &ok);

     // 执行删除操作
     if(temp_num)
     {
         eBuss.remove_from_order(temp_int, temp_num);
     }

     output();

}


/*结算*/
void ShoppingCartDialog::on_pushButton_2_clicked()
{
    PayOffDialog pay_off(this);
    this->close();
    pay_off.exec();
}
