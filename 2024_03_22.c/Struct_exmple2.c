#include <stdio.h>
struct Point
{
	int x;
	int y;
}p1;
struct Point p2;
//�������͵�ͬʱ�������p1
 //����ṹ�����p2
 //��ʼ�������������ͬʱ����ֵ��
struct Point p3 = { x, y };
struct Stu
{
	//��������
	char name[15];//����
	int age;
	//����
};
struct Stu s = { "zhangsan", 20 };//��ʼ��
struct Node
{
	int data;
	struct Point p;
	struct Node* next;
}n1 = { 10, {4,5}, NULL };
//�ṹ��Ƕ�׳�ʼ��
struct Node n2 = { 20, {5, 6}, NULL };//�ṹ��Ƕ�׳�ʼ��