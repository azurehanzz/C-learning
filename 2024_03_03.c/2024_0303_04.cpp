#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	printf("输入1~100整数判断能否被5整除\n");
	while ((a<= 1) ||(100<= a))
	{
		scanf("%d", &a);
		if ((1 <= a) && (a <= 100))
		{
			if (a % 5 == 0)
				printf("可以被5整除\n");
			else
				printf("不可以被5整除\n");
		}
		else
			printf("要输入1~100整数哦\n");
	}
	return 0;
}