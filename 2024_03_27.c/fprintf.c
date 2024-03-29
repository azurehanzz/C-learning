#include <stdio.h>
typedef struct S
{
	char a[10];
	int b;
	char c;
}S;

void main()
{
	FILE* pf = fopen("file_open.txt", "w");
	if (pf == NULL)
	{
		perror("fopen:");
		return;
	}
	S s = { "abcdef",18,'g' };
	fprintf(pf, "%s %d %c", s.a, s.b, s.c);
	fclose(pf);
	pf = NULL;
}