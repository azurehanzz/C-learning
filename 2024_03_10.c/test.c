#include "game.h"
void game()
{
	system("cls");
	char board[ROW][COL];
	//��ʼ������
	initial(board, ROW, COL);
	//��ӡ����
	display(board, ROW, COL);
	//Ӯ����������
	int win_detect = 5;
	char conclude;
	while (1)
	{
		//���1����
		player1(board, ROW, COL);
		system("cls");
		//չʾ����
		display(board, ROW, COL);
		//�����Ӯ
		conclude = is_win(board, ROW, COL, win_detect);
		if (conclude == 'O')
		{
			printf("���һʤ��\n");
			break;
		}
		if (conclude == 'D')
		{
			printf("ƽ��\n");
			break;
		}
		//���2����
		player2(board, ROW, COL);
		system("cls");
		//չʾ����
		display(board, ROW, COL);
		//�����Ӯ
		conclude = is_win(board, ROW, COL, win_detect);
		if (conclude == 'X')
		{
			printf("��Ҷ�ʤ��\n");
			break;
		}
		if (conclude == 'D')
		{
			printf("ƽ��\n");
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
				printf("�������\n");
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