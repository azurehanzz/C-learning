//init函数初始数组为0
//printf函数打印每个数组元素
//reverse函数完成数组的逆序
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void init(int* board ,int  n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		board[i] = 0;
	}
}

void print(int* board, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d", board[i]);
	}
}

void reverse(int* board, int n)
{
	int temp = board[n-1];
	board[n - 1] = board[0];
	if (n > 2)
	{
		reverse(board + 1, n - 2);
	}
	board[0] = temp;

}

int main()
{
	int a[9];
	int size = sizeof(a) / sizeof(a[0]);
	init(a, size);
	int i;
	for (i = 0; i < size; i++)
	{
		scanf("%d", a + i);
	}
	print(a,size);
	printf("\n");
	reverse(a,size);
	print(a, size);
	return 0;
}