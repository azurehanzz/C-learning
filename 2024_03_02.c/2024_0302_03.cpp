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
	printf("��������Ҫ��˵�������\n");
	scanf("%f %f" ,&a,&b);
	c = Multi(a, b);
	printf("��˽��Ϊ%f",c);
	return 0;
}