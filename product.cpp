#include "product.h"
using namespace std;

/*构造函数*/
Product::Product()
{
	name = "0";
	type = food;
	num = "0";
	price = "0";
	discount = "1";
	discount_price = "0";
	description = "0";
}


/*获得类型*/
Type Product::get_type()
{
	return type;
}


/*获得ID*/
int Product::get_ID()
{
	return ID;
}


/*获得产品名字*/
string Product::get_name()
{
	return name;
}


/*获得产品数量*/
string Product::get_num()
{
	return num;
}


/*获得产品价格*/
string Product::get_price()
{
	return price;
}


/*获得折扣系数*/
string Product::get_discount()
{
	return discount;
}


/*根据原价和折扣系数修改折扣后的价格,不包括满减*/
string Product::get_discount_price()
{
	return discount_price;
}


/*获得产品描述*/
string Product::get_description()
{
	return description;
}


/*修改变量的值*/
void Product::modify(int id, Type a_type, string a_name, string a_num, 
	string a_price, string a_discount, string a_description)
{
	ID = id;
	type = a_type;
	name = a_name;
	num = a_num;
	price = a_price;
	discount = a_discount;
	description = a_description;

	double price_temp = atof(price.c_str());
	double discount_temp = atof(discount.c_str());
	double discount_price_temp = price_temp * discount_temp;

	discount_price = to_string(discount_price_temp);
}


/*修改ID的值*/
void Product::modify_ID(int id)
{
	ID = id;
}


/*修改类型*/
void Product::modify_type(int a_type)
{
	type = Type(a_type);
}


/*修改产品名字*/
void Product::modify_name(string s)
{
	name = s;
}


/*修改产品数目*/
void Product::modify_num(string s)
{
	num = s;
}


/*修改产品价格*/
void Product::modify_price(string s)
{
	price = s;
}


/*修改折扣系数*/
void Product::modify_discount(string s)
{
	discount = s;
}


/*把s赋值给discount_price*/
void Product::modif_discount_price(string s)
{
	discount_price = s;
}


/*根据原价和折扣系数和满减修改折扣后的价格*/
void Product::modify_discount_price()
{
	double price_temp = atof(price.c_str());
	double discount_temp = atof(discount.c_str());
	double discount_price_temp = price_temp * discount_temp;

	discount_price = to_string(discount_price_temp);
	
	if(full_off_flag == 1)// 有满减活动
	{
		if(atof(discount_price.c_str()) >= all_full)// 打完折后的钱达到满减的金额
			discount_price = to_string(atof(discount_price.c_str()) - all_off);
	}
}


/*修改产品描述*/
void Product::modify_description(string s)
{
	description = s;
}


/*输入产品名字*/
void Product::input_name()
{
	string temp_s;

	cout << "请输入产品名字:" << endl;
	cin >> temp_s;
	modify_name(temp_s);
}


// 输入产品数量
void Product::input_num()
{
	string temp_s;

	cout << "请输入产品数量：" << endl;
	cin >> temp_s;

	while(!judge_digits(temp_s))
	{
		cout << "输入数量不合法！请重新输入：" << endl;
		cin >> temp_s;
	}

	modify_num(temp_s);
}


// 输入产品价格
void Product::input_price()
{
	string temp_s;

	cout << "请输入产品价格，单位默认为元(例：18.2）" << endl;
	cin >> temp_s;

	while(!judge_decimal(temp_s))
	{
		cout << "输入价格不合法！请重新输入：" << endl;
		cin >> temp_s;
	} 

	modify_price(temp_s);
}


// 输入产品折扣系数
void Product::input_discount()
{
	string temp_s;
	double temp_b;
	
	cout << "请输入折扣系数：(0<系数<1)" << endl;
	cin >> temp_s;
	temp_b = atof(temp_s.c_str());

	while((temp_b>=1) || (temp_b<=0))
	{
		cout << "折扣系数输入不合法！请重新输入：" << endl;
		cin >> temp_s;
		temp_b = atof(temp_s.c_str());
	}

	modify_discount(temp_s);
}


// 输入产品描述
void Product::input_description()
{
	string temp_s;

	cout << "请输入产品描述:" << endl;
	cin >> temp_s;

	modify_description(temp_s);
}


/*添加产品*/
void Product::add(int id)
{
	string temp_s;

	// 产品ID
	ID = id;
	
	// 产品名字
	input_name();

	// 产品数量
	input_num();

	// 产品价格
	input_price();

	// 折扣系数
	input_discount();

	// 计算折扣价格
	modify_discount_price();

	// 产品描述
	input_description();
}


/*管理员修改产品信息*/
void Product::alter()
{
	int temp_i;
	bool flag = true;
	string temp_s;

	while(flag)
	{
		cout << "请选择要修改的信息的数字代号：" << endl;
		cout << "1. 数目" << endl;
		cout << "2. 价格" << endl;
		cout << "3. 折扣系数" << endl;
		cout << "4. 产品描述" << endl;
		cout << "0. 退出" << endl;
		cin >> temp_s;

		judge_in_range(temp_s, alter_begin, alter_end);
		temp_i = atoi(temp_s.c_str());

		switch(temp_i)
		{
			case 0:
				flag = false;
				break;

			case 1:
				input_num();
				break;

			case 2:
				input_price();
				break;

			case 3:
				input_discount();
				break;

			case 4:
				input_description();
				break;

			default:
				break;
		}


	}
}


// 显示商品信息
void Product::show()
{
	cout << "产品ID：" << endl;
	cout << "产品名称：" << name << endl;
	cout << "数量：" << num << endl;
	cout << "原价：" << price << endl;
	cout << "现价：" << discount_price << endl;
}
