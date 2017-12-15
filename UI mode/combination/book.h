#ifndef BOOK_H
#define BOOK_H
#include "product.h"


/*书类*/
class Book:public Product
{
private:
	string publication_date;// 出版日期
	string author;// 作者
	string press;// 出版社


public:
	/*构造函数*/
	Book();
	
	/*析构函数*/
	~Book(){}

	/*获得出版日期*/
	string get_publication_date();

	/*获得作者*/
	string get_author();

	/*获得出版社*/
	string get_press();

	/*赋值运算符重载*/
	void operator= (Book &a);

	/*修改变量*/
	void modify_book(string a, string b, string c);

	/*修改出版日期*/
	void modify_publication_date(string s);

	/*修改作者*/
	void modify_author(string s);

	/*修改题目*/
	void modify_press(string s);

	/*添加book*/
    void add_book(int id);

    /*将当前变量写入文件*/
    void write();
    
    /*用当前变量更新文件*/
    void update();

    /*输入出版日期*/
    void input_publication_date();

    /*输入作者*/
    void input_author();

    /*输入出版社*/
    void input_press();

    /*删除该产品*/
    void remove();

    /*购买该book n件*/
    bool buy(int n);

    /*根据原价和折扣系数以及满减修改折扣后的价格*/
	virtual void modify_discount_price();

	/*显示商品信息*/
    virtual void show();

    /*显示订单中商品的信息，即仅改变数量*/
    virtual void show_order(int n);
};

#endif