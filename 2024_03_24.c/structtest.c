#include <stdio.h>
typedef struct test
{
	char a[20];
	int b;
}test;

void main()
{
	test x = { "121231231",12121 };
	test y = { "sfdzdfzsa",4323 };
	test arr[2] = { x, y };
	test temp = { 0 };
	temp = arr[1];
	arr[1] = arr[0];
	arr[0] = temp;
	return;
}