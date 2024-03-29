#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i;
	int sum = 0;
	int score;
	int max = 0;
	int min = 100;
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &score);
		sum += score;
		if (max < score)
		{
			max = score;
		}
		if (min > score)
		{
			min = score;
		}
	}
	printf("%.2f\n", (sum - min - max) / 5.0);
}