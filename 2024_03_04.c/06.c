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
		printf("��²������Ϊ����:");
		scanf("%d", &b);
		if (b > a)
		{
			printf("�������ֹ���\n");
		}
		else if (b < a)
		{
			printf("�������ֹ�С\n");
		}
		else
		{
			printf("��ϲ��²���ȷ!\n");
		}
	}
}
	int main()
	{
		srand((unsigned int)time(NULL));
		int i=0;
		do
		{
			printf("* ����1/0�Ƿ�����Ϸ*\n");
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
				printf("�������\n");
				break;
			}
		} while (i);
		return 0;
	}
