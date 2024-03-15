//my_strlen
#include <stdio.h>
#include <assert.h>

int my_strlen(const char* str)
{
	assert(str);//str为假报错(既str为空报错)
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return (count);
}


int main()
{
	char a[] =  "I lover coding" ;
	printf("%d\n", my_strlen(a));
	return 0;
}