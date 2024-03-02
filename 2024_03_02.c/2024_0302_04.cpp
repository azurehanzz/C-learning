#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float Multi(float a, float b)
{
	float c = a * b;
	return c;
}
int main()
{
	float A[10] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0 };
	float z = 0;
	z = Multi(A[0], A[9]);
	printf("输出结果为%f", z);
	return 0;
}