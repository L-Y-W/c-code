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
		//����
		PeoInfo *ptr = (PeoInfo*)realloc(ps->data, (ps->capacity + 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
	
}

void AddContact(Contact *ps)
{
	CheckCapacity( ps);
	printf("���������֣� > ");
	scanf("%s", ps->data[ps->size].name);
	printf("���������䣺>");
	scanf("%d",&(ps->data[ps->size].age));
	printf("�������Ա�>");
	scanf("%s",ps->data[ps->size].sex);
	printf("������绰��>");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ��>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ�\n");
}

void showContact(const Contact *ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");

	}
	printf("%-20s\t%-10s\t%-10s\t%-15s\t%-s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫɾ���˵����֣�>");
	scanf("%s",name);
	//1.����Ҫɾ��������ʲôλ��
	//�ҵ��˷�����������Ԫ�ص��±�
	//�Ҳ�������-1
	int pos = FindByName(ps, name);
	//2.ɾ��
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		//ɾ������
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const Contact * ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ���˵����֣�>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-10s\t%-10s\t%-15s\t%-s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫɾ���˵����֣�>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("���������֣� > ");
		scanf("%s", ps->data[pos].name);
		printf("���������䣺>");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�>");
		scanf("%s", ps->data[pos].sex);
		printf("������绰��>");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ��>");
		scanf("%s", ps->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}


static int cmp_stu_by_age(const void *e1, const void *e2)
{
	return ((PeoInfo*)e1)->age -((PeoInfo*)e2)->age;
}

static int cmp_stu_by_name(const void *e1, const void *e2)
{
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ����Ƚϲ���ֱ����> <=���Ƚϣ������strcmp����
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
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���
		for (j = 0; j < sz - i - 1; j++)
		{
			//����Ԫ�صıȽ�
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
	printf("��ѡ��1.������������.2.������������.\n");
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
		printf("ѡ�����\n");
	}
}

void DestoryContact(Contact * ps)
{
	free(ps->data);
	ps->data = NULL;
}
