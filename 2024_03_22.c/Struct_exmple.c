#include <stdio.h>
struct stu
{
	char name[20];//����
	int age;//����
	char sex[5];//�Ա�
	char id[20];//ѧ��
}s2 = { "Hardworker2",28,"Ů","20240323002" };
void main()
{
	struct stu s1 = { "Hardworker1",18,"��","20240323001" };
	printf("%s %d %s %s\n", s1.name, s1.age, s1.sex, s1.id);
	printf("%s %d %s %s\n", s2.name, s2.age, s2.sex, s2.id);
}