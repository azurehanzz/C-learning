//关机程序 运用到 system("shutdown -s -t 60") system("shutdown -a"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	printf("请注意！！！您的电脑即将在60秒后关机！\n输入我是猪取消关机：");
	char a[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		scanf("%s", a);
		if (strcmp(a, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}