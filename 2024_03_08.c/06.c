#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//��������,����ÿ������֮��
int digitsum(int x,int y)
{
	if (y >= 0)
	{
		int z = x / (pow(10, y));
		return (z+ digitsum(x - z*(pow(10, y)), y - 1));
	}
	else
		return 0;
}
int main()
{
	int a;
	scanf("%d", &a);
	int i;
	for (i=0;; i++)
	{
		if ((a / (pow(10,i)))<= 1)
		{
			i=i - 1;
			break;
		}
	}
	int sum =digitsum(a,i);
	printf("%d", sum);
	return 0;
}