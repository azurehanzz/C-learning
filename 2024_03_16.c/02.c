//¥Ú”°¡‚–Œ
#define ROW 55
#define COL 55
#include <stdio.h>
int main()
{
	char a[ROW][COL];
	int i;
	int j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			a[i][j]=' ';
		}
	}
	int left = COL/2;
	int right = left+1;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < right - left; j++)
		{
			a[i][left+j] = '*';
		}
		if (i < COL/2)
		{
			left--;
			right++;
		}
		else
		{
			left++;
			right--;
		}
	}
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}