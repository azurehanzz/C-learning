#include <stdio.h>
//����1-10�Ľ׳����
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