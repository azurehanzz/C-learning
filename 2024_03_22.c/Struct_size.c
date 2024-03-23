#include <stdio.h>
struct S1
{
	char c1;
	int i;
	char c2;
};
void main()
{
	printf("%d\n", sizeof(struct S1));
}