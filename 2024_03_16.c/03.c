//一瓶汽水一元两个空瓶换一个汽水
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int input;
	scanf("%d", &input);
	int sum = input;
	while (input!=0&&input!=1)
	{
		sum = sum + input/2;
		input = input%2+input / 2;
	}
	printf("%d",sum);
	return 0;
}

