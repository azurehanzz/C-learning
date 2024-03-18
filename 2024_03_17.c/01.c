//qsort(void* base,size,width,void(*com)(const void *,const void * )
#include <stdio.h>
int com_int(void*x1, void*y1)
{
	return (*(int*)x1 - *(int*)y1);
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
void bubble_sort(void* base, int size, int width, int(*com)(const void*,const void*))
{
	int i;
	int j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size-i-1; j++)
		{
			if (com(((char*)base + j * width), ((char*)base + (j + 1) * width)) > 0)
			{
				swap(((char*)base + j * width), ((char*)base + (j + 1) * width),width);
			}
		}
	}
}
void print(int arr[], int sz1)
{
	int i;
	for (i = 0; i < sz1; i++)
	{
		printf("%d", *(arr+i));
	}
	printf("\n");
}
int main()
{
	int a[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = (sizeof(a) / sizeof(a[0]));
	int wd = sizeof(a[0]);
	print(a, sz);
	bubble_sort(a, sz, wd, com_int);
	print(a, sz);
}