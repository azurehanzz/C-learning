#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main()
{
	int year;
	int month;
	scanf("%d %d", &year, &month);
	if (month > 7)
	{
		if (month % 2 == 0)
			printf("31天\n");
		else
			printf("30天\n");
	}
	else if (month <= 7 && month != 2)
	{
		if (month % 2 == 0)
			printf("30天\n");
		else
			printf("31天\n");
	}
	else
	{
		if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
			printf("29天\n");
		else
			printf("28天\n");
	}
}