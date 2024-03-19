#include <stdio.h>

void ADD(int b)
{
	b = b + 3;
	printf("%d\n", b);
}

void (*signal(int a, void(*random)(int)))(int)
{

	random(a);
	return ADD;
}

int main()
{
	int x = 1;
	signal(x, ADD)(4);
}