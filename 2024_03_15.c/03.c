#include <stdio.h>
#include <string.h>

void reverse(char* x,int y)
{
	int left = 0;
	int right = y - 1;
	int temp;
	while (left < right)
	{
		temp = *(x + right);
		*(x + right) = *(x + left);
		*(x + left) = temp;
		left++;
		right--;
	}
}

int main()
{
	char a[100];
	gets(a);
	int n =strlen(a);
	reverse(a,n);
	int end = 0;
	int init = 0;
	do
	{
		init = end;
		while (a[end] != ' '&&(a[end]!='\0'))
		{
			end++;
		}
		reverse(&a[init], end - init);
		end++;

	} while (a[end-1]);
	printf("%s", a);
}