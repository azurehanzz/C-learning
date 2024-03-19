#include <stdio.h>

test(int(* a)[5])
{
	printf("%d\n%d\n%d", **a,*( (*(a + 1)) + 1),**(a+1));
}


int main()
{
	int a[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	test(a);
	return 0;
}