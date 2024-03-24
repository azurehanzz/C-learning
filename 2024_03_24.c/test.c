#include "contact.h"
void menu()
{
	printf("************************\n");
	printf("*   1.Add     2.Del    *\n");
	printf("*   3.Search  4.Modify *\n");
	printf("*   5.Sort    6.Print  *\n");
	printf("*       0.Exit         *\n");
	printf("************************\n");
}
void main()
{
	//初始化
	Con Contact;
	initi_Con(&Contact);
	int input; 
	//将需要进行的操作函数放到一个函数指针数组内
	//根据需要的需求排放位置，如输入1为加联系人既吧Add_Con放在下标1处
	void (*option_arr[7])(Con * addr) = { 
		Destory_Con ,
		Add_Con,
		Del_Con,
		Search_Con,
		Modify_Con,
		Sort_Con,
		Print_Con };
	do
	{
		menu();
		printf("请输入需要选择的操作:\n");
		scanf("%d", &input);
		if (0 <= input && input <= 7)
		{
			//根据下标以及输入的参数选择要进行的操作
			option_arr[input](&Contact);
		}
		else
		{
			printf("输入错误请重新输入\n");
		}
	}while (input);
}