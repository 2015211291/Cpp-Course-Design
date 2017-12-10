#ifndef BANK_SYSTEM_H
#define BANK_SYSTEM_H

#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;

const int Max = 120;

/*可选银行数目*/
const int bank_num = 21;

/*存放银行代号的数组*/
extern string bank[];

/*密码位数范围*/
const int password_begin = 5;
const int password_end = 15;

/*身份证号位数*/
const int ID_digits = 18;

/*类中私有变量的个数*/
const int data_num = 7;

/*记录文件存某个操作的行数*/
const int one_record_line = 4;

/*记录的数目*/
extern int record_num;

/*当前记录数组size的最大值*/
extern int current_record_Max;

/*记录数组*/
extern string* record_s;

/*银行卡类*/
class Card
{
private:
    /*数据变量*/
    string index;// 卡号
    string bank_name;// 银行名称
    string password;// 密码
    string holder_name;// 持卡人姓名
    string ID;// 身份证号
    string telephone;// 银行预留手机号
    string sum;// 卡内金额
    
    /*私有成员函数*/
    bool judge_double(string sum);// 检验输入字符串是否是小数字符
    bool judge_password();// 输入密码并校验密码是否正确
    string input_bank();// 输入银行信息,返回银行代号
    string input_index(int i);// 输入银行卡号
    string input_password();// 输入密码
    string input_ID();// 输入身份证号
    string input_telephone();// 输入预留手机号
    string input_sum();// 输入金额
    void show();// 显示个人信息，仅在用户登录后可使用


public:
    /*构造函数*/
    Card();
   
    /*析构函数*/
    ~Card();

    /*赋值运算符*/
    Card& operator =(const Card& str);
    
    /*注册银行卡,并把信息写入文件*/
    void enroll();
    
    /*登录*/
    void log_in();
    
    /*修改银行卡密码*/
    void modify_password();
    
    /*存款*/
    void save();
    
    /*取款*/
    void draw();
    
    /*用当前变量更新文件中的信息*/
    void update();

    /*读取银行名称*/
    bool read_bank();

    /*将当前变量的信息写入文件*/
    void write();

    /*给当前变量赋予卡号*/
    void give_index();

    /*更改银行名称*/
    void modify_bank_name(string s);

    /*更改密码*/
    void modify_password(string s);

    /*更改持卡人姓名*/
    void modify_holder_name(string s);

    /*更改预留手机号*/
    void modify_telephone(string s);

    /*更改身份证号*/
    void modify_ID(string s);

    /*更改卡内金额*/
    void modify_sum(string s);

    /*获得银行名称*/
    string get_bank_name();

    /*获得卡号*/
    string get_index();

    /*获得密码*/
    string get_password();

    /*获得持卡人姓名*/
    string get_holder_name();

    /*获得预留手机号*/
    string get_telephone();

    /*获得身份证号*/
    string get_ID();

    /*获得卡内金额*/
    string get_sum();

    /*在用户文件中查找有无对应信息，有的话读取*/
    bool find_user(string tmp, int id, int read_flag);

    /*检验输入字符串是否整数字符*/
    bool judge_int(string telephone);

    /*记录操作日志*/
    /*type=0,注册;type=1,存款sum;type=2,取款sum;type=3,修改密码*/
    /*type=4,转账;type=5,接受转账*/
    void write_record(int type, int sum, string desti);

    /*读取某个日期的操作日志,存到record_s[]中*/
    /*s格式形如2017/12/09*/
    string* read_record(string s);

};

/*定义银行卡类*/
extern Card bank_card;

#endif
