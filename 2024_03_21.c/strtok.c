#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>

char* my_strtok(const char* str1,const char* str2)
{
	assert(str2);
	static char* flag;//���ֲ���������Ϊȫ�ֱ���
	if (str1)
	{
		flag = str1;
	}
	if (flag == NULL || *flag == '\0')
	{
     return NULL;
    }
	char* first_str = flag;
	char* cp = str2;
	while (*flag)
	{
		cp = str2;
		while (*cp) //Ѱ���Ƿ�����Ҫ�и���ַ�
		{
			if (*flag != *cp)
			{
				cp++;
			}
			else
			{
				*flag++ = '\0';
				return(first_str);
			}
		}
		flag++;
	}
	return(first_str);
}

void main()
{
	char a[] = "www.4399@qq.com";
	char temp[20];
	strcpy(temp, a);
	char b[] = ".@";
	char* ret;
	for (ret = my_strtok(temp, b);ret; ret = my_strtok(NULL, b))
	{
		printf("%s\n", ret);
	}
}