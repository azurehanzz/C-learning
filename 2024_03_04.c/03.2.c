#include <stdio.h>
//二分法找数
int binsearch(int x, int v[], int n)
{
	int left = 0;
	int right = n ;
	int i;
	while (left <= right)
	{
		i = (left + right) / 2;
		if (x < v[i])
		{
			right = i - 1;
		}
		else if (x > v[i])
		{
			left = i + 1;
		}
		else
			break;
	}
	return i;
		
}
int main()
{
	int x = 11;
	int v[] = { 2,3,4,5,6,7,8,9,10,11,12 };
	int n = 11;
	int result = binsearch(x, v, n);
	printf("%d", result);
	return 0;
}