#include <stdio.h>
int main()
{

	printf("%d", (20 + 10 + 20 + 30) * sizeof(char) + 4 * sizeof('\t') + sizeof(int) + sizeof('\n'));
	return 0;
}