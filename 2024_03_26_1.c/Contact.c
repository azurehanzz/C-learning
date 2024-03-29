#include "contact.h"
static void Add_Capacity(Con* addr)
{
	if (addr->sz == addr->capacity)
	{
		Pepoinfo* ret = (Pepoinfo*)(realloc(addr->data, (addr->capacity + add_size) * sizeof(Pepoinfo)));
		if (ret != NULL)
		{
			addr->data = ret;
		}
		else
		{
			perror("Add_Con");
			return;
		}
		addr->capacity = addr->capacity + add_size;
	}
}
void initi_Con(Con* addr)
{
	//将数据存储在动态内存中
	addr->data = (Pepoinfo*)(malloc(initi_size * sizeof(Pepoinfo)));
	//如果为动态内存不足以分配空间既返回空指针，此时结束初始化
	if (addr->data == NULL)
	{
		perror("initi_Con");
		return;
	}
	addr->sz = 0;
	addr->capacity = initi_size;
	//读取上一次运行的文件
	FILE* pfread = fopen("Contact_save.dat", "r");
	if (pfread == NULL)
	{
		perror("fopen");
		return;
	}
	Pepoinfo temp = { 0 };
	while (fread(&temp, sizeof(Pepoinfo), 1, pfread))
	{
		//判断是否需要扩容
		addr->data[addr->sz] = temp;
		addr->sz++;
		Add_Capacity(addr);
	}
	fclose(pfread);
	pfread = NULL;
}
static int is_Con(Con* addr, char* str)
{
	//按名字搜索是否为结构数组内部的元素
	//如是返回数组下标
	//如不是返回-1
	int i;
	for (i = 0; i < addr->sz; i++)
	{
		if (strcmp(addr->data[i].name, str) == 0)
		{
			return i;
		}
	}
	return -1;
}
void Add_Con(Con* addr)
{
	//首先判断是否动态内存需要扩容
	Add_Capacity(addr);
	//输入数据信息
	printf("请输入需要输入的姓名:\n");
	scanf("%s", addr->data[addr->sz].name);
	printf("请输入需要输入的性别:\n");
	scanf("%s", addr->data[addr->sz].sex);
	printf("请输入需要输入的年龄:\n");
	scanf("%d", &addr->data[addr->sz].age);
	printf("请输入需要输入的手机号:\n");
	scanf("%s", addr->data[addr->sz].phone_num);
	printf("请输入需要输入的地址:\n");
	scanf("%s", addr->data[addr->sz].addr);
	addr->sz++;
}
void Print_Con(Con* addr)
{
	//按照结构体数组的大小下标依次打印数据
	printf("%-20s\t%-10s\t%-s\t%-20s\t%-30s\n", "姓名", "性别", "年龄", "手机号", "地址");
	int i;
	for (i = 0; i < addr->sz; i++)
	{
		printf("%-20s\t%-10s\t%-d\t%-20s\t%-30s\n", addr->data[i].name,
			addr->data[i].sex,
			addr->data[i].age,
			addr->data[i].phone_num,
			addr->data[i].addr);
	}
}
void Del_Con(Con* addr)
{
	printf("请输入要删除的人:");
	char input_name[Max_name];
	scanf("%s", input_name);
	//is_Con为判断是否为结构体内的数据
	//如是返回下标
	//如不是返回-1
	int ret = is_Con(addr, input_name);
	int i;
	if (ret == -1)
	{
		printf("输入无此人\n");
		return;
	}
	//将结构体的数据往前移既删除了当前下标的值
	for (i = ret; i < addr->sz - 1; i++)
	{
		addr->data[i] = addr->data[i + 1];
	}
	printf("删除成功\n");
	addr->sz--;
}
void Search_Con(Con* addr)
{
	printf("请输入要搜索的人:");
	char input_name[Max_name];
	scanf("%s", input_name);
	int ret = is_Con(addr, input_name);
	if (ret == -1)
	{
		printf("输入无此人\n");
		return;
	}
	printf("%-20s\t%-10s\t%-s\t%-20s\t%-30s\n", "姓名", "性别", "年龄", "手机号", "地址");
	printf("%-20s\t%-10s\t%-d\t%-20s\t%-30s\n", addr->data[ret].name,
		addr->data[ret].sex,
		addr->data[ret].age,
		addr->data[ret].phone_num,
		addr->data[ret].addr);
	return;
}
void Modify_Con(Con* addr)
{
	printf("请输入要修改的人:");
	char input_name[Max_name];
	scanf("%s", input_name);
	int ret = is_Con(addr, input_name);
	if (ret == -1)
	{
		printf("输入无此人\n");
		return;
	}
	printf("请输入需要输入的姓名:\n");
	char input_Pepoinfo_name[Max_name];
	scanf("%s", input_Pepoinfo_name);
	strcpy(addr->data[ret].name, input_Pepoinfo_name);
	printf("请输入需要输入的性别:\n");
	char input_Pepoinfo_sex[Max_sex];
	scanf("%s", input_Pepoinfo_sex);
	strcpy(addr->data[ret].sex, input_Pepoinfo_sex);
	printf("请输入需要输入的年龄:\n");
	int input_Pepoinfo_age;
	scanf("%d", &input_Pepoinfo_age);
	addr->data[ret].age = input_Pepoinfo_age;
	printf("请输入需要输入的手机号:\n");
	char input_Pepoinfo_phone_num[Max_phone_num];
	scanf("%s", input_Pepoinfo_phone_num);
	strcpy(addr->data[ret].phone_num, input_Pepoinfo_phone_num);
	printf("请输入需要输入的地址:\n");
	char input_Pepoinfo_addr[Max_addr];
	scanf("%s", input_Pepoinfo_addr);
	strcpy(addr->data[ret].addr, input_Pepoinfo_addr);
	printf("修改成功\n");
}
static int sortbyage(void* struct1, void* struct2)
{
	return((((Pepoinfo*)struct1)->age) - (((Pepoinfo*)struct2)->age));
}
static int sortbyname(void* struct1, void* struct2)
{
	return strcmp((((Pepoinfo*)struct1)->name), (((Pepoinfo*)struct2)->name));
}
void Sort_Con(Con* addr)
{
	printf("请问需要按照什么进行排序\n");
	printf("****1.年龄  2.姓名******\n");
	//利用qsort进行排序
	int input_sort;
	do
	{
		scanf("%d", &input_sort);
		switch (input_sort)
		{
		case 1:
			qsort(addr->data, addr->sz, sizeof(Pepoinfo), sortbyage);
			break;
		case 2:
			qsort(addr->data, addr->sz, sizeof(Pepoinfo), sortbyname);
			break;
		default:
			printf("输入错误请重新输入:\n");
			break;
		}
	} while (input_sort != 1 && input_sort != 2);
	printf("排序成功\n");
}
void Destory_Con(Con* addr)
{
	//保存数据
	Save_data(addr);
	//释放内存
	free(addr->data);
	addr->data = NULL;
	addr->sz = 0;
	addr->capacity = 0;
	printf("结束程序\n");

}
void Save_data(Con* addr)
{
	FILE* pfwrite = fopen("Contact_save.dat", "w");
	if (pfwrite == NULL)
	{
		perror("fopen");
		return;
	}
	int i;
	for (i=0 ;i<addr->sz; i++)
	{
		fwrite(addr->data + i, sizeof(Pepoinfo), 1, pfwrite);
	}
	fclose(pfwrite);
	pfwrite = NULL;
}