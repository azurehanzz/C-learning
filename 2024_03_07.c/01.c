#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void detect(int a)
{
	int i;
	int flag = 1;
	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
			flag = 0;
	}
	if (flag == 0)
		printf("����Ĳ�������");
	else
		printf("�������Ϊ����");
}
int main()
{
	int a;
	printf("������һ�����ж��Ƿ�Ϊ����:");
	scanf("%d",&a);
	detect(a);
	return 0;
}