#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h> 
#include<string.h>
#include<stdlib.h>

#define DEFAULT_SZ 3

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30


enum Option
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE]; 
	char addr[MAX_ADDR];
}PeoInfo;

//ͨѶ¼����
typedef struct Contact
{
	struct PeoInfo *data;//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
	int capacity;//��ǰͨѶ¼���������
}Contact;


void InitContact(Contact * ps);
void AddContact(Contact *ps);
void showContact(const Contact *ps);
void DelContact(Contact * ps);
void SearchContact(const Contact * ps);
void ModifyContact(Contact * ps);
void SortContact(Contact * ps);
void DestoryContact(Contact * ps);