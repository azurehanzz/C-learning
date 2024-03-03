#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	printf("今天星期几:");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("今天是工作日");
		break;
	case 6:
	case 7:
		printf("今天是休息日");
		break;
	default:
		printf("请输入1-7的数字");
		break;
			
	}
	return 0;
}