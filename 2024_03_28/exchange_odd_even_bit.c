#include <stdio.h>

#define exchang_bit(x) x=(((x&0xaaaaaaaa)>>1)+( (x&0x5555555)<<1))


void printf_bit(int num)
{
	int i = 0;
	for (i = 0; i < 8; i++)
	{
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
}


void main()
{
	int a = 39;
	printf_bit(a);
	exchang_bit(a);
	printf_bit(a);
}