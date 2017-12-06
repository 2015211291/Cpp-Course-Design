#include "book.h"
using namespace std;


/*构造函数*/
Book::Book()
{
	modify(0, book, "0", "0", "0", "0", "0");
	publication_date = "0";
	author = "0";
	press = "0";
}


/*赋值运算符重载*/
void Book::operator= (Book &a) 
{
	modify(a.get_ID(), a.get_type(), a.get_name(), a.get_num(), 
		a.get_price(), a.get_discount(), 
		a.get_description());
	
	publication_date = a.publication_date;
	author = a.author;
	press = a.press; 

}


/*修改变量*/
void Book::modify_book(string a, string b, string c)
{
	publication_date = a;
	author = b;
	press = c;
}


/*修改出版日期*/
void Book::modify_publication_date(string s)
{
	publication_date = s;
}


/*修改作者*/
void Book::modify_author(string s)
{
	author = s;
}


/*修改题目*/
void Book::modify_title(string s)
{
	press = s;
}


/*输入出版日期*/
void Book::input_publication_date()
{
	string temp_s;

	cout << "请输入出版日期(例：20170912)" << endl;
	cin >> temp_s;

	while(!judge_digits(temp_s))
	{
		cout << "输入生产日期不合法，请重新输入！" << endl;
		cin >> temp_s;
	}

	publication_date = temp_s;
}


/*输入作者*/
void Book::input_author()
{
	string temp_s;

	cout << "请输入作者：" << endl;
	cin >> temp_s;

	author = temp_s;
}


/*输入出版社*/
void Book::input_press()
{
	string temp_s;
	
	cout << "请输入出版社：" << endl;
	cin >> temp_s;

	press = temp_s;
}


/*添加book*/
 void Book::add_book(int id)
 {
 	string temp_s;

	// 产品类型
	modify_type(1);

	// 产品基本属性的输入
	add(id);

	// 出版日期
	input_publication_date();

	// 作者
	input_author();

	// 出版社
	input_press();
	
	// 写入文件
	write();
}


/*将当前变量写入文件*/
void Book::write()
{
	fstream f("book.txt", ios_base::out | ios_base::app);

    f << get_ID() << endl;
	f << get_type() << endl;
	f << get_name() << endl;
	f << get_num() << endl;
	f << get_price() << endl;
	f << get_discount() << endl;
	f << get_discount_price() << endl;
	f << get_description() << endl;

	f << publication_date << endl;
	f << author << endl;
	f << press << endl;

	f.close();
}


/*用当前变量更新文件中的信息*/
void Book::update()
{
    string s;
    int line_num = 0;
    fstream f("book.txt");
    
    // 统计行数
    while(!f.eof())
    {
        f >> s;
        line_num++;
    }
    f.close();
    
    // 动态申请数组存放文件内容,一个string存一行
    string* s_info = new string[line_num];
    
    // 重新读取文件,存储内容
    f.open("book.txt");
    int i = 0;
    
    while(!f.eof())
    {	
        f >> s_info[i++];
        
        // 检测到当前产品ID,用当前变量赋给数组，相当于修改原文件
        if(((i-1) % book_data_num == 0) && (s_info[i-1] == to_string(get_ID())))
        {
            f >> s;
            s_info[i++] = get_type();
            f >> s;
            s_info[i++] = get_name();
            f >> s;
            s_info[i++] = get_num();		
            f >> s;
            s_info[i++] = get_price();
            f >> s;
            s_info[i++] = get_discount();
            f >> s;
            s_info[i++] = get_discount_price();
            f >> s;
            s_info[i++] = get_description();
            f >> s;
            s_info[i++] = publication_date;
            f >> s;
            s_info[i++] = author;
           	f >> s;
            s_info[i++] = press;
        }
        else
            f >> s_info[i++];
    }
    f.close();
    
    // 向文件中覆盖写入信息
    ofstream file("book.txt", ios_base::trunc);
    
    for(i=0; i<line_num; i++)
        file << s_info[i] << endl;
    
    file.close();
    
    delete [] s_info;
    
}


/*删除该产品*/
void Book::remove()
{
	string s;
    int line_num = 0;
    fstream f("book.txt");
    
    // 统计行数
    while(!f.eof())
    {
        f >> s;
        line_num++;
    }
    f.close();
    
    line_num -= book_data_num;

    // 动态申请数组存放文件内容,一个string存一行,但该产品的数据不存
    string* s_info = new string[line_num];
    
    // 重新读取文件,存储内容
    f.open("book.txt");
    int i = 0;
    
    while((!f.eof()) && (i < line_num))
    {	
        f >> s_info[i++];
        
        // 检测到当前产品ID,不存入数组
        if(((i-1) % book_data_num == 0) && (s_info[i-1] == to_string(get_ID())))
        {
            for(int j=0; j<book_data_num-1; j++)
            	f >> s;
            	
       		i = i-1;
        }
        else
            f >> s_info[i++];
    }
    f.close();
    
    // 向文件中覆盖写入信息
    ofstream file("book.txt", ios_base::trunc);
    
    for(i=0; i<line_num; i++)
        file << s_info[i] << endl;
    
    file.close();
    
    delete [] s_info;

}


/*根据原价和折扣系数以及满减修改折扣后的价格*/
void Book::modify_discount_price()
{

    Product::modify_discount_price();
}


/*显示商品信息*/
void Book::show()
{
    Product::show();

    cout << "出版日期：" << publication_date << endl;
    cout << "作者：" << author << endl;
    cout << "出版社：" << press << endl;
    cout << "产品概述：" << get_description() << endl;
}


 /*显示订单中商品的信息，即仅改变数量*/
void Book::show_order(int n)
{
    Product::show_order(n);

    cout << "出版日期：" << publication_date << endl;
    cout << "作者：" << author << endl;
    cout << "出版社：" << press << endl;
    cout << "产品概述：" << get_description() << endl;
}


/*购买该book*/
bool Book::buy(int n)
{
    // 检验剩余量是否满足
    if((atoi(get_num().c_str()) - n) < 0)
    {
        cout << "您购买的数量超过了库存量！" << endl;
        cout << "当前库存量: " << get_num() << endl;
        return false;
    }
    else
    {
        modify_num(to_string(atoi(get_num().c_str()) - n));
        modify_discount_price();
        update();
        return true;
    }
}
