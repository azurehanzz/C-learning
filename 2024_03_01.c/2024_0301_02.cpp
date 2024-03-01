#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//举例枚举常量
enum weather
{
	sunny,
	cloudy,
	raining,
	stormy,
};
int main()
{
	//举例字面常量
	3.14159;
	99;
	//const修饰的常变量
	const int a = 88;
	printf("%d\n", a);
	//define定义的常量
#define MAX 10086
	printf("max=%d\n", MAX);
	return 0;
}