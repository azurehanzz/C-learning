#include <stdio.h>
void main()
{
	typedef struct st_type
	{
		int i;
		int* p_a;
	}type_a;
	type_a* p = (type_a*)malloc(sizeof(type_a));
	p->i = 100;
	p->p_a = (int*)malloc(p->i * sizeof(int));
	//ҵ����
	for (i = 0; i < 100; i++)
	{
		p->p_a[i] = i;
	}
	//�ͷſռ�
	free(p->p_a);
	p->p_a = NULL;
	free(p);
	p = NULL;
}