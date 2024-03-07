#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void detect(int alpha)
{
	if (((alpha % 4 == 0) && (alpha % 100 != 0)) || (alpha % 400 == 0))
		printf("输入的数为闰年");
	else
		printf("输入的数不为闰年");
}
int main()
{
	int a;
	scanf("%d", &a);
	detect(a);
	return 0;
}