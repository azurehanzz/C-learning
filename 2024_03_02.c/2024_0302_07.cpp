#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//static���ξֲ�����
void test()
{
	static int a = 1;
	a++;
	printf("%d", a);
}
int main()
{
	int i = 1;
	while (i <= 10)
	{
		test();
		i++;
	}
	return 0;
}