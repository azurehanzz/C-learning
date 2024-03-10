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
		  printf("请重新输入一遍!\n");
		  break;
	  }
	} while(a);
}

int menu()
{
	printf("#####三字棋#####\n");
	printf("###输入1开始####\n");
	printf("###输入0结束####\n");
	printf("################\n");
	int begin = 0;
	scanf("%d", &begin);
	return(begin);
}

game()
{
	system("cls");
	printf("输入1-9选择填入的格子\n");
	printf("请记住每个格子的位置\n");
	printf("1#\t2#\t3#\n4#\t5#\t6#\n7#\t8#\t9#\n");
	printf("输入1继续:");
	int input;
	scanf("%d", &input);
	while (input != 1)
	{
		printf("输入错误请重新输入\n");
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
			//玩家1输入情况
			if (i % 2 != 0)
			{
				printf("玩家1请输入:");
				scanf("%d", &b);
				//判断是否已经有输入
				while (detect[(b - 1) / 3][(b - 1) % 3] != 0)
				{
					printf("方格内已有棋子，请重新输入");
					scanf("%d", &b);
				}
				detect[(b - 1) / 3][(b - 1) % 3] = 1;
				z[(b - 1) / 3][(2 * ((b - 1) % 3))] = 'O';
				system("cls");
				Sleep(100);
				printf("%s\n%s\n%s\n", z[0], z[1], z[2]);
			}
			//玩家2输入情况
			else if (i % 2 == 0)
			{
				printf("玩家2请输入:");
				scanf("%d", &b);
				//判断是否已经有输入
				while (detect[(b - 1) / 3][(b - 1) % 3] != 0)
				{
					printf("方格内已有棋子，请重新输入");
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
			//玩家1输入情况
		}
		if (i == 10)
		{
			printf("很遗憾你们的水平相当\n");
		}
		printf("请问是否需要继续\n");
		printf("输入任意数字继续\n输入0退出到主界面:");
		scanf("%d", &replay);
		system("cls");
	}
	return 0;
}

int win(int* x)
{
	int win_detect=2;
	int k = 0;
	//竖直三种赢的方式
	for (k = 0; k < 3; k++)
	{
		if ((*(x + k) == 1) && (*(x + k + 3) == 1) && (*(x + k + 6) == 1))
			win_detect = 1;
		else if ((*(x + k) == 2) && (*(x + k + 3) == 2) && (*(x + k + 6) == 2))
			win_detect = 0;
	}
	//水平三种赢得方式
	for (k = 0; k < 7; k += 3)
		{
			if ((*(x + k) == 1) && (*(x + k + 1) == 1) && (*(x + k + 2) == 1))
				win_detect = 1;
			else if ((*(x + k) == 2) && (*(x + k + 1) == 2) && (*(x + k + 2) == 2))
				win_detect = 0;
		}
	//对角线方式
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
		printf("恭喜！！选手1赢了\n");
		printf("恭喜！！选手1赢了\n");
		printf("恭喜！！选手1赢了\n");
		printf("恭喜！！选手1赢了\n");
		Sleep(1000);
	}
	else if (win_detect == 0)
	{
		Sleep(1000);
		printf("恭喜！！选手2赢了\n");
		printf("恭喜！！选手2赢了\n");
		printf("恭喜！！选手2赢了\n");
		printf("恭喜！！选手2赢了\n");
		Sleep(1000);
	}
	return win_detect;
}