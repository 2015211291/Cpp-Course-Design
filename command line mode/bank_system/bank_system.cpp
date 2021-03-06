#include "bank_system.h"
using namespace std;

string bank[bank_num];


/*主函数*/
int main()
{
    int choosed_code = -1;
    Card bank_card;
    
    
    /*首先从文件读取所有银行名称*/
    /*存到bank数组中*/
    fstream f_bank("bank.txt");
    
    // 文件存在
    if(f_bank)
    {
        for(int i=0; i<bank_num; i++)
            f_bank >> bank[i];
        
        /*选择操作*/
        while(choosed_code != 0)
        {
            cout << "请选择您的操作:" << endl;
            cout << "0. 退出" << endl;
            cout << "1. 登录" << endl;
            cout << "2. 注册" << endl;
            
            cin >> choosed_code;
            
            switch(choosed_code)
            {
                    // 退出
                case 0:
                    cout << "您已成功退出系统，感谢您的使用！" << endl;
                    break;
                    
                    // 登录
                case 1:
                    bank_card.log_in();
                    break;
                    
                    // 注册
                case 2:
                    bank_card.enroll();
                    break;
                    
                    // 错误处理
                default:
                    cout << "请输入正确的数字代号!" << endl;
                    break;
            }
        }
    }
    
    else// 文件不存在
    {
        cout << "文件不存在！" << endl;
        cout << "请输入0来退出:" ;
        cin >> choosed_code;
    }
    
    f_bank.close();
    
    
    system("pause");
    
    return 0;
    
}



/*函数定义*/
/*构造函数*/
Card::Card()
{
    bank_name = "0";
    index = "0";
    password = "0";
    holder_name = "0";
    ID = "0";
    telephone = "0";
    sum = "0";
}


/*选择银行*/
string Card::input_bank()
{
    cout << "银行如下，请输入银行前面的数字选取：" << endl;
    for(int i=0; i<bank_num; i++)
        cout << i << ". " << bank[i] << endl;
    
    int choosed_code;
    cin >> choosed_code;
    
    // 输入错误处理
    while((choosed_code<0) || (choosed_code>=bank_num))
    {
        cout << "输入代号错误，请重新输入！" << endl;
        cin >> choosed_code;
    }
    return bank[choosed_code];
}


/*输入银行卡号*/
/*i=1,用于注册；i=0,用于登录*/
string Card::input_index(int i)
{
    string index_temp;
    cout << "请输入卡号：" << endl;
    cin >> index_temp;
    
    while(!judge_int(index_temp))// 输入卡号非纯数字时
    {
        cout << "银行卡号输入错误！请输入纯数字！" << endl;
        cin >> index_temp;
    }
    
    if(i)
    {
        while(find_user(index_temp, 0))
        {
            cout << "该卡号已存在，请重新输入！" << endl;
            cin >> index_temp;
        }
    }
    
    return index_temp;
}


/*输入密码*/
string Card::input_password()
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


/*输入身份证号*/
string Card::input_ID()
{
    string ID_temp;
    
    cout << "请输入身份证号：" << endl;
    cin >> ID_temp;
    
    // 身份证位数不合法或者非纯数字
    while((ID_temp.length()!=ID_digits) || (!judge_int(ID_temp)))
    {
        cout << "身份证号输入不合法！请重新输入：" << endl;
        cin >> ID_temp;
    }
    
    return ID_temp;
}


/*输入预留手机号*/
string Card::input_telephone()
{
    string telephone_temp;
    cout << "请输入预留手机号：" << endl;
    cin >> telephone_temp;
    
    // 手机号非纯数字时
    while(!judge_int(telephone_temp))
    {
        cout << "手机号输入不合法！请重新输入：" << endl;
        cin >> telephone_temp;
    }
    
    return telephone_temp;
}


/*输入金额*/
string Card::input_sum()
{
    string sum_temp;
    
    cout << "请输入金额：" << endl;
    cin >> sum_temp;
    
    /*输入金额非整数或小数时*/
    while(!judge_double(sum_temp))
    {
        cout << "存款金额输入不合法！请重新输入：" << endl;
        cin >> sum_temp;
    }
    
    return sum_temp;
}


/*注册银行卡,并把信息写入文件*/
void Card::enroll()
{
    
    /*图形化待完善*/
    /*选择银行*/
    bank_name = input_bank();
    
    /*输入卡号*/
    index = input_index(1);
    
    /*输入密码*/
    password = input_password();
    
    /*输入姓名*/
    cout << "请输入姓名：" << endl;
    cin >> holder_name;
    
    /*输入身份证号*/
    ID = input_ID();
    
    /*输入手机号*/
    telephone = input_telephone();
    
    /*输入存款金额*/
    cout << "您正在存款,";
    sum = input_sum();
    
    cout << "注册成功!" << endl;
    
    /*将信息写入文件*/
    fstream f_user("user_information.txt", ios_base::out | ios_base::app);
    
    f_user << index << endl;
    f_user << bank_name << endl;
    f_user << password << endl;
    f_user << holder_name << endl;
    f_user << ID << endl;
    f_user << telephone << endl;
    f_user << sum << endl;
    
    f_user.close();
    
}


/*修改银行卡密码*/
void Card::modify_password()
{
    cout << "请您先校验旧密码，";
    if(judge_password())// 校验旧密码成功
    {
        cout << "您正在输入新密码，";
        password = input_password();
        cout << "修改成功！" << endl;
        update();
    }
    
    else// 校验旧密码失败
    {
        cout << "校验失败！您没有权限修改。" << endl;
    }
}


/*检验输入字符串是否整数字符*/
bool Card::judge_int(string telephone)
{
    int len = telephone.length();
    
    for(int i=0; i<len; i++)
    {
        if((telephone[i]<'0') || (telephone[i]>'9'))// 若非数字字符，则返回false
            return false;
    }
    
    return true;
}


/*检验输入字符串是否是小数字符*/
bool Card::judge_double(string sum)
{
    int len = sum.length();
    int flag_dot = 0;// 标志小数点出现次数
    
    for(int i=0; i<len; i++)
    {
        // 若非数字字符，或者小数点出现两次以上，则返回false
        if((sum[i]<'0') || (sum[i]>'9') || (flag_dot>1))
            return false;
    }
    
    return true;
    
}


/*校验密码是否正确*/
bool Card::judge_password()
{
    string password_temp;
    password_temp = input_password();
    
    if(password_temp == password)
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


/*存款*/
void Card::save()
{
    string sum_temp;
    long temp1, temp2;
    
    // 校验密码成功
    if(judge_password())
    {
        cout << "您正在存款，";
        sum_temp = input_sum();
        
        temp1 = atoi(sum_temp.c_str());
        temp2 = atoi(sum.c_str());
        
        temp2 += temp1;
        
        sum = to_string(temp2);
        
        cout << "您已存入" << sum_temp << "元！" << endl;
        cout << "您当前的存款总数为：" << sum << "元！" << endl;
        
        update();
    }
    
    // 校验失败
    else
        cout << "您没有权限操作！" << endl;
}


/*取款*/
void Card::draw()
{
    string sum_temp;
    long temp1, temp2;
    
    // 校验密码成功
    if(judge_password())
    {
        cout << "您正在取款，";
        sum_temp = input_sum();
        
        temp1 = atoi(sum_temp.c_str());
        temp2 = atoi(sum.c_str());
        
        temp2 -= temp1;
        
        sum = to_string(temp2);
        
        cout << "您已取走" << sum_temp << "元！" << endl;
        cout << "您当前的存款总数为：" << sum << "元！" << endl;
        
        update();
    }
    
    // 校验失败
    else
        cout << "您没有权限操作！" << endl;
    
}


/*登录*/
void Card::log_in()
{
    string index_temp;
    int choosed_code = -1;
    
    // 输入银行卡号
    index_temp = input_index(0);
    
    // 校验卡号，存在则继续校验密码，否则报错
    if(find_user(index_temp, 0))// 存在,校验密码
    {
        // 密码不正确，重新输入，直至正确
        while(!judge_password())
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
            cout << "1. 存款" << endl;
            cout << "2. 取款" << endl;
            cout << "3. 修改密码" << endl;
            cout << "4. 显示个人信息" << endl;
            
            cin >> choosed_code;
            
            switch(choosed_code)
            {
                    // 退出
                case 0:
                    cout << "您已成功退出账户！" << endl;
                    break;
                    
                    // 存款
                case 1:
                    save();
                    break;
                    
                    // 取款
                case 2:
                    draw();
                    break;
                    
                    // 修改密码
                case 3:
                    modify_password();
                    break;
                    
                    // 显示个人信息
                case 4:
                    show();
                    break;
                    
                    // 输入代码错误
                default:
                    cout << "请输入正确的数字代号！" << endl;
                    break;
                    
            }
            
        }
        
    }
    
    // 查询不到银行卡号
    else
        cout << "卡号不存在！" << endl;
    
}


/*在用户文件中查找有无对应信息*/
/*id代表查询哪类信息，id的值是类中定义的次序.如id=0代表查询卡号*/
/*查到后，把该用户的信息读入类中,并返回true*/
/*否则，返回false*/
bool Card::find_user(string tmp, int id)
{
    fstream f_user("user_information.txt");
    string sr[data_num];
    bool flag = 0;// 查到置为1
    
    if(f_user)// 文件存在
    {
        while(!f_user.eof())
        {
            for(int i=0; i<data_num; i++)// 以用户的每7个数据为单位循环
            {
                f_user >> sr[i];
                
                if((sr[i] == tmp) && (i==id))// 查到对应信息
                    flag = 1;
            }
            
            if(flag)// 查到则读入类中
            {
                index = sr[0];// 卡号
                bank_name = sr[1];// 银行名称
                password = sr[2];// 密码
                holder_name = sr[3];// 持卡人姓名
                ID = sr[4];// 身份证号
                telephone = sr[5];// 银行预留手机号
                sum = sr[6];// 卡内金额
                
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


/*显示个人信息*/
void Card::show()
{
    cout << "个人信息如下：" << endl;
    
    cout << "银行卡号:" << index << endl;
    cout << "所属银行:" << bank_name << endl;
    cout << "密码:" << password << endl;
    cout << "持卡人姓名:" << holder_name << endl;
    cout << "身份证号:" << ID << endl;
    cout << "预留手机号:" << telephone << endl;
    cout << "卡内金额:" << sum << endl;
    
}


/*用当前变量更新文件中的信息*/
void Card::update()
{
    string s;
    int line_num = 0;
    fstream f("user_information.txt");
    
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
    f.open("user_information.txt");
    int i = 0;
    
    while(!f.eof())
    {	
        f >> s_info[i++];
        
        // 检测到当前银行卡号,用当前变量赋给数组，相当于修改原文件
        if(((i-1) % data_num == 0) && (s_info[i-1] == index))
        {
            f >> s;
            s_info[i++] = bank_name;		
            f >> s;
            s_info[i++] = password;
            f >> s;
            s_info[i++] = holder_name;
            f >> s;
            s_info[i++] = ID;
            f >> s;
            s_info[i++] = telephone;
            f >> s;
            s_info[i++] = sum;
        }
        else
            f >> s_info[i++];
    }
    f.close();
    
    // 向文件中覆盖写入信息
    ofstream file("user_information.txt", ios_base::trunc);
    
    for(i=0; i<line_num; i++)
        file << s_info[i] << endl;
    
    file.close();
    
    delete [] s_info;
    
}
