#include <stdio.h>
void main()
{
	FILE* pf = fopen("file_open.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}
	char a[10];
	char b[10];
	printf("%s\n", fgets(a, 10, pf));
	printf("%s\n", fgets(b, 10, pf));
	printf("%s\n", b);
	printf("%s\n", a);
	fclose(pf);
	pf = NULL;
}