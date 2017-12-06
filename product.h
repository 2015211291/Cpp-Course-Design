#ifndef PRODUCT_H
#define PRODUCT_H

#include "common.h"


/*产品基类*/
class Product
{
private:
	int ID;// 产品的唯一标识,添加产品时由平台赋值
	Type type;// 产品类型
	string name;// 产品名字
	string num;// 产品数量
	string price;// 产品价格
	string discount;// 折扣系数，0<=..<=1
	string discount_price;// 打完折扣后的价格
	string description;// 产品描述

public: 
	/*构造函数*/
	Product();

	/*析构函数*/
	~Product(){}

	/*获得类型*/
	Type get_type();

	/*获得ID*/
	int get_ID();

	/*获得产品名字*/
	string get_name();

	/*获得产品数量*/
	string get_num();

	/*获得产品价格*/
	string get_price();

	/*获得折扣系数*/
	string get_discount();

	/*获得打完折扣的价格*/
	string get_discount_price();

	/*获得产品描述*/
	string get_description();

	/*修改变量的值*/
	void modify(int id, Type a_type, string a_name, string a_num, 
		string a_price, string a_discount, string a_description);
	
	/*修改ID的值*/
	void modify_ID(int id);
	
	/*修改类型*/
	void modify_type(int a_type);

	/*修改产品名字*/
	void modify_name(string s);

	/*修改产品数目*/
	void modify_num(string s);

	/*修改产品价格*/
	void modify_price(string s);

	/*修改折扣系数*/
	void modify_discount(string s);

	/*把s赋值给discount_price*/
	void modif_discount_price(string s);
	
	/*根据原价和折扣系数以及满减修改折扣后的价格*/
	virtual void modify_discount_price();

	/*修改产品描述*/
	void modify_description(string s);

	/*添加产品*/
	void add(int id);

	/*输入产品名字*/
	void input_name();

	/*输入产品数量*/
	void input_num();

	/*输入产品价格*/
	void input_price();

	/*输入产品折扣系数*/
	void input_discount();

	/*输入产品描述*/
	void input_description();

	/*管理员修改产品信息*/
    void alter();

    /*显示商品信息*/
    virtual void show();
    
};	

#endif