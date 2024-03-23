#include <stdio.h>
void* my_memcpy(void* mem1,const void* mem2, size_t n)
{
	void* ret = mem1;
	while (n--)
	{
		*((char*)mem1) = *((char*)mem2);
		mem1 = ((char*) mem1)++;
		mem2 = ((char*)mem2)++;
	}
	return ret;
}
print(int* arr,int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		printf("%d", arr[i]);
	}
}
void main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[20] = { 0 };
	my_memcpy(b, a, 20);
	print(b, 20);
}