//��д�����ҳ�����������1�ĸ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	int i;
	int count = 0;
	scanf("%d", & a);
	for (i = 0; (int)pow(2, i) < a; i++)
	{
		if ((a ^ (int)pow(2, i)) < a)
		{
			count += 1;
		}
	}
	printf("a�Ķ�����1�ĸ���Ϊ%d", count);
	return 0;
}