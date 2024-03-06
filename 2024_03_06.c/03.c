#include <stdio.h>
void nomeaning(int a,int b)
{
	a = 20;
	b = 10;
	return 0;
}
int main()
{
	int a = 10;
	int b = 20;
	nomeaning(a, b);
	printf("%d%d", a, b);
	return 0;
}