#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a = 1;
int main()
{
	printf("%d\n", a);
	{
		int a = 2;
		printf("%d\n", a);
	}
	printf("%d\n", a);
	return 0;
}