#ifndef CLOTHING_H
#define CLOTHING_H
#include "product.h"


/*服装类*/
class Clothing:public Product
{
private:
	Clothing_size size;// 衣服尺码大小
	Clothing_type clothing_type;// 衣服类型，男装，女装，童装
	string material;// 衣服原料


public:
	/*构造函数*/
	Clothing();

	/*析构函数*/
	~Clothing(){}

	/*赋值运算符重载*/
	void operator= (Clothing &a);
	 
	/*修改变量*/
	void modify_clothing(Clothing_size a, Clothing_type b, string c);

	/*修改衣服尺码*/
	void modify_size(int s);

	/*修改衣服类型*/
	void modify_clothing_type(Clothing_type s);

	/*修改衣服原料*/
	void modify_material(string s);

	/*添加clothing*/
    void add_clothing(int id);

    /*将当前变量写入文件*/
    void write();
    
    /*用当前变量更新文件*/
    void update();

    /*输入衣服尺码*/
    void input_size();

    /*输入衣服类型*/
    void input_clothing_type();

    /*输入衣服原料*/
    void input_material();

    /*删除该产品*/
    void remove();

    /*购买该clothing n件*/
    bool buy(int n);

    /*根据原价和折扣系数以及满减修改折扣后的价格*/
	virtual void modify_discount_price();

	/*显示商品信息*/
    virtual void show();

    /*显示订单中商品的信息，即仅改变数量*/
    virtual void show_order(int n);
};

#endif