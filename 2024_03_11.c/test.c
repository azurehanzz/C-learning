#include "game.h"

void game()
{
	srand((unsigned int)time(NULL));
	char show[ROWS][COLS] = { 0 };
	char mine[ROWS][COLS] = { 0 };
	//禁忌搜索数组
	int tabu[ROWS][COLS] = { 0 };
	//初始化棋盘
	initialBoard(show, ROWS, COLS, '*');
	initialBoard(mine, ROWS, COLS, '0');
	system("cls");
	//展示棋盘
	Display(show, ROW, COL);
	//第一次点击;
	int x;
	int y;
	printf("要下哪儿呢?\n演示一下如果要下第一行第三列输入1 3就好\n");
	scanf("%d%d", &x, &y);
	system("cls");
	//埋雷
	Setmine(mine, ROW, COL, EASY, x, y);
	//排查第一次雷
	Detect(show, mine, ROW, COL, x, y, tabu);
	Display(show, ROW, COL);
	//排雷
	Play(mine, show, ROW, COL, x, y, tabu);
}


int main()
{
	int input;
	do {
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("你在输入些什么?\n");
		}
	} while (input);
}