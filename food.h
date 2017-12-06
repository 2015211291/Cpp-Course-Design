#ifndef FOOD_H
#define FOOD_H
#include "product.h"


/*食物类*/
class Food: public Product
{
private:
	string production_date;// 生产日期
	string quality_period;// 保质期
	string weight;// 重量

public:
	/*构造函数*/
	Food();

	/*析构函数*/
	~Food(){}

	/*赋值运算符重载*/
	void operator= (Food &a) ;

	/*修改变量*/
	void modify_food(string a, string b, string c);
	
	/*修改生产日期*/
	void modify_production_date(string s);

	/*修改保质期*/
	void modify_quality_period(string s);

	/*修改重量*/
	void modify_weight(string s);
	
	/*添加food*/
    void add_food(int id);

    /*将当前变量写入文件*/
    void write();
    
    /*用当前变量更新文件*/
    void update();

    /*输入生产日期*/
    void input_production_date();

    /*输入保质期*/
    void input_quality_period();

    /*输入重量*/
    void input_weight();

    /*删除该产品*/
    void remove();

    /*购买该food n件*/
    bool buy(int n);

    /*根据原价和折扣系数以及满减修改折扣后的价格*/
	virtual void modify_discount_price();

	/*显示商品信息*/
    virtual void show();

};

#endif