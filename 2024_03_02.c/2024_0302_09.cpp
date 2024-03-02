#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
extern int global;
int main()
{
	printf("%d", global);
	return 0;
}