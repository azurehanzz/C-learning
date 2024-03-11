#include "game.h"
void game()
{
	system("cls");
	char board[ROW][COL];
	//初始化棋盘
	initial(board, ROW, COL);
	//打印棋盘
	display(board, ROW, COL);
	//赢得连续条件
	int win_detect = 5;
	char conclude;
	while (1)
	{
		//玩家1下棋
		player1(board, ROW, COL);
		system("cls");
		//展示棋盘
		display(board, ROW, COL);
		//检测输赢
		conclude = is_win(board, ROW, COL, win_detect);
		if (conclude == 'O')
		{
			printf("玩家一胜利\n");
			break;
		}
		if (conclude == 'D')
		{
			printf("平局\n");
			break;
		}
		//玩家2下棋
		player2(board, ROW, COL);
		system("cls");
		//展示棋盘
		display(board, ROW, COL);
		//检测输赢
		conclude = is_win(board, ROW, COL, win_detect);
		if (conclude == 'X')
		{
			printf("玩家二胜利\n");
			break;
		}
		if (conclude == 'D')
		{
			printf("平局\n");
			break;
		}
	}

}


int main()
{
	int a = 0;
	do
	{
		menu();
		scanf("%d", &a);
			switch (a)
			{
			case 1:
				game();
				break;
			case 0:
				break;
			default:
				printf("输入错误\n");
			}
	} while (a);
	return 0;
}

menu()
{
	printf("**********************\n");
	printf("*****1   play   ******\n");
	printf("*****0   exit   ******\n");
	printf("**********************\n");
}