//模拟实现strstr
#include <stdio.h>
#include <assert.h>
char* my_strstr(const char* str1,const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = NULL;
	const char* sflag = NULL;
	if (*str2 == '0')
	{
		return str1;
	}
	do {
		sflag = s1;
		s2 = str2;
		while ((*sflag == *s2)&&*sflag&&*s2)
		{
			if (*(s2+1) == '\0')
			{
				return (sflag);
			}
			sflag++, s2++;
		}
	} while (*s1++);
	return 0;
}
int main()
{
	char a[] = "aaasdfasdfqw";
	char b[] = "sdf";
	char* ret = my_strstr(a, b);
	if (ret == 0)
	{
		printf("没有找到");
	}
	else
	{
		printf("找到了\n");
		printf("%s\n", ret);
	}
	return 0;
}