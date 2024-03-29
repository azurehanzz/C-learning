#include <stdio.h>
void main()
{
	int ret = fgetc(stdin);
	printf("%c", ret);	
	ret = fgetc(stdin);
	printf("%c", ret);	
	ret = fgetc(stdin);
	printf("%c", ret);
}