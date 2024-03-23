#include <stdio.h>
#include <assert.h>
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* pdest = dest;
	while (*dest)//找到结束字符
	{
		dest++;
	}
	while (*dest++ = *src++);//进行后面的增加拷贝
	return pdest;
}

int main()
{
	char a[30] = {"I love coding"};
	char b[] = "I love too";
	printf("%s\n", my_strcat(a, b));
	return 0;
}