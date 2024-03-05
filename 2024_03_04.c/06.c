#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void game()
{
	int a = ((rand()) % 100) + 1;
	int b = 0;
	while (a != b)
	{
		printf("请猜测随机数为多少:");
		scanf("%d", &b);
		if (b > a)
		{
			printf("输入数字过大\n");
		}
		else if (b < a)
		{
			printf("输入数字过小\n");
		}
		else
		{
			printf("恭喜你猜测正确!\n");
		}
	}
}
	int main()
	{
		srand((unsigned int)time(NULL));
		int i=0;
		do
		{
			printf("* 输入1/0是否玩游戏*\n");
			printf("*******1.play*******\n");
			printf("*******0.Exit*******\n");
			printf("********************\n");
			scanf("%d", &i);
			switch (i)
			{
			case 1:
				game();
				break;
			case 0:
				break;
			default:
				printf("输入错误\n");
				break;
			}
		} while (i);
		return 0;
	}
