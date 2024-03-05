#include <stdio.h>
int binsearch(int x, int v[], int n)
{
	int i = 0;
	while (i < n)
	{
		if (v[i] == x)
		{
			return i;
			break;
		}
		else
			i++;
	}
}
int main()
{
	int x = 10;
	int v[] = { 2,3,4,5,6,7,8,9,10,11,12 };
	int n = 11;
	int result = binsearch( x, v, n);
	printf("%d", result);
	return 0;
}