#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
		printf("此程序为整数相加，请输入两个整数\n");
		scanf("%d %d", &a,&b);
		sum = a + b;
		printf("%d", sum);
		return 0;
}