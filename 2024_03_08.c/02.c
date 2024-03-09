#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void multi_printf(int x)
{
	int i;
	int j;
	for (i = 1; i < x + 1; i++)
	{
		for (j = 1; j < i+1; j++)
		{
			printf("%d x %d =%2d ", i, j, i * j);
		}
		printf("\n");
	}

}


int main(){
	int a = 0;
	scanf("%d", &a);
	multi_printf(a);
	return 0;
}