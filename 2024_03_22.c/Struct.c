#include <stdio.h>

struct Node
{
	int value;
	struct Node* next;
};

void print_chain(struct Node* init)
{
	while (init->next)
	{
		printf("%d", init->value);
		init = init->next;
		if (!(init->next))
		{
			printf("%d", init->value);
		}
	}
}
void main()
{
	struct Node f = { 1,NULL };
	struct Node e = { 2,&f };
	struct Node d = { 3,&e };
	struct Node c = { 4,&d };
	struct Node b = { 5,&c };
	struct Node a = { 6,&b };
	print_chain(&a);
}