//手工实现strcpy函数
#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* x,const char* y)
{
	assert(x != NULL);
	assert(y != NULL);
	char* ret = x;
	while (*x++ = *y++)
	{
		;
	}
	return ret;
}


int main()
{
	char a[] = { "xxxxxxx" };
	char b[] = { "strcpy" };
	printf("%s", my_strcpy(a, b));
	return 0;
}