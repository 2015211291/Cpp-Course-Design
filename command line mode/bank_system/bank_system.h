#ifndef BANK_SYSTEM_H
#define BANK_SYSTEM_H

#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;

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
    bool judge_int(string telephone);// 检验输入字符串是否整数字符
    bool judge_double(string sum);// 检验输入字符串是否是小数字符
    bool judge_password();// 输入密码并校验密码是否正确
    bool find_user(string tmp, int id);// 在用户文件中查找有无对应信息，有的话读取
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
};

#endif