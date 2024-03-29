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
	//�����ݴ洢�ڶ�̬�ڴ���
	addr->data = (Pepoinfo*)(malloc(initi_size * sizeof(Pepoinfo)));
	//���Ϊ��̬�ڴ治���Է���ռ�ȷ��ؿ�ָ�룬��ʱ������ʼ��
	if (addr->data == NULL)
	{
		perror("initi_Con");
		return;
	}
	addr->sz = 0;
	addr->capacity = initi_size;
	//��ȡ��һ�����е��ļ�
	FILE* pfread = fopen("Contact_save.dat", "r");
	if (pfread == NULL)
	{
		perror("fopen");
		return;
	}
	Pepoinfo temp = { 0 };
	while (fread(&temp, sizeof(Pepoinfo), 1, pfread))
	{
		//�ж��Ƿ���Ҫ����
		addr->data[addr->sz] = temp;
		addr->sz++;
		Add_Capacity(addr);
	}
	fclose(pfread);
	pfread = NULL;
}
static int is_Con(Con* addr, char* str)
{
	//�����������Ƿ�Ϊ�ṹ�����ڲ���Ԫ��
	//���Ƿ��������±�
	//�粻�Ƿ���-1
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
	//�����ж��Ƿ�̬�ڴ���Ҫ����
	Add_Capacity(addr);
	//����������Ϣ
	printf("��������Ҫ���������:\n");
	scanf("%s", addr->data[addr->sz].name);
	printf("��������Ҫ������Ա�:\n");
	scanf("%s", addr->data[addr->sz].sex);
	printf("��������Ҫ���������:\n");
	scanf("%d", &addr->data[addr->sz].age);
	printf("��������Ҫ������ֻ���:\n");
	scanf("%s", addr->data[addr->sz].phone_num);
	printf("��������Ҫ����ĵ�ַ:\n");
	scanf("%s", addr->data[addr->sz].addr);
	addr->sz++;
}
void Print_Con(Con* addr)
{
	//���սṹ������Ĵ�С�±����δ�ӡ����
	printf("%-20s\t%-10s\t%-s\t%-20s\t%-30s\n", "����", "�Ա�", "����", "�ֻ���", "��ַ");
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
	printf("������Ҫɾ������:");
	char input_name[Max_name];
	scanf("%s", input_name);
	//is_ConΪ�ж��Ƿ�Ϊ�ṹ���ڵ�����
	//���Ƿ����±�
	//�粻�Ƿ���-1
	int ret = is_Con(addr, input_name);
	int i;
	if (ret == -1)
	{
		printf("�����޴���\n");
		return;
	}
	//���ṹ���������ǰ�Ƽ�ɾ���˵�ǰ�±��ֵ
	for (i = ret; i < addr->sz - 1; i++)
	{
		addr->data[i] = addr->data[i + 1];
	}
	printf("ɾ���ɹ�\n");
	addr->sz--;
}
void Search_Con(Con* addr)
{
	printf("������Ҫ��������:");
	char input_name[Max_name];
	scanf("%s", input_name);
	int ret = is_Con(addr, input_name);
	if (ret == -1)
	{
		printf("�����޴���\n");
		return;
	}
	printf("%-20s\t%-10s\t%-s\t%-20s\t%-30s\n", "����", "�Ա�", "����", "�ֻ���", "��ַ");
	printf("%-20s\t%-10s\t%-d\t%-20s\t%-30s\n", addr->data[ret].name,
		addr->data[ret].sex,
		addr->data[ret].age,
		addr->data[ret].phone_num,
		addr->data[ret].addr);
	return;
}
void Modify_Con(Con* addr)
{
	printf("������Ҫ�޸ĵ���:");
	char input_name[Max_name];
	scanf("%s", input_name);
	int ret = is_Con(addr, input_name);
	if (ret == -1)
	{
		printf("�����޴���\n");
		return;
	}
	printf("��������Ҫ���������:\n");
	char input_Pepoinfo_name[Max_name];
	scanf("%s", input_Pepoinfo_name);
	strcpy(addr->data[ret].name, input_Pepoinfo_name);
	printf("��������Ҫ������Ա�:\n");
	char input_Pepoinfo_sex[Max_sex];
	scanf("%s", input_Pepoinfo_sex);
	strcpy(addr->data[ret].sex, input_Pepoinfo_sex);
	printf("��������Ҫ���������:\n");
	int input_Pepoinfo_age;
	scanf("%d", &input_Pepoinfo_age);
	addr->data[ret].age = input_Pepoinfo_age;
	printf("��������Ҫ������ֻ���:\n");
	char input_Pepoinfo_phone_num[Max_phone_num];
	scanf("%s", input_Pepoinfo_phone_num);
	strcpy(addr->data[ret].phone_num, input_Pepoinfo_phone_num);
	printf("��������Ҫ����ĵ�ַ:\n");
	char input_Pepoinfo_addr[Max_addr];
	scanf("%s", input_Pepoinfo_addr);
	strcpy(addr->data[ret].addr, input_Pepoinfo_addr);
	printf("�޸ĳɹ�\n");
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
	printf("������Ҫ����ʲô��������\n");
	printf("****1.����  2.����******\n");
	//����qsort��������
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
			printf("�����������������:\n");
			break;
		}
	} while (input_sort != 1 && input_sort != 2);
	printf("����ɹ�\n");
}
void Destory_Con(Con* addr)
{
	//��������
	Save_data(addr);
	//�ͷ��ڴ�
	free(addr->data);
	addr->data = NULL;
	addr->sz = 0;
	addr->capacity = 0;
	printf("��������\n");

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