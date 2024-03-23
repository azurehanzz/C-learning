#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void Left_Rotate(char str[], int x,int y)
{
	int i = 0;
	int temp;
	while (x - 1 >= 0)
	{
		temp = str[y - 1 - i];
		str[y - 1 - i] = str[x - 1];
		str[x - 1] = temp;
		i++;
		x--;
	}
}

void main()
{
	char a[] = "ABCDEF";
	int n1;
	int n2 = strlen(a);
	printf("%s\n", a);
	do {
		scanf("%d", &n1);
	} while (( n1 > strlen(a))&&(n1<=0));
	Left_Rotate(a, n1 ,n2 );
	printf("%s\n", a);
}