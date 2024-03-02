#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "Test";
	char arr2[] = { 'T','e','s','t' };
	char arr3[] = { 'T', 'e', 's', 't', '\0' };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	printf("arr1的长度为%d\narr2的长度为%d\narr3的长度为%d\n", strlen(arr1), strlen(arr2), strlen(arr3));
	return 0;
}