//打印水仙花数
#include <stdio.h>

int my_pow(int a, int b)
{
	int k;
	int sum = a;
	for (k = 1; k < b; k++)
	{
		sum = sum * a;
	}
	return sum;
}
int detect(int x,int y)
{
	if (x > 0)
	{
		return(my_pow(x%10, y) + detect(x / 10, y));
	}
	return 0;

}


int main()
{
	int i;
	int j;
	for (i = 0; i <= 100000; i++)
	{
		j = 1;
		while (i / (my_pow(10, j++)));
		if (i == detect(i, j-1))
		{
			printf("%d ", i);
		}
	}
	return 0;
}