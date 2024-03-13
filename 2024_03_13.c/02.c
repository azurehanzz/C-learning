//交换数组
#include <stdio.h>
void print(int* board, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d", board[i]);
	}
	printf("\n");
}

int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int i;
	printf("原先的两个序列为:\n");
	printf("a:");
	print(a, 10);
	printf("b:");
	print(b, 10);
	for (i = 0; i < 10;i++)
	{
		a[i] = a[i] ^ b[i];
		b[i] = b[i] ^ a[i];
		a[i] = b[i] ^ a[i];
	}
	printf("交换后的序列为:\n");
	printf("a:");
	print(a, 10);
	printf("b:");
	print(b, 10);
	return 0;
}