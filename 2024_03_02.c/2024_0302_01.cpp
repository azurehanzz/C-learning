#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����ѭ��ʵ�ִ�1-100���ۼ�
int main()
{
	int sum = 0;
	int i = 1;
	while (i <= 100)
	{
		sum = i + sum;
		printf("��%d�����,��ӽ��Ϊ%d\n",i,sum);
		i++;
	}
	printf("�����ۼӽ��Ϊ%d\n", sum);
	return 0;
}