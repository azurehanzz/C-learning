#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���ú����ݹ���n�Ľ׳�

int function(int x)
{
	if (x != 1)
	{
		return(x*function(x - 1));
	}
	return 1;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d",function(a));
	return 0;
}