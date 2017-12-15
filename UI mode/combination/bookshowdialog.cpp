#include "bookshowdialog.h"
#include "ui_bookshowdialog.h"
#include "header2.h"


/*图书*/
BookShowDialog::BookShowDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BookShowDialog)
{
    ui->setupUi(this);
    output();
}


BookShowDialog::~BookShowDialog()
{
    delete ui;
}


/*输出*/
/*输出表格*/
void BookShowDialog::output()
{
    QString sr;
    string s;
    int temp_int;
    Book* book = eBuss.get_book();
    int row = eBuss.get_book_num();
    int col = book_data_num;
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
            QTableWidgetItem* item=ui->tableWidget->item(i,j);

            switch(j)
            {
                // 输出ID
                case 1:
                    s = to_string(book[i].get_ID());
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品类型
                case 2:
                    item->setText("图书");
                    break;

                // 输出产品名字
                case 3:
                    s = book[i].get_name();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品数量
                case 4:
                    s = book[i].get_num();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品价格
                case 5:
                    s = book[i].get_price();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品折扣后的价格
                case 6:
                    s = book[i].get_discount_price();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出产品描述
                case 7:
                    s = book[i].get_description();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出出版日期
                case 8:
                    s = book[i].get_publication_date();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出作者
                case 9:
                    s = book[i].get_author();
                    sr = QString::fromStdString(s);
                    item->setText(sr);
                    break;

                // 输出出版社
                case 10:
                    s = book[i].get_press();
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
void BookShowDialog::Buy()
{
    bool ok;
    int temp_int;
    int temp_num;
    QString sr;
    string s;
    Book* book = eBuss.get_book();

    // 获取当前按钮和所对应的产品ID
     QPushButton* btn=qobject_cast<QPushButton*>(sender());
     QPushButton* bfind;
     int ro;
     for(int row=0; row<eBuss.get_book_num(); row++)
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
                tr("请输入要购买的数量："), 0, 0, atoi(book[ro].get_num().c_str()), 1, &ok);

     // 执行购买操作
     if(temp_num)
     {
         eBuss.buy(2, temp_int, temp_num);
         QMessageBox::information(this, tr("提示对话框"), tr("已添加至购物车！"), QMessageBox::Ok);
     }

     output();

}


/*返回*/
void BookShowDialog::on_pushButton_clicked()
{
    this->close();
}
