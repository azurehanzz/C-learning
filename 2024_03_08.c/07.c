#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int digitsum(int x)
{
	if (x >= 1)
	{
		return(x % 10 + digitsum(x / 10));
	}
	else
		return 0;
}


int main()
{
	int a;
	scanf("%d", &a);
	int sum=digitsum(a);
	printf("%d", sum);
}