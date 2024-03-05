#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//登录密码假设密码为123456
int main()
{
	int a = 0;
	int i = 1;
	while (i <= 3)
	{
		printf("请输入六位数密码:");
		scanf("%d", &a);
		if (a == 123456)
		{
			printf("输入正确\n");
			break;
		}
		else
		{
			i++;
			if (i == 4)
				break;
			printf("输入错误请重新输入密码\n");
		}		
	}
	if (i == 4)
		printf("输入次数过多请稍后再试");
	else
		printf("欢迎");
	return 0;
}