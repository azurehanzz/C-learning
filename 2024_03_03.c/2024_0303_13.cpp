#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a=60;
	if (a >= 18)
		if (a <= 30)
			printf("青年");
	else
		printf("未成年");
	
	return 0;
}