#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
//��¼�����������Ϊ123456
int main()
{
	char a[10] = { 0 };
	int i = 1;
	while (i <= 3)
	{
		printf("��������λ������:");
		scanf("%s", a);//���鱾�����ǵ�ַ�������"&"
		if (strcmp(a,"123456")==0)//strcmp�Ƚ��ַ����Ƚϵ���ACSII��ֵ
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