#include "game.h"
void menu()
{
	printf("***********    扫雷    ***********\n");
	printf("***********   1.play   ***********\n");
	printf("***********   0.exit   ***********\n");
	printf("**********************************\n");
}
void initialBoard(char Board[ROWS][COLS], int row, int col, char set)
{
	int i;
	int j;
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
		{
			Board[i][j] = set;
		}
	return 0;
}
void Display(char Board[ROWS][COLS], int row, int col)
{
	int i;
	int j;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", Board[i][j]);
		}
		printf("\n");
	}

}
void Setmine(char Board[ROWS][COLS], int row, int col, int Difficult, int first_x, int first_y)
{
	int a;
	int b;
	int i = 0;
	for (i = 0; i < Difficult; i++)
	{
	flag:
		a = (rand() % row) + 1;
		b = (rand() % col) + 1;
		if ((Board[a][b] == '0') && ((a != first_x) || (b != first_y)))
		{
			Board[a][b] = '1';
		}
		else
		{
			goto flag;
		}
	}

}
void Detect(char Boardshow[ROWS][COLS], char Boardmine[ROWS][COLS], int row, int col, int Detect_x, int Detect_y, int tabu[ROWS][COLS])
{
	if ((Detect_x >= 1) && (Detect_x <= row) && (Detect_y >= 1) && (Detect_y <= col) && tabu[Detect_x][Detect_y] == 0)
	{
		Boardshow[Detect_x][Detect_y] = Boardmine[Detect_x - 1][Detect_y + 1] + Boardmine[Detect_x][Detect_y + 1]
			+ Boardmine[Detect_x + 1][Detect_y + 1] + Boardmine[Detect_x - 1][Detect_y]
			+ Boardmine[Detect_x - 1][Detect_y - 1] + Boardmine[Detect_x + 1][Detect_y]
			+ Boardmine[Detect_x][Detect_y - 1] + Boardmine[Detect_x + 1][Detect_y - 1] - 7 * '0';
		tabu[Detect_x][Detect_y] = 1;
		if ((Boardshow[Detect_x][Detect_y] == '0'))
		{
			Detect(Boardshow, Boardmine, row, col, Detect_x - 1, Detect_y + 1, tabu);
			Detect(Boardshow, Boardmine, row, col, Detect_x, Detect_y + 1, tabu);
			Detect(Boardshow, Boardmine, row, col, Detect_x + 1, Detect_y + 1, tabu);
			Detect(Boardshow, Boardmine, row, col, Detect_x - 1, Detect_y, tabu);
			Detect(Boardshow, Boardmine, row, col, Detect_x + 1, Detect_y, tabu);
			Detect(Boardshow, Boardmine, row, col, Detect_x - 1, Detect_y - 1, tabu);
			Detect(Boardshow, Boardmine, row, col, Detect_x, Detect_y - 1, tabu);
			Detect(Boardshow, Boardmine, row, col, Detect_x + 1, Detect_y - 1, tabu);
		}
	}
}
void Play(char Boardmine[ROWS][COLS], char Boardshow[ROWS][COLS], int row, int col, int a, int b, int tabu[ROWS][COLS])
{
	int x1 = 0;
	int x2 = 0;
	int i = 0;
	int j = 0;
	while (1)
	{
		while (1)
		{
			printf("请输入:");
			scanf("%d%d", &x1, &x2);
			if ((x1 <= row && x1 >= 1) && (x1 <= col && x2 >= 1) && (Boardshow[x1][x2] == '*'))
			{
				break;
			}
			else
				printf("请输入没有下过的位置\n");

		}
		if (Boardmine[x1][x2] == '1')
		{
			printf("BOOM!\n");
			break;
		}
		else
		{
			Detect(Boardshow, Boardmine, row, col, x1, x2, tabu);
		}
		system("cls");
		Display(Boardshow, ROW, COL);
		int count = 0;
		for (i = 1; i <= row; i++)
		{
			for (j = 1; j <= col; j++)
			{
				if (Boardshow[i][j] == '*')
				{
					count += 1;
					if (count > EASY)
					{
						goto flag;
					}
				}
			}
		}
		if (count == EASY)
		{
			printf("恭喜胜利\n");
			break;
		}
	flag:
		;
	}
}