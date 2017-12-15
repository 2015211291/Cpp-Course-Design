#include "food.h"
using namespace std;



/*构造函数*/
Food::Food()
{
	modify(0, food, "0", "0", "0", "0", "0");
	production_date = "0";
	quality_period = "0";
	weight = "0";
}


/*获得生产日期*/
string Food::get_production_date()
{
    return production_date;
}


/*获得保质期*/
string Food::get_quality_period()
{
    return quality_period;
}


/*获得生产日期*/
string Food::get_weight()
{
    return weight;
}


/*赋值运算符重载*/
void Food::operator= (Food &a) 
{
	modify(a.get_ID(), a.get_type(), a.get_name(), a.get_num(), 
		a.get_price(), a.get_discount(), 
		a.get_description());
	
	production_date = a.production_date;
	quality_period = a.quality_period;
	weight = a.weight; 

}


/*修改变量*/
void Food::modify_food(string a, string b, string c)
{
	production_date = a;
	quality_period = b;
	weight = c;
}


/*修改生产日期*/
void Food::modify_production_date(string s)
{
	production_date = s;
}


/*修改保质期*/
void Food::modify_quality_period(string s)
{
	quality_period = s;
}


/*修改重量*/
void Food::modify_weight(string s)
{
	weight = s;
}


/*输入生产日期*/
void Food::input_production_date()
{
	string temp_s;

	cout << "请输入生产日期(例：20170912)" << endl;
	cin >> temp_s;

	while(!judge_digits(temp_s))
	{
		cout << "输入生产日期不合法，请重新输入！" << endl;
		cin >> temp_s;
	}

	production_date = temp_s;

}


/*输入保质期*/
void Food::input_quality_period()
{
	string temp_s;

	cout << "请输入保质期,单位默认为天(例：120）" << endl;
	cin >> temp_s;

	while(!judge_digits(temp_s))
	{
		cout << "输入保质期不合法，请重新输入！" << endl;
		cin >> temp_s;
	}

	quality_period = temp_s;
}


/*输入重量*/
void Food::input_weight()
{
	string temp_s;

	cout << "请输入重量,单位默认为克，四舍五入到整数(例：158）" << endl;
	cin >> temp_s;

	while(!judge_digits(temp_s))
	{
		cout << "输入重量不合法，请重新输入！" << endl;
		cin >> temp_s;
	}

	weight = temp_s;
}


/*添加food*/
void Food::add_food(int id)
{
	string temp_s;
    
	// 产品类型
	modify_type(0);

	// 产品基本属性的输入
	add(id);

	// 生产日期
	input_production_date();

	// 保质期
	input_quality_period();

	// 重量
	input_weight();

	// 写入文件
	write();
}


/*将当前变量写入文件*/
void Food::write()
{
	fstream f("food.txt", ios_base::out | ios_base::app);

    f << get_ID() << endl;
	f << get_type() << endl;
	f << get_name() << endl;
	f << get_num() << endl;
	f << get_price() << endl;
	f << get_discount() << endl;
	f << get_discount_price() << endl;
	f << get_description() << endl;

	f << production_date << endl;
	f << quality_period << endl;
	f << weight << endl;

	f.close();
}


/*用当前变量更新文件中的信息*/
void Food::update()
{
    string s;
    int line_num = 0;
    fstream f("food.txt");
    
    // 统计行数
    while(!f.eof())
    {
        f >> s;
        line_num++;
    }
    line_num--;
    f.close();
    
    // 动态申请数组存放文件内容,一个string存一行
    string* s_info = new string[line_num];
    
    // 重新读取文件,存储内容
    f.open("food.txt");
    int i;
    
    // cout << "line_num: " << line_num << endl;
    for(i=0; i<line_num; i++)
    {    
        f >> s_info[i];
        // cout << "i: " << i << endl;

        // 检测到当前产品ID,用当前变量赋给数组，相当于修改原文件
        if((i % food_data_num == 0) && (s_info[i] == to_string(get_ID())))
        {
            f >> s;
            s_info[++i] = to_string(get_type());
            f >> s;
            s_info[++i] = get_name();
            f >> s;
            s_info[++i] = get_num();		
            f >> s;
            s_info[++i] = get_price();
            f >> s;
            s_info[++i] = get_discount();
            f >> s;
            s_info[++i] = get_discount_price();
            f >> s;
            s_info[++i] = get_description();
            f >> s;
            s_info[++i] = production_date;
            f >> s;
            s_info[++i] = quality_period;
           	f >> s;
            s_info[++i] = weight;
        }
        
    }

    f.close();
    
    // 向文件中覆盖写入信息
    ofstream file("food.txt", ios_base::trunc);
    
    for(i=0; i<line_num; i++)
        file << s_info[i] << endl;
    
    file.close();
    
    delete [] s_info;
    
}


/*删除该产品*/
void Food::remove()
{
	string s;
    int line_num = 0;
    fstream f("food.txt");
    
    // 统计行数
    while(!f.eof())
    {
        f >> s;
        line_num++;
    }
    line_num--;
    f.close();
    
    // 动态申请数组存放文件内容,一个string存一行,但该产品的数据不存
    string* s_info = new string[line_num];
    
    // 重新读取文件,把内容都存到数组中
    f.open("food.txt");
    int i = 0;
    
    for(int i=0; i<line_num; i++)
    {	
        f >> s_info[i];
    }
    f.close();
    
    // 向文件中覆盖写入信息,但检测到该变量的值不写入
    ofstream file("food.txt", ios_base::trunc);
    for(int i=0; i<line_num; i++)
    {

        if((i % food_data_num == 0) && (s_info[i] == to_string(get_ID())))
            i += food_data_num;
        file << s_info[i] << endl;
    }
   file.close();
   delete [] s_info;

}


/*根据原价和折扣系数以及满减修改折扣后的价格*/
void Food::modify_discount_price()
{

    Product::modify_discount_price();
}


/*显示商品信息*/
void Food::show()
{
    Product::show();

    cout << "生产日期：" << production_date << endl;
    cout << "保质期: " << quality_period <<" (天)" << endl;
    cout << "净含量：" << weight << " 克" << endl;
    cout << "产品概述：" << get_description() << endl;
}


/*显示订单中商品的信息，即仅改变数量*/
void Food::show_order(int n)
{
    Product::show_order(n);
    
    cout << "生产日期：" << production_date << endl;
    cout << "保质期: " << quality_period <<" (天)" << endl;
    cout << "净含量：" << weight << " 克" << endl;
    cout << "产品概述：" << get_description() << endl;
}


/*购买该food*/
bool Food::buy(int n)
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
