#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//利用循环实现从1-100的累加
int main()
{
	int sum = 0;
	int i = 1;
	while (i <= 100)
	{
		sum = i + sum;
		printf("第%d次相加,相加结果为%d\n",i,sum);
		i++;
	}
	printf("最后的累加结果为%d\n", sum);
	return 0;
}