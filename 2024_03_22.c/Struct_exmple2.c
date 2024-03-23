#include <stdio.h>
struct Point
{
	int x;
	int y;
}p1;
struct Point p2;
//声明类型的同时定义变量p1
 //定义结构体变量p2
 //初始化：定义变量的同时赋初值。
struct Point p3 = { x, y };
struct Stu
{
	//类型声明
	char name[15];//名字
	int age;
	//年龄
};
struct Stu s = { "zhangsan", 20 };//初始化
struct Node
{
	int data;
	struct Point p;
	struct Node* next;
}n1 = { 10, {4,5}, NULL };
//结构体嵌套初始化
struct Node n2 = { 20, {5, 6}, NULL };//结构体嵌套初始化