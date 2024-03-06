//找出100~200之间的素数 利用flag
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 100;
	int j = 0;
	int count = 0;
	for (i = 101; i < 201; i += 2)
	{
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			count += 1;
			printf("%d ", i);
	}
	printf("\n素数的个数为%d", count);
	return 0;
}