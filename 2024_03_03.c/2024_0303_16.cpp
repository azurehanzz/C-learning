#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	char b;
	while (a != 123456)
	{
		printf("请输入一个六位数密码:");
		scanf("%d", &a);
		printf("\n请确认你输入的密码,输入Y/N:");
		b = getchar();
		if (b == 'Y')
		{
			if (a != 123456)
				printf("您输入的密码错误\n");
			else
				printf("恭喜您输入正确");
		}
		else
			printf("请重新确认\n");
	}

	return 0;
}