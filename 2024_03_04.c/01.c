#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����n!
int main()
{
	int i = 1;
	int a = 0;
	int result = 1;
	printf("������һ�����������׳�:");
	scanf("%d", &a);
	for (i = 1; i < (a + 1); i++)
	{
		result = result * i;
	}
	printf("\n�׳˽��Ϊ%d", result);
	return 0;
}