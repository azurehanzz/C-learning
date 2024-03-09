//利用递归实现n的k次方
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int test(int x,int y) 
{
	if (y >= 1)
		return(x * test(x ,y-1));
	else
		return 1;
}
int main()
{
	int a;
	int b;
	scanf("%d%d", &a,&b);
	int sum=test(a,b);
	printf("%d", sum);
	return 0;
}