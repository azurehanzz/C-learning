#include <stdio.h>
#include <assert.h>
int my_strcmp(const char* x,const char* y)
{
	assert(x && y);
	while (*x && *y)
	{
		if (*x != *y)
		{
			return(int)(*x - *y);
		}
		x++;
		y++;
	}
	return (int)(*x - *y);
}

void main()
{
	char a[] = "ab0efd";
	char b[] = "ab0eed";
	if (my_strcmp(a, b) > 0)
	{
		printf("a>b");
	}
	else if (my_strcmp(a, b) < 0)
	{
		printf("a<b");
	}
	else
	{
		printf("a=b");
	}
}