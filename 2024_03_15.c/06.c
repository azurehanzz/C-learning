#include <stdio.h>
int main()
{
	int n = 9;
	float* pFloat = (float*)&n; 
	printf("n的值为：%d\n", n); // 9 
	printf("*pFloat的值为：%f\n", *pFloat); //00000000 00000000 00000000 00001001
    *pFloat = 9.0;
     printf("num的值为：%d\n", n);//01000001 000100000 00000000 0000000 = 1,091,567,616
     printf("*pFloat的值为：%f\n", *pFloat); //01000010 00010000 00000000 00000000
    return 0;
}