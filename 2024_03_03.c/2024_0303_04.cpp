#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	printf("����1~100�����ж��ܷ�5����\n");
	while ((a<= 1) ||(100<= a))
	{
		scanf("%d", &a);
		if ((1 <= a) && (a <= 100))
		{
			if (a % 5 == 0)
				printf("���Ա�5����\n");
			else
				printf("�����Ա�5����\n");
		}
		else
			printf("Ҫ����1~100����Ŷ\n");
	}
	return 0;
}