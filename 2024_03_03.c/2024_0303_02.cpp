#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 900000000;
	int* p = &a;
	printf("%p\n", a);
	printf("%p\n", p);
	printf("%p\n", &p);
	return 0;
}