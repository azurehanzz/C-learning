//12.01
#include <stdio.h>
int my_strlen(char* x)
{
	if (*x != '\0')
	{
		x++;
		return(1+my_strlen(x));
	}
	return 0;
}
int main()
{
	char a[] = "AUT";
	printf("%d", my_strlen(a));
}