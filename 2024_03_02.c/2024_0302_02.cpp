#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("今天是否要写代码\n写的话输入1，否则输入0\n");
	int a=2 ;
	while (a != (0||1))
	{
		scanf("%d", &a);
		if (a == 1)
			printf("奖励每天都写代码");
		else if (a == 0)
			printf("回家睡觉吧");
		else
		{
			printf("是输入0或者1,你看看你输入的是什么\n");
			printf("重新输入一遍\n");
		}
	}
	return 0;
}