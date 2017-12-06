#include "clothing.h"
using namespace std;


/*构造函数*/
Clothing::Clothing()
{
	modify(0, clothing, "0", "0", "0", "0", "0");
	size = XS;
	clothing_type = men;
	material = "0";
}


/*赋值运算符重载*/
void Clothing::operator= (Clothing &a) 
{
	modify(a.get_ID(), a.get_type(), a.get_name(), a.get_num(), 
		a.get_price(), a.get_discount(), 
		a.get_description());
	
	size = a.size;
	clothing_type = a.clothing_type;
	material = a.material; 

}


/*修改变量*/
void Clothing::modify_clothing(Clothing_size a, Clothing_type b, string c)
{
	size = a;
	clothing_type = b;
	material = c;
}


/*修改衣服尺码*/
void Clothing::modify_size(int s)
{
	size = Clothing_size(s);
}


/*修改衣服类型*/
void Clothing::modify_clothing_type(Clothing_type s)
{
	clothing_type = s;
}


/*修改衣服原料*/
void Clothing::modify_material(string s)
{
	material = s;
}


/*输入衣服尺码*/
void Clothing::input_size()
{
	string temp_s;
	
	cout << "衣服尺码数字代号如下：" << endl;
	cout << "0. XXS" << endl;
	cout << "1. XS" << endl;
	cout << "2. S" << endl;
	cout << "3. M" << endl;
	cout << "4. L" << endl;
	cout << "5. XL" << endl;
	cout << "6. XXL" << endl;
	cout << "7. XXXL" << endl;

	cin >> temp_s;
	while((!judge_digits(temp_s)) || (atoi(temp_s.c_str())<clothing_size_begin) 
		|| (atoi(temp_s.c_str())>clothing_size_end))
	{
		cout << "输入代码不合法！请重新输入：" << endl;
		cin >> temp_s;
	}
	size = Clothing_size(atoi(temp_s.c_str()));
}


/*输入衣服类型*/
void Clothing::input_clothing_type()
{
	string temp_s;

	cout << "衣服类型数字代号如下：" << endl;
	cout << "0. 男装" << endl;
	cout << "1. 女装" << endl;
	cout << "2. 童装" << endl;

	cin >> temp_s;
	while((!judge_digits(temp_s)) || (atoi(temp_s.c_str())<clothing_type_begin) 
		|| (atoi(temp_s.c_str())>clothing_type_end))
	{
		cout << "输入代码不合法！请重新输入：" << endl;
		cin >> temp_s;
	}
	clothing_type = Clothing_type(atoi(temp_s.c_str()));

}


/*输入衣服原料*/
void Clothing::input_material()
{
	string temp_s;

	cout << "请输入衣服原料：" << endl;
	cin >> temp_s;
	material = temp_s;
}


/* 添加clothing*/
 void Clothing::add_clothing(int id)
 {
 	string temp_s;
 	int flag = 1;

	// 产品类型
	modify_type(2);

	// 产品基本属性的输入
	add(id);

	// 衣服尺码
	input_size();

	// 衣服类型
	input_clothing_type();

	// 衣服原料
	input_material();

	// 写入文件
	write();
}


// 将当前变量写入文件
void Clothing::write()
{
	fstream f("clothing.txt", ios_base::out | ios_base::app);

    f << get_ID();
	f << get_type();
	f << get_name();
	f << get_num();
	f << get_price();
	f << get_discount();
	f << get_discount_price();
	f << get_description();

	f << size;
	f << clothing_type;
	f << material;

	f.close();
}


/*用当前变量更新文件中的信息*/
void Clothing::update()
{
    string s;
    int line_num = 0;
    fstream f("clothing.txt");
    
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
    f.open("clothing.txt");
    int i = 0;
    
    while(!f.eof())
    {	
        f >> s_info[i++];
        
        // 检测到当前银行卡号,用当前变量赋给数组，相当于修改原文件
        if(((i-1) % food_data_num == 0) && (s_info[i-1] == to_string(get_ID())))
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
            s_info[i++] = size;
            f >> s;
            s_info[i++] = clothing_type;
           	f >> s;
            s_info[i++] = material;
        }
        else
            f >> s_info[i++];
    }
    f.close();
    
    // 向文件中覆盖写入信息
    ofstream file("clothing.txt", ios_base::trunc);
    
    for(i=0; i<line_num; i++)
        file << s_info[i] << endl;
    
    file.close();
    
    delete [] s_info;
    
}


/*删除该产品*/
void Clothing::remove()
{
	string s;
    int line_num = 0;
    fstream f("clothing.txt");
    
    // 统计行数
    while(!f.eof())
    {
        f >> s;
        line_num++;
    }
    f.close();
    
    line_num -= clothing_data_num;

    // 动态申请数组存放文件内容,一个string存一行,但该产品的数据不存
    string* s_info = new string[line_num];
    
    // 重新读取文件,存储内容
    f.open("clothing.txt");
    int i = 0;
    
    while((!f.eof()) && (i < line_num))
    {	
        f >> s_info[i++];
        
        // 检测到当前产品名字,不存入数组
        if(((i-1) % clothing_data_num == 0) && (s_info[i-1] == to_string(get_ID())) )
        {
            for(int j=0; j<clothing_data_num-1; j++)
            	f >> s;
            	
       		i = i-1;
        }
        else
            f >> s_info[i++];
    }
    f.close();
    
    // 向文件中覆盖写入信息
    ofstream file("clothing.txt", ios_base::trunc);
    
    for(i=0; i<line_num; i++)
        file << s_info[i] << endl;
    
    file.close();
    
    delete [] s_info;

}


/*根据原价和折扣系数以及满减修改折扣后的价格*/
void Clothing::modify_discount_price()
{

    double price_temp = atof(get_price().c_str());
    double discount_temp = atof(get_discount().c_str());
    double discount_price_temp = price_temp * discount_temp;

    modif_discount_price(to_string(discount_price_temp));

    switch(full_off_flag)
    {
        // 全场满减
        case 1:
            // 打完折后的钱达到满减的金额
            if(atof(get_discount_price().c_str()) >= all_full)
                modif_discount_price(to_string(
                    atof(get_discount_price().c_str()) - all_off));
            break;

        // 图书类满减
        case 3:
            // 打完折后的钱达到满减的金额
             if(atof(get_discount_price().c_str()) >= clothing_full)
                 modif_discount_price(to_string(atof(
                    get_discount_price().c_str()) - clothing_off));
             break;

        default:
            break;
    }
}


/*显示商品信息*/
void Clothing::show()
{
    Product::show();

    cout << "尺码：" ;
    switch(size)
    {
        case 0:
            cout << "XXS" << endl;
            break;

        case 1:
            cout << "XS" << endl;
            break;

        case 2:
            cout << "S" << endl;
            break;

        case 3:
            cout << "M" << endl;
            break;

        case 4:
            cout << "L" << endl;
            break;

        case 5:
            cout << "XL" << endl;
            break;

        case 6:
            cout << "XXL" << endl;
            break;

        case 7:
            cout << "XXXL" << endl;
            break;

        default:
            break; 
    }

    cout << "衣服类型：" ;
    switch(clothing_type)
    {
        case 0:
            cout << "男装" << endl;
            break;

        case 1:
            cout << "女装" << endl;
            break;

        case 2:
            cout << "童装" << endl;
            break;

        default:
            break;
    }

    cout << "原料：" << material << endl;
}


/*购买该clothing*/
bool Clothing::buy(int n)
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
        return true;
    }
}