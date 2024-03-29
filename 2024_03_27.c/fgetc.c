#include <stdio.h>
void main()
{
	FILE* pf = fopen("file_open.txt", "r");
	int ret = fgetc(pf);
	printf("%c", ret);
	ret = fgetc(pf);
	printf("%c", ret);
    ret=fgetc(pf);
	printf("%c", ret);    
	ret=fgetc(pf);
	printf("%d", ret);
	fclose(pf);
	pf = NULL;
}