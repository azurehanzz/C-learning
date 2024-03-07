#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int get_index(int x,int y[],int n)
{
	int index;
	int left = 0;
	int right = n - 1;
	index = (left + right) / 2;
	while (left <= right)
	{
		index = (left + right) / 2;
		if (x < y[index])
		{
			right = index - 1;
		}
		else if (x > y[index])
		{
			left = index + 1;
		}
		else
			break;
	}
	return index;
}
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int b;
	int n = sizeof(a) / sizeof(a[0]);
	scanf("%d", &b);
	printf("所处位置为%d",get_index(b,a,n));
	return 0;
}