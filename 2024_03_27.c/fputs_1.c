#include <stdio.h>
void main()
{
	FILE* pf = fopen("file_open.txt","w");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}
	fputs("ABCDEF\n", pf);
	fputs("FEDCBA\n", pf);
	fclose(pf);
	pf = NULL;
}