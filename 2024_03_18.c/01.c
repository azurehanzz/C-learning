#include<stdio.h>
int main()
{
	char* a = { "test" };
	printf("%c\n", *a + 1);
	printf("%c\n", *(a + 1));
	printf("%s\n", a + 1);
	printf("%s\n", *a);
	return 0;
}