#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//������̨�� ����һ�ο�����1-2��̨�ף��������n���м��ַ�ʽ
int function(int x)
{
	if (x == 1)
		return 1;
	else if (x == 2)
		return 2;
	else
		return(2 + function(x-1)+function(x-2));
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d", function(a));
	return 0;
}