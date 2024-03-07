#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void detect(int a)
{
	int i;
	int flag = 1;
	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
			flag = 0;
	}
	if (flag == 0)
		printf("输入的不是素数");
	else
		printf("输入的数为素数");
}
int main()
{
	int a;
	printf("请输入一个数判断是否为素数:");
	scanf("%d",&a);
	detect(a);
	return 0;
}