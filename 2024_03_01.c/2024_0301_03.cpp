#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
enum weather
{
	sunny,
	cloudy,
	raining,
	stormy,
};
int main()
{
	printf("%d %d %d %d", sunny, cloudy, raining, stormy);
	return 0;
}