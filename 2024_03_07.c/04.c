#include <stdio.h>
void ADD(int* x)
{
	*x=*x + 1;
}
int main()
{
	int num = 0;
	while (1)
	{
		ADD(&num);
		if (num == 5)
		{
			printf("�Ѿ����������\n����numΪ:%d", num);
			break;
		}
	}
	return 0;
}