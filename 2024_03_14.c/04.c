//打印二进制的奇数位和偶数位
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void print_bit(int x)
{
	int i;
	for (i = 31; i>=0; i--)
	{
		printf("%d",(x >> i) % 2);
	}
	printf("\n");

}

int main()
{
	int a;
	scanf("%d", &a);
	int odd = 0;
	int even = 0;
	int i;
	for (i = 0; pow(2, i) < a; i++)
	{
		if ((i+1) % 2 == 1)//奇数情况
		{
			odd = odd + ((a >> i) % 2) * pow(2, i);
		}
		else//偶数情况
		{
			even = even + ((a >> i) % 2) * pow(2, i);
		}
	}
	print_bit(a);
	print_bit(odd);
	print_bit(even);
	return 0;
}