#include <stdio.h>
void main()
{
	FILE* pf = fopen("file_open.txt", "w");
	fputc('b', pf);
	fputc('i', pf);
	fputc('t', pf);

	fclose(pf);
	pf = NULL;
}