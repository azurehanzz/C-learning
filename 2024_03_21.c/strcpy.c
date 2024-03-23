//Ä£ÄâÊµÏÖstrcpy
#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char* pdest = dest;
	assert(dest && src);
	while (*dest++ = *src++)
	{
		;
	}
	return pdest;
}

int main()
{
	char a[20] = "I love coding";
	char b[20] = { 0 };
	printf("%s", my_strcpy(b, a));
	return 0;
}