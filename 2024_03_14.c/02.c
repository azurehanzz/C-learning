//my_strlen
#include <stdio.h>
#include <assert.h>

int my_strlen(const char* str)
{
	assert(str);//strΪ�ٱ���(��strΪ�ձ���)
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