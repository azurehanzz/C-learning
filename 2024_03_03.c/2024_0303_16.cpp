#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	char b;
	while (a != 123456)
	{
		printf("������һ����λ������:");
		scanf("%d", &a);
		printf("\n��ȷ�������������,����Y/N:");
		b = getchar();
		if (b == 'Y')
		{
			if (a != 123456)
				printf("��������������\n");
			else
				printf("��ϲ��������ȷ");
		}
		else
			printf("������ȷ��\n");
	}

	return 0;
}