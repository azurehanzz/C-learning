#include <stdio.h>
#include <assert.h>
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* pdest = dest;
	while (*dest)//�ҵ������ַ�
	{
		dest++;
	}
	while (*dest++ = *src++);//���к�������ӿ���
	return pdest;
}

int main()
{
	char a[30] = {"I love coding"};
	char b[] = "I love too";
	printf("%s\n", my_strcat(a, b));
	return 0;
}