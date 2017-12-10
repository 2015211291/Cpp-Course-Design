#ifndef COMMON_H
#define COMMON_H

#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;

/*单类商品的订单*/
struct Order
{
	int category;// 0,food;1,book;2,clothing
	int ID;// 产品唯一标识
	int num;// 购买数量
	double price;// 购买的实际总价格
};

/*用户数据变量个数*/
const int user_data_num = 2;

/*用户数据变量个数*/
const int product_data_num = 7;

/*管理员数据变量个数*/
const int admi_data_num = 2;

/*密码位数范围*/
const int password_begin = 5;
const int password_end = 15;

/*产品类型*/
enum Type{food, book, clothing};

/*衣服类型，男装，女装，童装*/
enum Clothing_type{men, women, children};

/*衣服类型标号的起点和终点*/
const int clothing_type_begin = 0;
const int clothing_type_end = 2;

/*衣服尺码*/
enum Clothing_size{XXS, XS, S, M, L, XL, XXL, XXXL};

/*衣服尺码标号的起点和终点*/
const int clothing_size_begin = 0;
const int clothing_size_end = 7;

/*Product类修改信息时起始点*/
const int alter_begin = 0;
const int alter_end = 4;

/*Food类中所有数据变量数目*/
const int food_data_num = 11;

/*Book类中所有数据变量数目*/
const int book_data_num = 11;

/*Clothing类中所有数据变量数目*/
const int clothing_data_num = 11;

/*申请数组和扩展数组的常量*/
const int Max = 101;

/*全场满减,满100减10*/
extern  int all_full;
extern int all_off;

/*食品满减，满250减50*/
extern int food_full;
extern int food_off;

/*图书满减，满200减100*/
extern int book_full;
extern int book_off ;

/*衣服满减，满300减100*/
extern int clothing_full;
extern int clothing_off;

/*满减标志，0代表无满减，1代表有满减*/
extern int full_off_flag_all ;
extern int full_off_flag_food ;
extern int full_off_flag_book ;
extern int full_off_flag_clothing ;

/*打折标志，0代表不打折，1代表全场，2代表食品，以此类推*/
extern int discount_flag;

/*要删除的产品的序号*/
/*删除该产品，例如food[delete_index].remove()*/
extern int delete_index;

/*判断一个string变量里存储的字符是否是数字字符*/
bool judge_digits(string s);

/*判断一个string变量里存储的字符是否是小数字符*/
bool judge_decimal(string s);

/*检错并纠正，s所表示的数字是否是数字且是否在范围内*/
bool judge_in_range(string& s, int begin, int end);



#endif
