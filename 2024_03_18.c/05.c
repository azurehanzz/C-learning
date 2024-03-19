#include <stdio.h>
int ADD(int x1, int y1)
{
	return x1 + y1;
}
int SUB(int x2, int y2)
{
	return x2 - y2;
}


int main()
{
	int (*a[2]) (int , int ) = { ADD,SUB };
	printf("%d",a[0](3, 4));
	printf("%d",a[1](3, 4));

	int (*(*pa)[2])(int , int ) = &a;


}