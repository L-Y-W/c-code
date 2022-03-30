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

//通讯录类型
typedef struct Contact
{
	struct PeoInfo *data;//存放一个信息
	int size;//记录当前已经有的元素个数
	int capacity;//当前通讯录的最大容量
}Contact;


void InitContact(Contact * ps);
void AddContact(Contact *ps);
void showContact(const Contact *ps);
void DelContact(Contact * ps);
void SearchContact(const Contact * ps);
void ModifyContact(Contact * ps);
void SortContact(Contact * ps);
void DestoryContact(Contact * ps);