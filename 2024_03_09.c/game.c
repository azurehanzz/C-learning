#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
int menu();
game();
int win(int* x);
int main()
{
	int a;
	do
	{
      a = menu();
	  switch (a)
	  {
	  case 1:
		  game();
		  break;
	  case 0:
		  break;
	  default:
		  printf("����������һ��!\n");
		  break;
	  }
	} while(a);
}

int menu()
{
	printf("#####������#####\n");
	printf("###����1��ʼ####\n");
	printf("###����0����####\n");
	printf("################\n");
	int begin = 0;
	scanf("%d", &begin);
	return(begin);
}

game()
{
	system("cls");
	printf("����1-9ѡ������ĸ���\n");
	printf("���סÿ�����ӵ�λ��\n");
	printf("1#\t2#\t3#\n4#\t5#\t6#\n7#\t8#\t9#\n");
	printf("����1����:");
	int input;
	scanf("%d", &input);
	while (input != 1)
	{
		printf("�����������������\n");
		scanf("%d", &input);;
	}
	int replay=1;
	while (replay)
	{
		system("cls");
		char z[3][6] = { {"#\t#\t#"},{"#\t#\t#"},{"#\t#\t#"} };
		int detect[3][3] = { {000},{000},{000} };
		printf("%s\n%s\n%s\n", z[0], z[1], z[2]);
		int b;
		int i;
		int windetect = 2;
		for (i = 1; i <= 9; i++)
		{
			//���1�������
			if (i % 2 != 0)
			{
				printf("���1������:");
				scanf("%d", &b);
				//�ж��Ƿ��Ѿ�������
				while (detect[(b - 1) / 3][(b - 1) % 3] != 0)
				{
					printf("�������������ӣ�����������");
					scanf("%d", &b);
				}
				detect[(b - 1) / 3][(b - 1) % 3] = 1;
				z[(b - 1) / 3][(2 * ((b - 1) % 3))] = 'O';
				system("cls");
				Sleep(100);
				printf("%s\n%s\n%s\n", z[0], z[1], z[2]);
			}
			//���2�������
			else if (i % 2 == 0)
			{
				printf("���2������:");
				scanf("%d", &b);
				//�ж��Ƿ��Ѿ�������
				while (detect[(b - 1) / 3][(b - 1) % 3] != 0)
				{
					printf("�������������ӣ�����������");
					scanf("%d", &b);
				}
				detect[(b - 1) / 3][(b - 1) % 3] = 2;
				z[(b - 1) / 3][(2 * ((b - 1) % 3))] = 'X';
				system("cls");
				Sleep(100);
				printf("%s\n%s\n%s\n", z[0], z[1], z[2]);
			}
			windetect = win(detect);
			if (windetect == 1)
				break;
			else if (windetect == 0)
				break;
			//���1�������
		}
		if (i == 10)
		{
			printf("���ź����ǵ�ˮƽ�൱\n");
		}
		printf("�����Ƿ���Ҫ����\n");
		printf("�����������ּ���\n����0�˳���������:");
		scanf("%d", &replay);
		system("cls");
	}
	return 0;
}

int win(int* x)
{
	int win_detect=2;
	int k = 0;
	//��ֱ����Ӯ�ķ�ʽ
	for (k = 0; k < 3; k++)
	{
		if ((*(x + k) == 1) && (*(x + k + 3) == 1) && (*(x + k + 6) == 1))
			win_detect = 1;
		else if ((*(x + k) == 2) && (*(x + k + 3) == 2) && (*(x + k + 6) == 2))
			win_detect = 0;
	}
	//ˮƽ����Ӯ�÷�ʽ
	for (k = 0; k < 7; k += 3)
		{
			if ((*(x + k) == 1) && (*(x + k + 1) == 1) && (*(x + k + 2) == 1))
				win_detect = 1;
			else if ((*(x + k) == 2) && (*(x + k + 1) == 2) && (*(x + k + 2) == 2))
				win_detect = 0;
		}
	//�Խ��߷�ʽ
	if ((*x == 1) && (*(x + 4) == 1) && (*(x + 8) == 1))
		win_detect = 1;
	else if ((*x == 2) && (*(x + 4) == 2) && (*(x + 8) == 2))
		win_detect = 0;
	if ((*(x+2) == 1) && (*(x + 4) == 1) && (*(x + 6) == 1))
		win_detect = 1;
	else if ((*(x+2) == 2) && (*(x + 4) == 2) && (*(x + 6) == 2))
		win_detect = 0;
	if (win_detect == 1)
	{
		Sleep(1000);
		printf("��ϲ����ѡ��1Ӯ��\n");
		printf("��ϲ����ѡ��1Ӯ��\n");
		printf("��ϲ����ѡ��1Ӯ��\n");
		printf("��ϲ����ѡ��1Ӯ��\n");
		Sleep(1000);
	}
	else if (win_detect == 0)
	{
		Sleep(1000);
		printf("��ϲ����ѡ��2Ӯ��\n");
		printf("��ϲ����ѡ��2Ӯ��\n");
		printf("��ϲ����ѡ��2Ӯ��\n");
		printf("��ϲ����ѡ��2Ӯ��\n");
		Sleep(1000);
	}
	return win_detect;
}