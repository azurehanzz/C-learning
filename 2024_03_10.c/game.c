#include "game.h"

void initial(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void display(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("  ");
	for (i = 0; i < row; i++)
	{
		printf("%2d  ", i + 1);
	}
	printf("\n");
	for (i = 0; i < row; i++)
	{
		printf("%2d", i + 1);
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n  ");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void player1(char Board[ROW][COL], int row, int col)
{
	printf("���һ������:");
	int a;
	int b;
	while (1)
	{
		scanf("%d%d", &a, &b);
		if ((Board[a - 1][b - 1] == ' ') && a <= row && b <= col)
		{
			Board[a - 1][b - 1] = 'O';
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	}
}
void player2(char Board[ROW][COL], int row, int col)
{
	printf("��Ҷ�������:");
	int a;
	int b;
	while (1)
	{
		scanf("%d%d", &a, &b);
		if ((Board[a - 1][b - 1] == ' ') && a <= row && b <= col)
		{
			Board[a - 1][b - 1] = 'X';
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	}
}
char is_win(char Board[ROW][COL], int row, int col, int windet)
{
	int i = 0;
	int j = 0;
	int k = 0;
	//�ж���
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < (col - windet + 1); j++)
		{
			for (k = 0; k < windet - 1; k++)
			{

				if (((Board[i][j + k] == Board[i][j + k + 1])) && (Board[i][j + k] != ' ') && (Board[i][j + k + 1] != ' '))
				{
					if (k == windet - 2)
					{
						return Board[i][j + k];
					}
				}
				else
				{
					break;
				}
			}
		}
	}
	//�ж���
	for (i = 0; i < col; i++)
	{
		for (j = 0; j < (row - windet + 1); j++)
		{
			for (k = 0; k < windet - 1; k++)
			{

				if (((Board[j + k][i] == Board[j + k + 1][i])) && (Board[j + k][i] != ' ') && (Board[j + k + 1][i] != ' '))
				{
					if (k == windet - 2)
					{
						return Board[j + k][i];
					}
					continue;
				}
				else
				{
					break;
				}
			}
		}
	}
	//�ж���Խ�
	for (i = 0; i < (row - windet + 1); i++)
	{
		for (j = 0; j < (col - windet + 1); j++)
		{
			for (k = 0; k < windet - 1; k++)
			{

				if (((Board[i + k][j + k] == Board[i + k + 1][j + k + 1])) && (Board[i + k][j + k] != ' ') && (Board[i + k + 1][j + k + 1] != ' '))
				{
					if (k == windet - 2)
					{
						return Board[i + k][j + k];
					}
					continue;
				}
				else
				{
					break;
				}
			}
		}
	}
	//�ж��ҶԽ�
	for (i = 0; i < (row - windet + 1); i++)
	{
		for (j = col - 1; j > windet - 2; j--)
		{
			for (k = 0; k < windet - 1; k++)
			{

				if (((Board[i + k][j - k] == Board[i + k + 1][j - k - 1])) && (Board[i + k][j - k] != ' ') && (Board[i + k + 1][j - k - 1] != ' '))
				{
					if (k == windet - 2)
					{
						return Board[i + k][j - k];
					}
					continue;
				}
				else
				{
					break;
				}
			}
		}
	}
	//�ж�ƽ��
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (Board[i][j] == ' ')
				goto flag;
		}
		if ((i == row - 1) && (j == col))
			return'D';
	}
flag:
	return 'C';
}