#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("�����Ƿ�Ҫд����\nд�Ļ�����1����������0\n");
	int a=2 ;
	while (a != (0||1))
	{
		scanf("%d", &a);
		if (a == 1)
			printf("����ÿ�춼д����");
		else if (a == 0)
			printf("�ؼ�˯����");
		else
		{
			printf("������0����1,�㿴�����������ʲô\n");
			printf("��������һ��\n");
		}
	}
	return 0;
}