#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//青蛙跳台阶 青蛙一次可以跳1-2个台阶，如果跳到n个有几种方式
int function(int x)
{
	if (x == 1)
		return 1;
	else if (x == 2)
		return 2;
	else
		return(2 + function(x-1)+function(x-2));
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d", function(a));
	return 0;
}