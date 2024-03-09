#include <stdio.h>
#include <string.h>
char reverse_str(char* x ,char * z,int y)
{
	if (y - 1 >= 0)
	{
		*(z+y-1) = reverse_str((x + 1), z,y-1);
	}
	return *(x-1);
}
int main()
{
	char a[] = "abcdefdfd";
	char b[10] = "0";
	int n = strlen(a);
	reverse_str(a ,b,n);
	int i;
	for (i = 0; i <= strlen(b); i++)
		a[i] = b[i];
	printf("%s", a);
	return 0;
}