#include <stdio.h>
#include<assert.h>
void* my_memmove(void* dest, void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	if (dest > src)
	{
		while (num--)
		{
			*(((char*)dest) + num) = *(((char*)src+num)); //从后面开始传址
		}
   }
	else
	{
		while (num--)
		{
			//从前面开始传址
			*((char*)dest) = *((char*)src);
			dest = ((char*)dest) + 1;
			src = ((char*)src) + 1;
		}
	}
	return ret;
}
print(int* arr, int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		printf("%d", arr[i]);
	}
}

void main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(a + 2, a, 5);
	print(a, 10);
}