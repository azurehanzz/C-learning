#include <stdio.h>
#include <string.h>
//½»»»×Ö·û´®´ÎĞò
reverse_str(char* str)
{
	int n = strlen(str);
	char temp = str[0];
	str[0] = str[n - 1];
	str[n - 1] = '\0';
	if (n > 2)
	{
		reverse_str(str + 1);
	}
	str[n - 1] = temp;
}


int main()
{
	char a[] = { "abcdefg" };
	reverse_str(a);
	printf("%s",a);
	return 0;
}