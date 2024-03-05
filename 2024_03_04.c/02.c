#include <stdio.h>
//计算1-10的阶乘相加
int main()
{
	int i;
	int j;
	int temp;
	int result = 0;
	for (i = 1; i < 11; i++)
	{
		for (j = 1 , temp = 1; j < 11; j++)
		{
			if (j <= i)
				temp = temp * j;

		}
		result = result + temp;
	}
	printf("%d", result);
	return 0;
}