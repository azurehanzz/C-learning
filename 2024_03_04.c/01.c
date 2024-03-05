#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//计算n!
int main()
{
	int i = 1;
	int a = 0;
	int result = 1;
	printf("请输入一个正整数来阶乘:");
	scanf("%d", &a);
	for (i = 1; i < (a + 1); i++)
	{
		result = result * i;
	}
	printf("\n阶乘结果为%d", result);
	return 0;
}