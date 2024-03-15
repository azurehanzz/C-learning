//ÅÐ¶Ï»úÆ÷×Ö½ÚÐò
#include <stdio.h>
int main()
{
	int a = 0x11223344;
	char* b = &a;
	printf("%d\0", *b - *(b+1));
	if (*b - *(b+1) > 0)
	{
		printf("Ð¡¶Ë");
	}
}