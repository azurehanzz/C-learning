#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int input;
	scanf("%d", &input);
	int i;
	int j;
	for (i = 0; i < input; i++)
	{
		for (j = 0; j < input ; j++)
		{
			if ((i == j) ||( i + j == input - 1))
			{
				printf("*");
			}
			else 
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}