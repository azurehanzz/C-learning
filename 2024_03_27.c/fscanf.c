#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct S
{
	char a[10];
	int b;
	char c;
}S;

void main()
{
	FILE* pf = fopen("file_open.txt", "r");
	if (pf == NULL)
	{
		perror("fopen:");
		return;
	}
	S s = { 0 };
	fscanf(pf, "%s %d %c", s.a, &s.b, &s.c);
	printf("%s\n%d\n%c\n", s.a, s.b, s.c);
	fclose(pf);
	pf = NULL;
}