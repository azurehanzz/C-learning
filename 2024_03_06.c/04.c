#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//冒泡法求最大
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int temp = 0;
		temp = b;
		b = a;
		a = temp;
	}
	if (a < c)
	{
		int temp = 0;
		temp = c;
		c = a;
		a = temp;
	}
	if (b < c)
	{
		int temp = 0;
		temp = c;
		c = b;
		b = temp;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}