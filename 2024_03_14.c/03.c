//�������������Ʋ�ͬ��λ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int bit_diff_count(int a, int b)
{
	int count = 0;
	int c = a ^ b;
	int i;
	for (i = 1; i < 32; i++)
	{
		c >> i;
		if (c % 2 != 0)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int a;
	int b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("λ����ͬ�ĸ���Ϊ:%d\n",bit_diff_count(a, b));
}	