#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float Multi(float a, float b)
{
	float c = a * b;
	return c;
}
int main()
{
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	printf("请输入需要相乘的两个数\n");
	scanf("%f %f" ,&a,&b);
	c = Multi(a, b);
	printf("相乘结果为%f",c);
	return 0;
}