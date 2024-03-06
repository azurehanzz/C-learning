#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//使用传址写出来的函数
void get_big(int* x, int* y)
{
	if (x < y)
	{
		int temp = 0;
		temp = *y;
		*y = *x;
		*x = temp;
	}
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	get_big(&a, &b);
	get_big(&a, &c);
	get_big(&b, &c);
	printf("%d %d %d", a, b, c);
	return 0;
}