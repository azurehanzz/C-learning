#include <stdio.h>
int a = 1;
int b = 2;
void test()
{
	 a = 3;
	 b = 4;
}
int main()
{
	test();
	printf("%d%d", a, b);
	return 0;
}