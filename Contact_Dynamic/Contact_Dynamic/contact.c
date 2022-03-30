#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"


void InitContact(Contact * ps)
{
	ps->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (ps->data == NULL)
	{
		return 0;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
}

void CheckCapacity(Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//增容
		PeoInfo *ptr = (PeoInfo*)realloc(ps->data, (ps->capacity + 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
	
}

void AddContact(Contact *ps)
{
	CheckCapacity( ps);
	printf("请输入名字： > ");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄：>");
	scanf("%d",&(ps->data[ps->size].age));
	printf("请输入性别：>");
	scanf("%s",ps->data[ps->size].sex);
	printf("请输入电话：>");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址：>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("添加成功\n");
}

void showContact(const Contact *ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");

	}
	printf("%-20s\t%-10s\t%-10s\t%-15s\t%-s\n", "名字", "年龄", "性别", "电话", "地址");
	for (int i = 0; i < ps->size; i++)
	{
		printf("%-20s\t%-10d\t%-10s\t%-15s\t%-s\n",
			ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex, 
			ps->data[i].tele,
			ps->data[i].addr);
	}
}

static int FindByName(const Contact *ps, const char* name)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void DelContact(Contact * ps)
{
	char name[MAX_NAME];
	printf("请输入要删除人的名字：>");
	scanf("%s",name);
	//1.查找要删除的人在什么位置
	//找到了返回名字所在元素的下标
	//找不到返回-1
	int pos = FindByName(ps, name);
	//2.删除
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//删除数据
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void SearchContact(const Contact * ps)
{
	char name[MAX_NAME];
	printf("请输入要删除人的名字：>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-10s\t%-10s\t%-15s\t%-s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-10d\t%-10s\t%-15s\t%-s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);
	}
}

void ModifyContact(Contact * ps)
{
	char name[MAX_NAME];
	printf("请输入要删除人的名字：>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入名字： > ");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄：>");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别：>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话：>");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址：>");
		scanf("%s", ps->data[pos].addr);
		printf("修改成功\n");
	}
}


static int cmp_stu_by_age(const void *e1, const void *e2)
{
	return ((PeoInfo*)e1)->age -((PeoInfo*)e2)->age;
}

static int cmp_stu_by_name(const void *e1, const void *e2)
{
	//比较名字就是比较字符串
	//字符串比较不能直接用> <=来比较，因该用strcmp函数
	return strcmp( ((PeoInfo*)e1)->name , ((PeoInfo*)e2)->name);
}
static void Swap(const void* p1, const void *p2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *((char *)p1 + i);
		*((char *)p1 + i) = *((char *)p2 + i);
		*((char *)p2 + i) = tmp;
	}
}
static void bubble_sort(void *base, int sz, int width, int(*cmp)(const void *e1,const void *e2))
{
	int i = 0;
	int j = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
		for (j = 0; j < sz - i - 1; j++)
		{
			//两个元素的比较
			if (cmp((char *)base + j * width, (char *)base + (j + 1)*width) > 0)
			{
				Swap((char *)base + j * width, (char *)base + (j + 1)*width, width);
			}
		}
	}
}

void SortContact(Contact * ps)
{
	int select = 0;
	printf("请选择：1.按照名字排序.2.按照年龄排序.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		bubble_sort(ps->data, ps->size, sizeof(ps->data[0]), cmp_stu_by_age);
	}
	else if(select == 2)
	{
		bubble_sort(ps->data, ps->size, sizeof(ps->data[0]), cmp_stu_by_name);
	}
	else
	{
		printf("选择错误\n");
	}
}

void DestoryContact(Contact * ps)
{
	free(ps->data);
	ps->data = NULL;
}
