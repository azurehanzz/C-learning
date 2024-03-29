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
	fread(&s, sizeof(S), 1, pf);
	printf("%s %d %c", s.a, s.b, s.c);
	fclose(pf);
	pf = NULL;
}