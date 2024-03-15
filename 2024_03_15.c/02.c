//将一句话单词倒置,标点不倒置
#include <stdio.h>

int main()
{
	char a[100];
	gets(a);
	char b[100];
	int n;
	int i;
	int j;
	int k = 0;
	n =( sizeof(a) / sizeof(a[0]))-1;
	int flag=0;
	for (i = n - 1; i >=-1; i--)
	{
		if ((a[i] == ' ')||(i==-1))
		{
			flag += 1;
			for (j = i + 1; (a[j] != ' ') && (a[j] != '\0'); j++)
			{
				b[k++] = a[j];
			}
			if (a[j] != '\0')
			{
				b[k++] = a[j];
			}
			if (i == n - 1)
			{
				b[k++] = a[i];
			}
			if (flag == 1)
			{
				b[k++] = ' ';
			}
		}
	}
	b[k] = '\0';
	printf("%s", b);
}