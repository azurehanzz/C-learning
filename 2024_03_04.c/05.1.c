#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��¼�����������Ϊ123456
int main()
{
	int a = 0;
	int i = 1;
	while (i <= 3)
	{
		printf("��������λ������:");
		scanf("%d", &a);
		if (a == 123456)
		{
			printf("������ȷ\n");
			break;
		}
		else
		{
			i++;
			if (i == 4)
				break;
			printf("���������������������\n");
		}		
	}
	if (i == 4)
		printf("��������������Ժ�����");
	else
		printf("��ӭ");
	return 0;
}