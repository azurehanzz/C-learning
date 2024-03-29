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
	S s = { "abcdefgg",28,'s' };
	fwrite(&s, sizeof(S), 1, pf);
	fclose(pf);
	pf = NULL;
}