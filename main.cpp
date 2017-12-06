#include "eBussiness.h"

int main()
{
	eBussiness eb;
	int choosed_code;
	int flag = 1;

	while(flag)
	{
		// 	操作选择
		cout << "请选择您的操作：" << endl;
		cout << "0. 退出" << endl;
		cout << "1. 用户注册" << endl;
		cout << "2. 用户登录" << endl;
		cout << "3. 管理员登录" << endl;

		cin >> choosed_code;
		
		switch(choosed_code)
		{
			// 退出程序
			case 0:
				flag = 0;
				cout << "您已成功退出，谢谢使用！" << endl;
				break;

			// 用户注册
			case 1:
			{
				eb.enroll();
				break;
			}

			// 用户登录
			case 2:
			{
				eb.log_in_user();
				break;
			}

			// 管理员登录
			case 3:
			{
				eb.log_in_admi();
				break;
			}

			// 错误代号处理
			default:
		        cout << "请输入正确的数字代号！" << endl;
		        break;
		}
	}

	system("pause");
	return 0;
}