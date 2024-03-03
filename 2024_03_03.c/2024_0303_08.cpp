#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct stu
{
	char name[ 20 ];
	int age;
	double weight;
};
int main()
{
	stu s = { "azure",18,78.77 };
	printf("name:%s\nage:%d\nweight:%lf\n", s.name, s.age, s.weight);
	return 0;
}