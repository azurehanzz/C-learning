#include "game.h"

void game()
{
	srand((unsigned int)time(NULL));
	char show[ROWS][COLS] = { 0 };
	char mine[ROWS][COLS] = { 0 };
	//������������
	int tabu[ROWS][COLS] = { 0 };
	//��ʼ������
	initialBoard(show, ROWS, COLS, '*');
	initialBoard(mine, ROWS, COLS, '0');
	system("cls");
	//չʾ����
	Display(show, ROW, COL);
	//��һ�ε��;
	int x;
	int y;
	printf("Ҫ���Ķ���?\n��ʾһ�����Ҫ�µ�һ�е���������1 3�ͺ�\n");
	scanf("%d%d", &x, &y);
	system("cls");
	//����
	Setmine(mine, ROW, COL, EASY, x, y);
	//�Ų��һ����
	Detect(show, mine, ROW, COL, x, y, tabu);
	Display(show, ROW, COL);
	//����
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
			printf("��������Щʲô?\n");
		}
	} while (input);
}