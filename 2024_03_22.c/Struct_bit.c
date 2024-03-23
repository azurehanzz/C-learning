#include <stdio.h>

struct test 
{
	int a : 2;
	int b : 16;
	int c : 32;
}s;

void main()
{
	struct test d = { 1,30,20 };
	printf("%d", sizeof(s));
}