#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//ȫ�ֱ���
//
//struct stu s3;//ȫ�ֱ���
//
//int main()
//{
//	//�����Ľṹ��������ֲ�������
//	struct stu s1;
//	struct stu s2;
//	return 0;
//}


//struct
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}sa;
//
//struct
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}*p;
//
//int main()
//{
//	p = &sa;//����һģһ���������ṹ�屻��������Ϊ����ͬһ�����ͣ����Բ��ܰѽṹ��
//			//����sa�ĵ�ַ��ֵ������һ���ṹ��ָ�����*P
//	return 0;
//}

//struct 
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}sa,*p;//ȫ�ֱ���
//
//int main()
//{
//	p = &sa;
//	return 0;
//}



////�ṹ��������
//struct Node
//{
//	int data;//4
//	struct Node* nest;// 4/8
//};
//
//int main()
//{
//	
//	return 0;
//}


//typedef struct Node
//{
//	int data;//4
//	struct Node* nest;// 4/8
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}


//struct T
//{
//	double weight;
//	short age;
//};
//
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 'c',{80.2,40},100,3.14,"liuyaowen" };
//	printf("%c %lf %d %d %lf %s\n", s.c, s.st.weight,s.st.age,s.a, s.d, s.arr);
//	return 0;
//}


//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}


////����Ĭ�϶�����λ4
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////ȡ�����õ�Ĭ�϶�����
//
//int main()
//{
//	struct S  s;
//	printf("%d\n",sizeof(s));
//	return 0;
//}



////����Ĭ�϶�����λ1
//#pragma pack(1)
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////ȡ�����õ�Ĭ�϶�����
//
//int main()
//{
//	struct S  s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}



////offsetof()��ͷ�ļ�
//#include <stddef.h> 
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	//offsetof();//����ṹ����ĳ����������׵�ַ��ƫ��
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}
//
//struct S
//{
//	int a;
//	char c;
//	double d;
//};

//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps ->c = 'w';
//	ps->d = 3.14;
//}
//
////��ֵ
//void Print1(struct S s)
//{
//	printf("%d %c %lf\n", s.a, s.c, s.d);
//}
//
////��ַ
//void Print2(const struct S *s)
//{
//	printf("%d %c %lf\n", s->a, s->c, s->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//	return 0;
//}


////λ������
////������λ
//struct S
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8���ֽ�
//	return 0;
//}


//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//}; 
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}


////ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ--����
//	MALE = 2,
//	FEMALE = 4,
//	SECRET = 8
//};
//
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = BLUE;
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	return 0;
//}

//enum Sex
//{
//	//ö�ٵĿ���ȡֵ--����
//	MALE = 2,
//	FEMALE = 4,
//	SECRET = 8
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

////����-������-������
//union Un 
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//}


//int check_sys()
//{
//	int a = 1;
//	//����1����ʾС��
//	//����0����ʾ���
//	return *(char*)&a;
//}

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1; // 1
//	//����1����ʾС��
//	//����0����ʾ���
//	return u.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}



//union Un1
//{
//	char c[5];
//	int i;
//};
//union Un2
//{
//	short c[7];//��������Ķ�����ʱ����������Ԫ�ص�����������
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un1));//8
//	printf("%d\n", sizeof(union Un2));//16
//	return 0;
//}


//union Un
//{
//	int i;
//	char c;
//};
//union Un un;
//
//int main()
//{
//	
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//	return 0;
//}
