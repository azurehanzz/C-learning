//求最小公倍数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int find_min_multi(a, b)
{
	int i;
	for (i = 1; i <= a; i++)
	{
		if ((i * b) % a == 0)
		{
			break;
		}
	}
	return (i*b);
}
int main()
{
	int a;
	int b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d",find_min_multi(a, b));
}