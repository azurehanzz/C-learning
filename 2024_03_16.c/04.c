#include <stdio.h>
int main()
{
	char killer = '0';
	for (killer='A';killer<='D';killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		{
			printf("killer �� %c", killer);
			break;
		}
	}
	return 0;
}