#pragma once
//version 1.дһ��ͨѶ¼������������Ϣ�����������Ա����䡢�绰����ַ
//��ҪͨѶ¼�߱�:���ӡ�ɾ�����������޸ġ�����չʾ���˳�

//version2.���ö�̬�ڴ�ķ��䷽ʽ

//version3.���ݱ���
#define _CRT_SECURE_NO_WARNINGS
#define Max_name 20
#define Max_sex 10
#define Max_phone_num 20
#define Max_addr 30
#define initi_size 3
#define add_size 2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
typedef struct Pepoinfo
{
	char name[Max_name];
	char sex[Max_sex];
	int age;
	char phone_num[Max_phone_num];
	char addr[Max_addr];
}Pepoinfo;
typedef struct Con
{
	Pepoinfo* data;
	int sz;
	int capacity;
}Con;
void initi_Con(Con* addr);
void Add_Con(Con* addr);
void Print_Con(Con* addr);
void Del_Con(Con* addr);
void Search_Con(Con* addr);
void Modify_Con(Con* addr);
void Sort_Con(Con* addr);
void Destory_Con(Con* addr);
void Save_data(Con* addr);
