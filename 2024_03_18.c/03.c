#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int(*parr)[5] = arr;
	printf("%d\n", *(arr + 1));
	printf("%d\n", *(parr + 1));
}