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
	//��ʼ��
	Con Contact;
	initi_Con(&Contact);
	int input; 
	//����Ҫ���еĲ��������ŵ�һ������ָ��������
	//������Ҫ�������ŷ�λ�ã�������1Ϊ����ϵ�˼Ȱ�Add_Con�����±�1��
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
		printf("��������Ҫѡ��Ĳ���:\n");
		scanf("%d", &input);
		if (0 <= input && input <= 7)
		{
			//�����±��Լ�����Ĳ���ѡ��Ҫ���еĲ���
			option_arr[input](&Contact);
		}
		else
		{
			printf("�����������������\n");
		}
	}while (input);
}