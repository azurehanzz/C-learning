#include <stdio.h>

typedef struct st_type
{
	int i;
	int a[];//���������Ա
}type_a;
void main()
{
	//����1
	int i = 0;
	type_a* p = (type_a*)malloc(sizeof(type_a) + 100 * sizeof(int));
	//ҵ����
	p->i = 100;
	for (i = 0; i < 100; i++)
	{
		p->a[i] = i;
	}
	free(p);
}