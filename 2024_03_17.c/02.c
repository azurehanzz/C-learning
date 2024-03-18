//qsort(void* base,size,width,void(*com)(const void *,const void * )
#include <stdio.h>
int com_str(void* x1, void* y1)
{
	return(*((char*)x1) - *((char*)y1));
}
void swap(void* x2, void* y2, int width2)
{
	int i;
	char temp;
	for (i = 0; i < width2; i++)
	{
		temp = *((char*)x2 + i);
		*((char*)x2 + i) = *((char*)y2 + i);
		*((char*)y2 + i) = temp;
	}
}
void bubble_sort(void* base, int size, int width, int(*com)(const void*, const void*))
{
	int i;
	int j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (com(((char*)base + j * width), ((char*)base + (j + 1) * width)) > 0)
			{
				swap(((char*)base + j * width), ((char*)base + (j + 1) * width), width);
			}
		}
	}
}
int main()
{
	char b[] = "fedcba";
	int sz = (sizeof(b) / sizeof(b[0]))-1;
	int wd = sizeof(b[0]);
	printf("%s\n", b);
	bubble_sort(b, sz, wd, com_str);
	printf("%s\n", b);
}