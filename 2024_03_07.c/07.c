#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��� n��쳲���������
int function(a)
{
	if (a == 1 || a == 2)
		return 1;
	else
		return function(a - 1) + function(a - 2);
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d", function(a));
}