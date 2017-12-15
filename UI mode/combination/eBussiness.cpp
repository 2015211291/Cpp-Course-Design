#include "eBussiness.h"
using namespace std;

eBussiness eBuss;

/*全场满减,满100减10*/
int all_full;
int all_off;

/*食品满减，满250减50*/
int food_full;
int food_off;

/*图书满减，满200减100*/
int book_full;
int book_off ;

/*衣服满减，满300减100*/
int clothing_full;
int clothing_off;

/*记录条数*/
int erecord_num;

/*记录指针*/
string* erecord;


/*检错并纠正，temp_s所表示的数字是否是数字且是否在范围内*/
bool judge_in_range(string& temp_s, int begin, int end)
{
	if((!judge_digits(temp_s)) || (atof(temp_s.c_str())<begin) 
		|| (atof(temp_s.c_str())>end))
		return false;
    else
        return true;
}


/*判断一个string变量里存储的字符是否是整数字符*/
bool judge_digits(string s)
{
	for(int i=0; i<s.length(); i++)
	{
		int temp = s[i] - '0';

		if((temp < 0) || (temp > 9))
			return false;
	}

	return true;
}


/*判断一个string变量里存储的字符是否是小数或整数字符*/
bool judge_decimal(string s)
{
	int dot = -1;

	for(int i=0; i<s.length(); i++)
		if(s[i] == '.')
			dot = i;

	if(dot == -1)
		return judge_digits(s);
	else
		return judge_digits(s.substr(0, dot)) && judge_digits(s.substr(dot + 1));
}


/*在string中寻找某个字符，返回它的第一个的位置；若没有，返回-1*/
int find_in_string(char c, string s)
{
    for(int i=0; i<s.length(); i++)
        if(s[i] == c)
            return i;
    return -1;
}


/*构造*/
eBussiness::eBussiness()
{
	user_index = "0";
	user_password = "0";
	admi_index = "0";
	admi_password = "0";
	food_num = 0;
	book_num = 0;
	clothing_num = 0;
	order_num = 0;

	food = new Food[Max];
	book = new Book[Max];
	clothing = new Clothing[Max];
	order = new Order[Max];
	current_food_max = Max;
	current_book_max = Max;
	current_clothing_max = Max;
	current_order_max = Max;

	read_food();
	read_book();
	read_clothing();
    read_ID_num();
}


/*析构*/
eBussiness::~eBussiness()
{
	delete [] food;
	delete [] book;
	delete [] clothing;
	delete [] order;
    write_ID_num();
};


/*修改food数组*/
void eBussiness::modify_food(Food* s)
{
    Food* temp = food;
    food = s;
    delete [] temp;
}


/*修改book数组*/
void eBussiness::modify_book(Book* s)
{
    Book* temp = book;
    book = s;
    delete [] temp;
}


/*修改clothing数组*/
void eBussiness::modify_book(Clothing* s)
{
    Clothing* temp = clothing;
    clothing = s;
    delete [] temp;
}


/*扩展food数组*/
void eBussiness::resize_food(Food*& food)
{
	Food* temp = new Food[current_food_max + Max];
	for(int i=0; i<food_num; i++)
	{
		temp[i] = food[i];
	}

	current_food_max += Max;
	delete [] food;
	food = temp;
}


/*扩展book数组*/
void eBussiness::resize_book(Book*& book)
{
	Book* temp = new Book[current_book_max + Max];
	for(int i=0; i<book_num; i++)
	{
		temp[i] = book[i];
	}

	current_book_max += Max;
	delete [] book;
	book = temp;
}


/*修改用户名*/
void eBussiness::modify_user_index(string s)
{
    user_index = s;
}


/*修改用户密码*/
void eBussiness::modify_user_password(string s)
{
    user_password = s;
}


/*修改管理员用户名*/
void eBussiness::modify_admi_index(string s)
{
    admi_index = s;
}


/*修改管理员密码*/
void eBussiness::modify_admi_password(string s)
{
    admi_password = s;
}


/*清空订单*/
void eBussiness::clean_order()
{
    order_num = 0;
}


/*获得订单中商品种类的数量*/
int eBussiness::get_order_num()
{
    return order_num;
}


/*获得用户名*/
string eBussiness::get_user_index()
{
    return user_index;
}


/*获得用户密码*/
string eBussiness::get_user_password()
{
    return user_password;
}


/*获得管理员用户名*/
string eBussiness::get_admi_index()
{
    return admi_index;
}


/*获得管理员密码*/
string eBussiness::get_admi_password()
{
    return admi_password;
}


/*获得食物数量*/
int eBussiness::get_food_num()
{
    return food_num;
}


/*获得图书数量*/
int eBussiness::get_book_num()
{
    return book_num;
}


/*获得衣服数量*/
int eBussiness::get_clothing_num()
{
    return clothing_num;
}


/*获得食物数组*/
Food* eBussiness::get_food()
{
    return food;
}


/*获得图书数组*/
Book* eBussiness::get_book()
{
    return book;
}


/*获得衣服数组*/
Clothing* eBussiness::get_clothing()
{
    return clothing;
}


/*获得订单数组*/
Order* eBussiness::get_order()
{
    return order;
}


/*扩展clothing数组*/
void eBussiness::resize_clothing(Clothing*& clothing)
{
	Clothing* temp = new Clothing[current_clothing_max + Max];
	for(int i=0; i<clothing_num; i++)
	{
		temp[i] = clothing[i];
	}

	current_clothing_max += Max;
	delete [] clothing;
	clothing = temp;
}


/*扩展order数组*/
void eBussiness::resize_order(Order*& order)
{
	Order* temp = new Order[current_order_max + Max];
	for(int i=0; i<order_num; i++)
	{
		temp[i] = order[i];
	}

	current_order_max += Max;
	delete [] order;
	order = temp;
}


/*输入密码*/
string eBussiness::input_password()
{
    string password_temp;
    
    cout << "请输入密码(" << password_begin << "～"
    << password_end << "位）：" << endl;
    cin >> password_temp;
    
    // 密码位数不合法
    while((password_temp.length()<password_begin) ||
          (password_temp.length()>password_end))
    {
        cout << "密码位数不合法！请重新输入：" << endl;
        cin >> password_temp;
    }
    
    return password_temp;
}


/*校验密码是否正确*/
/*flag=0, 用户密码*/
/*flag=1, 管理员密码*/
bool eBussiness::judge_password(int flag)
{
    string password_temp;
    password_temp = input_password();
    
    if(flag == 0)
    {
	    if(password_temp == user_password)
	    {
	        cout << "校验成功！" << endl;
	        return true;
	    }
	    else
	    {
	        cout << "校验失败！" << endl;
	        return false;
	    }
	}
	else
	{
		if(password_temp == admi_password)
	    {
	        cout << "校验成功！" << endl;
	        return true;
	    }
	    else
	    {
	        cout << "校验失败！" << endl;
	        return false;
	    }
	}
}


/*注册用户,并把信息写入文件*/
void eBussiness::enroll()
{
    
    /*图形化待完善*/
    /*输入用户名*/
    cout << "请输入用户名：" << endl;
    cin >> user_index;
    
    /*输入密码*/
    user_password = input_password();
    
    cout << "注册成功!" << endl;
    
    /*将信息写入文件*/
    fstream f_user("euser_information.txt", ios_base::out | ios_base::app);
    
    f_user << user_index << endl;
    f_user << user_password << endl;
    
    f_user.close();
    
}


/*用户登录*/
void eBussiness::log_in_user()
{
    string index_temp;
    int choosed_code = -1;
    int category, id, num;
    
    // 输入用户名
    cout << "请输入用户名：" << endl;
    cin >> user_index;
    
    // 校验用户名，存在则继续校验密码，否则报错
    if(find_user(user_index, 0))// 存在,校验密码
    {
        // 密码不正确，重新输入，直至正确
        while(!judge_password(0))
        {
            cout << "密码不正确！请重新输入。" << endl;
        }
        
        
        // 输入并校验密码,若成功
        cout << "您已成功登录！" << endl;
        
        while(choosed_code != 0)
        {
            // 各种操作选项
            cout << "请选择操作:" << endl;
            cout << "0. 退出" << endl;
            cout << "1. 浏览商品" << endl;
            cout << "2. 购物" << endl;
            cout << "3. 查看购物车" << endl;
            cout << "4. 删除购物车中的商品" << endl;
            cout << "5. 提交订单" << endl;
            
            cin >> choosed_code;
            
            switch(choosed_code)
            {
                    // 退出
                case 0:
                    cout << "您已成功退出！" << endl;
                    break;
                    
                    // 浏览商品
                case 1:
                    show();
                    break;
                    
                    // 购物
                case 2:
                {
                	cout << "请输入要购买的商品种类：" << endl;
                	cout << "1. 食物" << endl;
                	cout << "2. 图书" << endl;
                	cout << "3. 衣服" << endl;
                	cin >> category;
                	cout << "请输入要购买的物品的ID: " << endl;
                	cin >> id;

                	buy(category, id);
                    break;
                }  
                    
                    //  查看购物车
                case 3:
                {
                    output_order();
                    break;
                }

                	// 删除购物车中的商品
                case 4:
                {
                	remove_from_order();
                    break;
                }
                    
                   // 提交订单
                case 5:
                {
                    submit_order();
                    break;
                }
                    
                    // 输入代码错误
                default:
                    cout << "请输入正确的数字代号！" << endl;
                    break;
                    
            }
            
        }
        
    }
    
    // 查询不到用户名
    else
        cout << "用户名不存在！" << endl;
    
}


/*管理员登录*/
void eBussiness::log_in_admi()
{
	string index_temp;
    int choosed_code = -1;
    int category, id, num;
    
    // 输入用户名
    cout << "请输入用户名：" << endl;
    cin >> admi_index;
    
    // 校验用户名，存在则继续校验密码，否则报错
    if(find_admi(admi_index, 0))// 存在,校验密码
    {
        // 密码不正确，重新输入，直至正确
        while(!judge_password(1))
        {
            cout << "密码不正确！请重新输入。" << endl;
        }
        
        
        // 输入并校验密码,若成功
        cout << "您已成功登录！" << endl;
        
        while(choosed_code != 0)
        {
            // 各种操作选项
            cout << "请选择操作:" << endl;
            cout << "0. 退出" << endl;
            cout << "1. 浏览商品" << endl;
            cout << "2. 添加商品" << endl;
            cout << "3. 删除商品" << endl;
            cout << "4. 修改商品" << endl;
            cout << "5. 开启满减" << endl;
            
            cin >> choosed_code;
            
            switch(choosed_code)
            {
                    // 退出
                case 0:
                    cout << "您已成功退出！" << endl;
                    break;
                    
                    // 浏览商品
                case 1:
                    show();
                    break;
                    
                    // 添加商品
                case 2:
                {
                	add();
                    break;
                }  
                    
                    // 删除商品
                case 3:
                {
                	remove();
                    break;
                }  

                	// 修改商品
                case 4:
                {
                	modify_commodity();
                    break;
                }  

                	// 开启满减
                case 5:
                {
                	start_full_off();
                    break;
                }  
                default:
                    cout << "请输入正确的数字代号！" << endl;
                    break;
                    
            }
            
        }
        
    }
    
    // 查询不到用户名
    else
    {
        cout << "用户名不存在！" << endl;
    }
}


/*开启满减活动*/
void eBussiness::start_full_off()
{
	int choosed_code;

	// 各种操作选项
    cout << "请选择操作:" << endl;
    cout << "0. 退出" << endl;
    cout << "1. 全场满减" << endl;
    cout << "2. 食物满减" << endl;
    cout << "3. 图书满减" << endl;
    cout << "4. 衣服满减" << endl;

    cin >> choosed_code;

    switch(choosed_code)
    {
    	// 退出
    	case 0:
    		break;

    	// 全场满减
    	case 1:
    		full_off_flag_all = 1;
    		break;

    	// 食物满减
    	case 2:
    		full_off_flag_food = 2;
    		break;

    	// 图书满减
    	case 3:
    		full_off_flag_book = 3;
    		break;

    	// 衣服满减
    	case 4:
    		full_off_flag_clothing = 4;
    		break;

    	// 错误代号处理
    	default:
    		cout << "请输入正确的数字代号！" << endl;
            break;
    }

}


/*修改商品信息*/
void eBussiness::modify_commodity()
{
	int category, id, index;

	cout << "请输入要修改的商品种类：" << endl;
    cout << "0. 退出" << endl;
	cout << "1. 食物" << endl;
	cout << "2. 图书" << endl;
	cout << "3. 衣服" << endl;
	cin >> category;
	
	switch(category)
	{
        // 退出
        case 0:
            break;
            
		// 修改食物
		case 1:
		{
            cout << "请输入要修改的物品的ID: " << endl;
            cin >> id;
			index = find_food(id);
            if(index != -1)
            {
                food[index].alter();
                food[index].update();
            }
            else
                cout << "没有此商品！" << endl;
            break;
		}

		// 修改图书
		case 2:
		{
            cout << "请输入要修改的物品的ID: " << endl;
            cin >> id;
			index = find_book(id);
            if(index != -1)
            {
                book[index].alter();
                book[index].update();
            }
            else
                cout << "没有此商品！" << endl;
            break;

		}

		// 修改衣服
		case 3:
		{
            cout << "请输入要修改的物品的ID: " << endl;
            cin >> id;
			index = find_clothing(id);
            if(index != -1)
            {
                clothing[index].alter();
                clothing[index].update();
            }
            else
                cout << "没有此商品！" << endl;
            break;
		}

		// 错误代号处理
		default:
	        cout << "请输入正确的数字代号！" << endl;
	        break;
	}
}


/*id代表查询哪类信息，id的值是类中定义的次序.如id=0代表查询用户名*/
/*查到后，把该用户的信息读入类中,并返回true*/
/*否则，返回false*/
bool eBussiness::find_user(string tmp, int id)
{
    fstream f_user("euser_information.txt");
    string sr[user_data_num];
    bool flag = 0;// 查到置为1
    
    if(f_user)// 文件存在
    {
        while(!f_user.eof())
        {
        	// 以用户的每user_data_num个数据为单位循环
            for(int i=0; i<user_data_num; i++)
            {
                f_user >> sr[i];
                
                if((sr[i] == tmp) && (i==id))// 查到对应信息
                    flag = 1;
            }
            
            if(flag)// 查到则读入类中
            {
                user_index = sr[0];// 用户名
                user_password = sr[1];// 密码
                
                f_user.close();
                return true;
            }
        }
        
        f_user.close();
        return false;
    }
    else
    {
        cout << "用户信息文件不存在！" << endl;
        return false;
    }
}


/*id代表查询哪类信息，id的值是类中定义的次序.如id=0代表查询用户名*/
/*查到后，把该管理员的信息读入类中,并返回true*/
/*否则，返回false*/
bool eBussiness::find_admi(string tmp, int id)
{
	fstream f_admi("eadmi_information.txt");
    string sr[admi_data_num];
    bool flag = 0;// 查到置为1
    
    if(f_admi)// 文件存在
    {
        while(!f_admi.eof())
        {
        	// 以用户的每admi_data_num个数据为单位循环
            for(int i=0; i<admi_data_num; i++)
            {
                f_admi >> sr[i];
   
                if((sr[i] == tmp) && (i==id))// 查到对应信息
                    flag = 1;
            }
            
            if(flag)// 查到则读入类中
            {
                admi_index = sr[0];// 用户名
                admi_password = sr[1];// 密码
                
                f_admi.close();
                return true;
            }
        }
        
        f_admi.close();
        return false;
    }
    else
    {
        cout << "用户信息文件不存在！" << endl;
        return false;
    }

}


/*删除商品*/
void eBussiness::remove()
{
	int goods_code;
	int index;
	int id;

	cout << "可删除的商品名称和数字代号如下：" << endl;
	cout << "1. 食物" << endl;
	cout << "2. 图书" << endl;
	cout << "3. 服装" << endl;
     cout << "0. 退出" << endl;
	cout << "请选择要删除的商品类型的代号: " << endl;

	cin >> goods_code;

	cout << "请输入商品的ID:" << endl;
	cin >> id;

	switch(goods_code)
	{
        // 退出
        case 0:
            break;
            
		// 删除食物商品
		case 1:
			index = find_food(id);
			if(index != -1)
			{
				food[index].remove();
				read_food();
				cout << "删除成功！" << endl;
			}
			else
			{
				cout << "没有此商品！" << endl;
			}
			break;

		// 删除图书商品
		case 2:
			index = find_book(id);
			if(index != -1)
			{
				book[index].remove();
				read_book();
				cout << "删除成功！" << endl;
			}
			else
			{
				cout << "没有此商品！" << endl;
			}
			break;

		// 删除衣服商品
		case 3:
			index = find_clothing(id);
			if(index != -1)
			{
				clothing[index].remove();
				read_clothing();
				cout << "删除成功！" << endl;
			}
			else
			{
				cout << "没有此商品！" << endl;
			}
			break;

		default:
			cout << "输入代号不合法，请重新输入！" << endl;
			break;
	}

}


/*删除商品*/
/*1,food;2,book;3,clothing*/
void eBussiness::remove(int category, int id)
{
    int goods_code = category;
    int index;

    switch(goods_code)
    {
            
        // 删除食物商品
        case 1:
            index = find_food(id);
            if(index != -1)
            {
                food[index].remove();
                read_food();
                cout << "删除成功！" << endl;
            }
            else
            {
                cout << "没有此商品！" << endl;
            }
            break;

        // 删除图书商品
        case 2:
            index = find_book(id);
            if(index != -1)
            {
                book[index].remove();
                read_book();
                cout << "删除成功！" << endl;
            }
            else
            {
                cout << "没有此商品！" << endl;
            }
            break;

        // 删除衣服商品
        case 3:
            index = find_clothing(id);
            if(index != -1)
            {
                clothing[index].remove();
                read_clothing();
                cout << "删除成功！" << endl;
            }
            else
            {
                cout << "没有此商品！" << endl;
            }
            break;

        default:
            cout << "输入代号不合法，请重新输入！" << endl;
            break;
    }
}


/*读取food文件中的信息*/              							
bool eBussiness::read_food()
{
	int lines = 0;
	int food_count = 0;
	int temp_num;
	string s;
	fstream f("food.txt");
    
	if(!f)// 文件不存在
	{
		cout << "food文件不存在！" << endl;
		return false;
	}
	else
	{
		// 先统计行数，从而确定food实例的个数
		while(!f.eof())
		{
			f >> s;
			lines++;
		}
		f.close();																	
        lines--;
        
		temp_num = lines / food_data_num;// 求出实例个数
		if(temp_num >= current_food_max)// 实例个数大于当前数组大小，则扩展数组
			resize_food(food);
		food_num = temp_num;
        
        f.open("food.txt");
        
		while(!f.eof())
		{
			for(food_count=0; food_count<food_num; food_count++)
			{
				f >> s;
				food[food_count].modify_ID(atoi(s.c_str()));
				f >> s;
				food[food_count].modify_type(Type(atoi(s.c_str())));
				f >> s;
				food[food_count].modify_name(s);
				f >> s;
				food[food_count].modify_num(s);
				f >> s;
				food[food_count].modify_price(s);
				f >> s;
				food[food_count].modify_discount(s);
				f >> s;
				food[food_count].modify_discount_price();
				f >> s;
				food[food_count].modify_description(s);
				f >> s;
				food[food_count].modify_production_date(s);
				f >> s;
				food[food_count].modify_quality_period(s);
				f >> s;
				food[food_count].modify_weight(s);
			}
            
            if(food_count == food_num)
                break;

		}
		f.close();
      
		return true;

	}
}


/*读取book文件中的信息*/              							
bool eBussiness::read_book()
{																					
	int lines = 0;
	int book_count = 0;
	int temp_num;
	string s;
	fstream f("book.txt");

	if(!f)// 文件不存在
	{
		cout << "book文件不存在！" << endl;
		return false;
	}
	else
	{
        
		// 先统计行数，从而确定book实例的个数
		while(!f.eof())
		{
			f >> s;
			lines++;
		}
		f.close();
        lines--;

		temp_num = lines / book_data_num;// 求出实例个数
		if(temp_num >= current_book_max)// 实例个数大于当前数组大小，则扩展数组
			resize_book(book);
		book_num = temp_num;

		f.open("book.txt");
		while(!f.eof())
		{
            
			for(book_count=0; book_count<book_num; book_count++)
			{
				f >> s;
				book[book_count].modify_ID(atoi(s.c_str()));
				f >> s;
				book[book_count].modify_type(Type(atoi(s.c_str())));
				f >> s;
				book[book_count].modify_name(s);
				f >> s;
				book[book_count].modify_num(s);
				f >> s;
				book[book_count].modify_price(s);
				f >> s;
				book[book_count].modify_discount(s);
				f >> s;
				book[book_count].modify_discount_price();
				f >> s;
				book[book_count].modify_description(s);
				f >> s;
				book[book_count].modify_publication_date(s);
				f >> s;
				book[book_count].modify_author(s);
				f >> s;
                book[book_count].modify_press(s);
			}
            
            if(book_count == book_num)
                break;

		}
		f.close();

		return true;

	}
}	


/*读取clothing文件中的信息*/              							
bool eBussiness::read_clothing()
{																					
	int lines = 0;
	int clothing_count = 0;
	int temp_num;
	string s;
	fstream f("clothing.txt");

	if(!f)// 文件不存在
	{
		cout << "clothing文件不存在！" << endl;
		return false;
	}
	else
	{
		// 先统计行数，从而确定clothing实例的个数
		while(!f.eof())
		{
			f >> s;
			lines++;
		}
		f.close();
        lines--;
        
		temp_num = lines / clothing_data_num;// 求出实例个数
		if(temp_num >= current_clothing_max)// 实例个数大于当前数组大小，则扩展数组
			resize_clothing(clothing);
		clothing_num = temp_num;
        
		f.open("clothing.txt");
		while(!f.eof())
		{
			for(clothing_count=0; clothing_count<clothing_num; clothing_count++)
			{
				f >> s;
				clothing[clothing_count].modify_ID(atoi(s.c_str()));
				f >> s;
				clothing[clothing_count].modify_type(Type(atoi(s.c_str())));
				f >> s;
				clothing[clothing_count].modify_name(s);
				f >> s;
				clothing[clothing_count].modify_num(s);
				f >> s;
				clothing[clothing_count].modify_price(s);
				f >> s;
				clothing[clothing_count].modify_discount(s);
				f >> s;
				clothing[clothing_count].modify_discount_price();
				f >> s;
				clothing[clothing_count].modify_description(s);
				f >> s;
				clothing[clothing_count].modify_size(atoi(s.c_str()));
				f >> s;
				clothing[clothing_count].modify_clothing_type( 
				Clothing_type(atoi(s.c_str())));
				f >> s;
				clothing[clothing_count].modify_material(s);
			}
            
            if(clothing_count == clothing_num)
                break;

		}
		f.close();

		return true;

	}
}	


/*添加商品*/
void eBussiness::add()
{
	int goods_code;
	int flag = 1;

	cout << "可添加的商品名称和数字代号如下：" << endl;
	cout << "1. 食物" << endl;
	cout << "2. 图书" << endl;
	cout << "3. 服装" << endl;
    cout << "0. 退出" << endl;
	cout << "请选择要添加的商品类型的代号" << endl;

	while(flag)
	{
		cin >> goods_code;
		switch(goods_code)
		{
            // 退出
            case 0:
                break;
                
			// 添加食物商品
			case 1:
				if((food_num+1) >= current_food_max )
					resize_food(food);
				food[food_num++].add_food(ID_num++);
				flag = 0;
				break;

			// 添加图书商品
			case 2:
				if((book_num+1) >= current_book_max == 0)
					resize_book(book);
				book[book_num++].add_book(ID_num++);
				flag = 0;
				break;

			// 添加衣服商品
			case 3:
				if((clothing_num+1) >= current_clothing_max == 0)
					resize_clothing(clothing);
				clothing[clothing_num++].add_clothing(ID_num++);
				flag = 0;
				break;

			// 错误代号处理
			default:
				cout << "输入代号不合法，请重新输入！" << endl;
				break;
		}
	}
}


/*显示所有食物商品*/
void eBussiness::show_food()
{
    if(food_num > 0)
    {
        cout << "所有食物商品如下：" << endl;
        for(int i=0; i<food_num; i++)
        {
            cout << i << "." << endl;
            food[i].show();
            cout << endl << endl;
        }
    }
}


/*显示所有图书商品*/
void eBussiness::show_book()
{
    if(book_num > 0)
    {
        cout << "所有图书商品如下：" << endl;
        for(int i=0; i<book_num; i++)
        {
            cout << i << "." << endl;
            book[i].show();
            cout << endl << endl;
        }
    }
}


/*显示所有衣服商品*/
void eBussiness::show_clothing()
{
    if(clothing_num > 0)
    {
        cout << "所有衣服商品如下：" << endl;
        for(int i=0; i<clothing_num; i++)
        {
            cout << i << "." << endl;
            clothing[i].show();
            cout << endl << endl;
        }
    }
}


/*显示所有商品*/
void eBussiness::show()
{
	show_food();
	show_book();
	show_clothing();
}


/*寻找id对应的food，并返回索引，找不到返回-1*/
int eBussiness::find_food(int id)
{
	for(int i=0; i<food_num; i++)
	{
		if(food[i].get_ID() == id)
			return i;
	}

	return -1;
}


/*寻找id对应的book，并返回索引，找不到返回-1*/
int eBussiness::find_book(int id)
{
	for(int i=0; i<book_num; i++)
		if(book[i].get_ID() == id)
			return i;

	return -1;
}


/*寻找id对应的clothing，并返回索引，找不到返回-1*/
int eBussiness::find_clothing(int id)
{
	for(int i=0; i<clothing_num; i++)
		if(clothing[i].get_ID() == id)
			return i;

	return -1;
}


/*购买*/
/*i=1,购买food;i=2,购买book;i=3,购买clothing*/
/*id表示具体商品的唯一标识*/
/*n表示购买数目*/
void eBussiness::buy(int i,  int id)
{
	int index;
    int n;
    
	switch(i)
	{
		// 购买食物
		case 1:
		{
			index = find_food(id);
			if(index == -1)
				cout << "没有此商品！" << endl;
			else
			{
                cout << "请输入要购买的数量： " << endl;
                cin >> n;
				if(food[index].buy(n))// 当库存量支撑此次购买时,加入订单
				{
					add_to_order(0, id, n, 
                                 n * atoi(food[index].get_discount_price().c_str()));
					cout << "已添加至购物车！" << endl;
				}
			}
			break;
		}
		// 购买图书
		case 2:
		{
			index = find_book(id);
			if(index == -1)
				cout << "没有此商品！" << endl;
			else
			{
                cout << "请输入要购买的数量： " << endl;
                cin >> n;
				if(book[index].buy(n))// 当库存量支撑此次购买时,加入订单
				{
					add_to_order(1, id, n, 
						n * atoi(book[index].get_discount_price().c_str()));
					cout << "已添加至购物车！" << endl;
				}
			}
			break;
		}

		// 购买衣服
		case 3:
		{
			index = find_clothing(id);
			if(index == -1)
				cout << "没有此商品！" << endl;
			else
			{
                cout << "请输入要购买的数量： " << endl;
                cin >> n;
				if(clothing[index].buy(n))// 当库存量支撑此次购买时,加入订单
				{
					add_to_order(2, id, n, 
						n * atoi(clothing[index].get_discount_price().c_str()));
					cout << "已添加至购物车！" << endl;
				}
			}
			break;
		}

		// 错误代号处理
		default:
			cout << "输入了不合法的代号！" << endl;
			break;
	}
}


/*购买*/
/*i=1,购买food;i=2,购买book;i=3,购买clothing*/
/*id表示具体商品的唯一标识*/
/*n表示购买数目*/
void eBussiness::buy(int i,  int id, int num)
{
    int index;
    int n;
    
    switch(i)
    {
        // 购买食物
        case 1:
        {
            index = find_food(id);
            food[index].buy(num);
            add_to_order(0, id, num, 
                         num * atoi(food[index].get_discount_price().c_str()));       
            break;
        }

        // 购买图书
        case 2:
        {
            index = find_book(id);
            book[index].buy(num);
            add_to_order(1, id, num, 
                num * atoi(book[index].get_discount_price().c_str()));       
            break;
        }

        // 购买衣服
        case 3:
        {
            index = find_clothing(id); 
            clothing[index].buy(num);
            add_to_order(2, id, num, 
                num * atoi(clothing[index].get_discount_price().c_str()));      
            break;
        }

        default:  
            break;
    }
}


/*将当前ID_num写入文件*/
void eBussiness::write_ID_num()
{
	// 向文件中覆盖写入信息
    ofstream f("ID_num.txt", ios_base::trunc);

	f << ID_num;
	f.close();
}


/*读取ID_num*/
void eBussiness::read_ID_num()
{
	fstream f("ID_num.txt");

	f >> ID_num;
	f.close();
}


/*提交订单*/
void eBussiness::submit_order()
{
	double all_price;

	if(order_num == 0)// 订单中还没有商品
		cout << "您还没有向购物车加入商品！" << endl;
	else
	{
		output_order();// 输出订单

		// 计算总价
		all_price = cal_all_price();
		cout << "您应付的总金额：" << all_price << endl;
	}

}


/*计算订单中商品的总价，考虑满减*/
double eBussiness::cal_all_price()
{
	double all_price = 0;
	double food_price = 0;
	double book_price = 0;
	double clothing_price = 0;

	for(int i=0; i<order_num; i++)
	{
		switch(order[i].category)
		{
			// 食物
			case 0:
				food_price += order[i].price;
				break;

			// 图书
			case 1:
				book_price += order[i].price;
				break;

			// 衣服
			case 2:
				clothing_price += order[i].price;
				break;

			default:
				break;
		}
	}


	// 满减规则
	// 打折后的商品总价满足某类商品则满减
	// 若还有全场满减，则各类商品满减后的总价参与全场满减
	
	// 食物满减
	if(full_off_flag_food && (food_price>food_full))
		food_price -= food_off;

	// 图书满减
	if(full_off_flag_book && (book_price>book_full))
		book_price -= book_off;

	// 衣服满减
	if(full_off_flag_clothing && (clothing_price>clothing_full))
		clothing_price -= clothing_off;
	
	// 全场满减
	all_price = food_price + book_price + clothing_price;
	if(full_off_flag_all && (all_price>all_full))
		all_price -= all_off;

	return all_price;
}


/*输出订单*/
void eBussiness::output_order()
{
	int index;
    
    if(order_num == 0)
    	cout << "您的购物车是空的！" << endl;
    else
    {
		cout << "您的订单如下： " << endl;
		for(int i=0; i<order_num; i++)
		{
			switch(order[i].category)
			{
				// 食品类
				case 0:
					cout << "类别： 食品" << endl;
					index = find_food(order[i].ID);
					food[index].show_order(order[i].num);
					break;

				// 图书类
				case 1:
					cout << "类别： 图书" << endl;
					index = find_book(order[i].ID);
					book[index].show_order(order[i].num);
					break;

				// 衣服类
				case 2:
					cout << "类别： 衣服" << endl;
					index = find_clothing(order[i].ID);
					clothing[index].show_order(order[i].num);
					break;

				default:
					break;
			}
		}
	}

}


/*将商品加入订单*/
/*类别，ID, 数量，总价*/
/*有查重合并功能*/
void eBussiness::add_to_order(int category, int id, int num, int price)
{
	int flag = 1;// 标识这个商品之前有没有添加到订单中

	// 先查重
	// 之前有重复的，则修改数量和总价
	for(int i=0; i<order_num; i++)
		if(order[i].ID == id)
		{
			flag = 0;
			order[i].num += num;
			order[i].price += price;
		}

	// 如果之前没重复的，创建新的订单
	if(flag)
	{
		order[order_num].category = category;
		order[order_num].ID = id;
		order[order_num].num = num;
		order[order_num].price = price;
		order_num++;
	}

}


 /*删除购物车的商品*/
void eBussiness::remove_from_order()
{
	int id, num;
	int index = -1;
	int flag = 0;
    int temp_num;

	cout << "请输入要删除的商品的ID: " << endl;
	cin >> id;

	for(int i=0; i<order_num; i++)
	{
		if(id == order[i].ID)
		{
			flag = 1;
			cout << "请输入删除的数量：" << endl;
			cin >> num;

			if(num > order[i].num)
			{
				cout << "数量输入错误！购物车中该商品仅有" << order[i].num << "件！" << endl;			
			}
			else
			{
				// 更改订单中的商品数量信息
				order[i].num -= num;
			
				// 更改类及文件中的商品数量信息
				switch(order[i].category)
				{
					// 食物
					case 0:
					{
						index = find_food(order[i].ID);
                        temp_num = atoi(food[index].get_num().c_str()) + num;
						food[index].modify_num(to_string(temp_num));
						food[index].update();
						break;
					}

					// 图书
					case 1:
					{
						index = find_book(order[i].ID);
                        temp_num = atoi(food[index].get_num().c_str()) + num;
						book[index].modify_num(to_string(temp_num));
						book[index].update();
						break;
					}

					// 衣服
					case 2:
					{
						index = find_clothing(order[i].ID);
                        temp_num = atoi(food[index].get_num().c_str()) + num;
						clothing[index].modify_num(to_string(temp_num));
						clothing[index].update();
						break;
					}

					default:
						break;

				}

				if(order[i].num == 0)
					update_order();

				cout << "删除成功！" << endl;
			}

			break;
		}
	}

	if(!flag)
		cout << "购物车中没有该商品！" << endl;
}


/*删除购物车的商品*/
void eBussiness::remove_from_order(int id, int num)
{
    int index = -1;
    int temp_num;

    for(int i=0; i<order_num; i++)
    {
        if(id == order[i].ID)
        {
           
            // 更改总价
            order[i].price -= num * (order[i].price / order[i].num);

            // 更改订单中的商品数量信息
            order[i].num -= num;
     
            // 更改类及文件中的商品数量信息
            switch(order[i].category)
            {
                // 食物
                case 0:
                {
                    index = find_food(order[i].ID);
                    temp_num = atoi(food[index].get_num().c_str()) + num;
                    food[index].modify_num(to_string(temp_num));
                    food[index].update();
                    break;
                }

                // 图书
                case 1:
                {
                    index = find_book(order[i].ID);
                    temp_num = atoi(food[index].get_num().c_str()) + num;
                    book[index].modify_num(to_string(temp_num));
                    book[index].update();
                    break;
                }

                // 衣服
                case 2:
                {
                    index = find_clothing(order[i].ID);
                    temp_num = atoi(food[index].get_num().c_str()) + num;
                    clothing[index].modify_num(to_string(temp_num));
                    clothing[index].update();
                    break;
                }

                default:
                    break;

            }

            if(order[i].num == 0)
                update_order();

            break;
        }
    }

}


/*更新购物车，即删去数量为0的商品*/
void eBussiness::update_order()
{
	Order* temp = new Order[order_num];
	int j=0, temp_num = order_num;

	for(int i=0; i<order_num; i++)
	{
		if(order[i].num != 0)
		{
			temp[j].category = order[i].category;
			temp[j].ID = order[i].ID;
			temp[j].num = order[i].num;
			temp[j].price = order[i].price;
			j++;
		}
		else
			temp_num--;
	}

	order = temp;
	order_num = temp_num;
}


/*更新所有商品文件*/
void eBussiness::update_all()
{
    for(int i=0; i<food_num; i++)
        food[i].update();

    for(int i=0; i<book_num; i++)
        book[i].update();

    for(int i=0; i<clothing_num; i++)
        clothing[i].update();
}


/*管理员更新数量，原价，折扣系数，产品描述*/
void eBussiness::update_admi(string num[], string price[], 
    string discount[], string description[])
{
    int index;

    // 食物
    for(int i=0; i<food_num; i++)
    {
        index = i;
        food[index].modify_num(num[i]);
        food[index].modify_price(price[i]);
        food[index].modify_discount(discount[i]);
        food[index].modify_description(description[i]);
    }

    // 图书
    for(int i=food_num; i<(food_num+book_num); i++)
    {
        index = i - food_num;

        book[index].modify_num(num[i]);
        book[index].modify_price(price[i]);
        book[index].modify_discount(discount[i]);
        book[index].modify_description(description[i]);
    }

    // 衣服
    for(int i=food_num+book_num; i<(food_num+book_num+clothing_num); i++)
    {
        index = i - food_num - book_num;

        clothing[index].modify_num(num[i]);
        clothing[index].modify_price(price[i]);
        clothing[index].modify_discount(discount[i]);
        clothing[index].modify_description(description[i]);
    }
}


/*添加食品*/
void eBussiness::add_food(string name, string num, string price, string discount,
    string production_date, string quality_period, string weight, string description)
{
    food[food_num].modify_ID(ID_num++);
    food[food_num].modify_type(Type(0));
    food[food_num].modify_num(num);
    food[food_num].modify_name(name);
    food[food_num].modify_price(price);
    food[food_num].modify_discount(discount);
    food[food_num].modify_production_date(production_date);
    food[food_num].modify_quality_period(quality_period);
    food[food_num].modify_weight(weight);
    food[food_num].modify_discount_price();
    food[food_num].modify_description(description);
    food[food_num].write();

    food_num++;

}


/*添加图书*/
void eBussiness::add_book(string name, string num, string price, string discount,
    string publication_date, string author, string press, string description)
{
    book[book_num].modify_ID(ID_num++);
    book[book_num].modify_type(Type(1));
    book[book_num].modify_num(num);
    book[book_num].modify_name(name);
    book[book_num].modify_price(price);
    book[book_num].modify_discount(discount);
    book[book_num].modify_publication_date(publication_date);
    book[book_num].modify_author(author);
    book[book_num].modify_press(press);
    book[book_num].modify_discount_price();
    book[book_num].modify_description(description);
    book[book_num].write();

    book_num++;

}


/*添加服装*/
void eBussiness::add_clothing(string name, string num, string price, string discount,
    int size, int clothing_type, string material, string description)
{
    clothing[clothing_num].modify_ID(ID_num++);
    clothing[clothing_num].modify_type(Type(1));
    clothing[clothing_num].modify_num(num);
    clothing[clothing_num].modify_name(name);
    clothing[clothing_num].modify_price(price);
    clothing[clothing_num].modify_discount(discount);
    clothing[clothing_num].modify_size(Clothing_size(size));
    clothing[clothing_num].modify_clothing_type(Clothing_type(clothing_type));
    clothing[clothing_num].modify_material(material);
    clothing[clothing_num].modify_discount_price();
    clothing[clothing_num].modify_description(description);
    clothing[clothing_num].write();

    clothing_num++;
}


/*记录购买历史*/
void eBussiness::write_record()
{
    string s;
    fstream f("erecord.txt", ios_base::out | ios_base::app);

    // 先存用户名
    s = eBuss.get_user_index();
    f << s << endl;

    // 一个已支付订单存四行，第一行日期，第二行具体时间，第三行商品及数量,第四行订单总价
    // 第一行和第二行
    time_t t = time( 0 );
    char tmp[64];
    strftime( tmp, sizeof(tmp), "%Y/%m/%d \n%X ",localtime(&t) );
    s = tmp;
    f << s << endl;
    s.clear();

    // 第三行格式如：产品ID:1，购买数量：2
    for(int i=0; i<order_num; i++)
    {
        s += ("产品ID:" + to_string(order[i].ID) + ",购买数量:" + to_string(order[i].num) + ";");
    }
    f << s << endl;

    // 第四行，订单总价
    double total_price = cal_all_price();
    s = to_string(total_price);
    f << "订单总价(元):" << s << endl;
}


/*读取某个日期的操作日志,存到record_s[]中*/
/*s格式形如2017/12/09*/
string* eBussiness::read_record(string s)
{
    fstream f("erecord.txt");
    int num = 0;
    int line_num = 0;
    string tmp[one_erecord_line];
    string s_tmp;

    // 统计行数
    while(!f.eof())
    {
        f >> s_tmp;
        line_num++;
    }
    line_num--;
    f.close();
    cout << "line_num: " << line_num << endl;

    // 统计需要的日志个数
    f.open("erecord.txt");
    for(int line_count=0; line_count<line_num; line_count++)
    {
        int j = line_count % one_erecord_line;
        f >> tmp[j];

        if((j == (one_erecord_line-1)) && (tmp[1] == s) && (tmp[0] == user_index))
            num++;
        cout << "num: " << num << endl;
    }
    f.close();

    // 动态分配数组
    string* record_tmp = new string[num];
    erecord_num = num;

    // 通过与s比较将需要的日志存入数组中
    f.open("erecord.txt");
    int i_record = 0;
    int m;
     for(int line_count=0; line_count<line_num; line_count++)
    {
        int j = line_count % one_erecord_line;
        f >> tmp[j];
        cout << "tmp[j]: " << tmp[j] << endl;

        if((j == (one_erecord_line-1)) && (tmp[1] == s) && (tmp[0] == user_index))
        {
            for(m=1; m<one_erecord_line; m++)
            {
                record_tmp[i_record] += (tmp[m] + "    ");
                cout << "temp: " << tmp[m] << endl;
            }
            i_record++;
        }
    }
    return record_tmp;
}
