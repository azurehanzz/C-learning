#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	printf("�������ڼ�:");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("�����ǹ�����");
		break;
	case 6:
	case 7:
		printf("��������Ϣ��");
		break;
	default:
		printf("������1-7������");
		break;
			
	}
	return 0;
}