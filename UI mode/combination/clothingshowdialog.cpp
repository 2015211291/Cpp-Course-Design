#include "clothingshowdialog.h"
#include "ui_clothingshowdialog.h"
#include "header2.h"


/*衣服*/
ClothingShowDialog::ClothingShowDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClothingShowDialog)
{
    ui->setupUi(this);
    output();
}


ClothingShowDialog::~ClothingShowDialog()
{
    delete ui;
}


/*输出*/
/*输出表格*/
void ClothingShowDialog::output()
{
    QString sr;
    string s;
    int temp_int;
    Clothing* clothing = eBuss.get_clothing();
    int row = eBuss.get_clothing_num();
    int col = clothing_data_num;
    ui->tableWidget->setRowCount(row);
    ui->tableWidget->horizontalHeader()->sectionResizeMode(QHeaderView::Interactive);
    ui->tableWidget->verticalHeader()->sectionResizeMode(QHeaderView::Interactive);
    ui->tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    for(int i=0; i<row; i++)
    {
        // 为每行设置购买按钮
        QPushButton* btn=new QPushButton(tr("购买"),this);
        connect(btn,SIGNAL(clicked()),this,SLOT(Buy()));
        ui->tableWidget->setCellWidget(i, 0 , btn);

        // 该行的每列输出不同的信息
        for(int j=1; j<col; j++)
        {
            ui->tableWidget->setItem(i,j,new QTableWidgetItem(""));
            QTableWidgetItem* item = ui->tableWidget->item(i,j);

            switch(j)
            {
                // 输出ID
                case 1:
                    s = to_string(clothing[i].get_ID());
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品类型
                case 2:
                    item->setText("衣服");
                    break;

                // 输出产品名字
                case 3:
                    s = clothing[i].get_name();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品数量
                case 4:
                    s = clothing[i].get_num();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品价格
                case 5:
                    s = clothing[i].get_price();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品折扣后的价格
                case 6:
                    s = clothing[i].get_discount_price();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品描述
                case 7:
                    s = clothing[i].get_description();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出尺码
                case 8:
                    temp_int = clothing[i].get_size();
                    switch(temp_int)
                    {
                        case 0:
                            s = "XXS";
                            break;
                        case 1:
                            s = "XS";
                            break;
                        case 2:
                            s = "S";
                            break;
                        case 3:
                            s = "M";
                            break;
                        case 4:
                            s = "L";
                            break;
                        case 5:
                            s = "XL";
                            break;
                        case 6:
                            s = "XXL";
                            break;
                        case 7:
                            s = "XXXL";
                            break;

                        default:
                            break;
                    }
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出衣服类型
                case 9:
                    temp_int = clothing[i].get_clothing_type();
                    switch(temp_int)
                    {
                        case 0:
                            s = "men";
                            break;
                        case 1:
                            s = "women";
                            break;
                        case 2:
                            s = "children";
                            break;

                        default:
                            break;
                    }
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出衣服原料
                case 10:
                    s = clothing[i].get_material();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                default:
                    break;

            }
        }
    }
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
}


/*购买槽*/
void ClothingShowDialog::Buy()
{
    bool ok;
    int temp_int;
    int temp_num;
    QString sr;
    string s;
    Clothing* clothing = eBuss.get_clothing();

    // 获取当前按钮和所对应的产品ID
     QPushButton* btn=qobject_cast<QPushButton*>(sender());
     QPushButton* bfind;
     int ro;
     for(int row=0; row<eBuss.get_clothing_num(); row++)
     {
         bfind=(QPushButton*)(ui->tableWidget->cellWidget(row, 0));
         if(bfind == btn)
         {
             ro=row;
             break;
         }
     }

     QTableWidgetItem* item0 = ui->tableWidget->item(ro, 1);
     sr = item0->text();
     s = sr.toStdString();
     temp_int = atoi(s.c_str());

     // 请用户输入数量
     temp_num = QInputDialog::getInt(this, tr("输入数量"),
                tr("请输入要购买的数量："), 0, 0, atoi(clothing[ro].get_num().c_str()), 1, &ok);

     // 执行购买操作
     if(temp_num)
     {
         eBuss.buy(3, temp_int, temp_num);
         QMessageBox::information(this, tr("提示对话框"), tr("已添加至购物车！"), QMessageBox::Ok);
     }

     output();

}


/*返回*/
void ClothingShowDialog::on_pushButton_clicked()
{
    this->close();
}
