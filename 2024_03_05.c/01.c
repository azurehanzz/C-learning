//�ػ����� ���õ� system("shutdown -s -t 60") system("shutdown -a"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	printf("��ע�⣡�������ĵ��Լ�����60���ػ���\n����������ȡ���ػ���");
	char a[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		scanf("%s", a);
		if (strcmp(a, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}