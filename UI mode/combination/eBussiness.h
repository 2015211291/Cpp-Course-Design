#ifndef EBUSSINESS_H
#define EBUSSINESS_H

#include "food.h"
#include "book.h"
#include "clothing.h"

/*电商平台类*/
class eBussiness
{
private:
	/*私有数据变量*/
	string user_index;// 用户名
	string user_password;// 密码
	string admi_index;// 管理员用户名
	string admi_password;// 管理员密码
	int current_food_max;// 当前食物数组size的最大值
	int current_book_max;// 当前图书数组size的最大值
	int current_clothing_max;// 当前衣服数组size的最大值
	int food_num;// 食物实例数量
	int book_num;// 图书实例数量
	int clothing_num;// 衣服实例数量
	Food* food;// 指向food数组的指针
	Book* book;// 指向book数组的指针
	Clothing* clothing;// 指向clothing数组的指针
	Order* order;// 订单
	int order_num;// 单次订单中商品种类的数目。注意，如果两次购买了同一商品，商品种类算2
	int current_order_max;// 当前order数组size的最大值
	int ID_num;// 产品ID的计数,添加产品后++

	/*私有成员函数*/
	bool judge_password(int flag);// 输入密码并校验密码是否正确.flag=0,1 user,admi
	string input_password();// 输入密码
	void resize_food(Food*& food);// 扩展food数组
	void resize_book(Book*& book);// 扩展book数组
	void resize_clothing(Clothing*& clothing);// 扩展clothing数组
	void resize_order(Order*& order);// 扩展clothing数组


public:
	/*构造*/
	eBussiness();

	/*析构*/
	~eBussiness();

    /*在用户文件中查找有无对应用户，有的话读取*/
    bool find_user(string tmp, int id);

    /*在管理员文件中查找有无对应用户，有的话读取*/
    bool find_admi(string s, int id);
    
    /*修改food数组*/
    void modify_food(Food* s);

    /*修改book数组*/
    void modify_book(Book* s);

    /*修改clothing数组*/
    void modify_book(Clothing* s);

    /*修改用户名*/
    void modify_user_index(string s);

    /*修改用户密码*/
    void modify_user_password(string s);

    /*修改管理员用户名*/
    void modify_admi_index(string s);

    /*修改管理员密码*/
    void modify_admi_password(string s);

    /*清空订单*/
    void clean_order();

     /*获得用户名*/
    string get_user_index();

    /*获得用户密码*/
    string get_user_password();

    /*获得管理员用户名*/
    string get_admi_index();

    /*获得管理员密码*/
    string get_admi_password();

    /*获得食物数量*/
    int get_food_num();

    /*获得图书数量*/
    int get_book_num();

    /*获得衣服数量*/
    int get_clothing_num();

    /*获得订单中商品种类的数量*/
    int get_order_num();

    /*获得食物数组*/
    Food* get_food();

    /*获得图书数组*/
    Book* get_book();

    /*获得衣服数组*/
    Clothing* get_clothing();

    /*获得订单数组*/
    Order* get_order();

	/*读取food文件中的信息*/
	bool read_food();

	/*读取book文件中的信息*/
	bool read_book();

	/*读取clothing文件中的信息*/
	bool read_clothing();

	/*注册用户,并把信息写入文件*/
    void enroll();

    /*用户登录*/
    void log_in_user();

    /*管理员登录*/
    void log_in_admi();

    /*添加商品*/
    void add();

    /*删除商品*/
    void remove();

    /*删除商品*/
    /*1,food;2,book;3,clothing*/
    void remove(int category, int id);

    /*修改商品信息*/
    void modify_commodity();

    /*显示所有食物商品*/
    void show_food();

    /*显示所有图书商品*/
    void show_book();

    /*显示所有衣服商品*/
    void show_clothing();

    /*显示所有商品*/
    void show();

    /*购买*/
    /*i=1,购买food;i=2,购买book;i=3,购买clothing*/
    /*index表示具体产品在数组中的索引*/
    void buy(int i, int id);

    /*购买*/
    /*i=1,购买food;i=2,购买book;i=3,购买clothing*/
    /*index表示具体产品在数组中的索引*/
    void buy(int i, int id, int num);

    /*寻找id对应的food，并返回索引,找不到返回-1*/
    int find_food(int id);

    /*寻找id对应的book，并返回索引，找不到返回-1*/
    int find_book(int id);

    /*寻找id对应的clothing，并返回索引，找不到返回-1*/
    int find_clothing(int id);

    /*开启满减活动*/
    void start_full_off();
    
    /*将当前ID_num写入文件*/
    void write_ID_num();

    /*读取ID_num*/
    void read_ID_num();

    /*提交订单*/
    void submit_order();

    /*输出订单*/
    void output_order();

    /*将商品加入订单*/
    /*类别，ID, 数量，总价*/
    /*有查重合并功能*/
    void add_to_order(int category, int id, int num, int price);

    /*计算订单中商品的总价，考虑满减*/
    double cal_all_price();

    /*删除购物车的商品*/
    void remove_from_order();

    /*删除购物车的商品*/
    void remove_from_order(int id, int num);

    /*更新购物车，即删去数量为0的商品*/
    void update_order();

    /*更新所有商品文件*/
    void update_all();

    /*管理员更新数量，原价，折扣系数，产品描述*/
    void update_admi(string num[], string price[], 
        string discount[], string description[]);

    /*添加食品*/
    void add_food(string name, string num, string price, string discount,
        string production_date, string quality_period, string weight, string description);

    /*添加图书*/
    void add_book(string name, string num, string price, string discount,
        string publication_date, string author, string press, string description);

    /*添加服装*/
    void add_clothing(string name, string num, string price, string discount,
        int size, int clothing_type, string material, string description);

    /*记录购买历史*/
    void write_record();

    /*读取某个日期的操作日志,存到record_s[]中*/
    /*s格式形如2017/12/09*/
    string* read_record(string s);

 
};

/*声明一个电商类*/
extern eBussiness eBuss;

/*记录条数*/
extern int erecord_num;

#endif
