#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include<stdlib.h>

#include<string.h>

#include <errno.h>

//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int *p = (int*)malloc(10 * sizeof(int));
//	//int *p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		for (int i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int *p = (int*)calloc(10,sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}	
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ��
//	free(p);
//	p = NULL;
//	return 0;
//}


//realloc
//������̬�����ڴ�ռ�Ĵ�С

//int main()
//{
//	//int *ptr = realloc(NULL, 40);//�ȼ���malloc(40)
//	int *p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//������ʹ��malloc���ٵ�20���ֽڿռ�
//	//�������20�����ֽڲ����������ǵ�ʹ����
//	//ϣ�������ܹ���40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//
//	//reallocʹ�õ�ע�����
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������
//	//һ���µ��ڴ�����,����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ���������
//	//�ͷžɵ��ڴ�ռ�,��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3.����һ���µı���������realloc�����ķ���ֵ
//	int* ptr = realloc(p,40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d  ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

#include<windows.h>
//int main()
//{
//	////1.��NULL���н����ò���
//	//int *p = (int*)malloc(40);
//	////��һmallocʧ���ˣ�p�ͱ���ֵΪNULL
//	//*p = 0;//err
//	//int i = 0;
//	//for(i=0;i<10;i++)
//	//{
//	//	*(p + i) = i;//err
//	//}
//	//free(p);
//	//p = NULL;
//
//
//
//	//2.�Զ�̬���ٵ��ڴ��Խ�����
//	/*int *p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;*/
//
//
//	//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//	/*int a = 10;
//	int *p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;*/
//
//
//	//4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//	//int *p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}	
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = i;
//	//}
//	//// ���տռ�
//	//free(p);
//	//p = NULL;
//
//	
//	//5.��ͬһ�鶯̬�ڴ����ͷ�
//	//int *p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////ʹ��
//	////�ͷ�
//	//free(p);
//	//p = NULL;
//	//free(p);
//
//
//	//6.��̬�����ڴ������ͷţ��ڴ�й©��
//	while (1)
//	{
//		malloc(1);
//		//Sleep(1000);
//	}
//	return 0;
//}


//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	/*char* str = "abcdef";
//	printf("%s\n",str);
//	printf(str);
//	printf("abcdef");*/
//	Test();
//	//1.���д���������ֱ���������
//	//2.��������ڴ�й¶�����
//	//p��GetMemory�������βΣ�ֻ�ں����ڲ���Ч����GetMemory�������غ󣬶�̬���ٵ��ڴ�
//	//��δ�ͷţ������޷��ҵ������Ի�����ڴ�й©
//	return 0;
//}


//����1
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

////����2
//char* GetMemory(char *p)
//{
//	return p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//char *GetMemory(void)
//{
//	char p[] = "hello world";//����p�����ջ����������GetMemory���ý�����,����p��ռ���ڴ�ռ��Ѿ��ͷ�
//							//������ʱ���ʵĻ������ڷǷ����ʡ�
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



////������
//int* test()
//{
//	//static int a = 10;//��̬��
//	int a = 10;//ջ��
//	return &a;
//}
//
//int main()
//{
//	int *p = test();
//	*p = 20;
//	printf("%d", *p);
//	return 0;
//}


////��ȷ�Ĵ���ʽ
//int* test()
//{
//	int *ptr = malloc(100);//����
//	return ptr;//malloc���ٵ��ڴ�ռ䵱�������ý��������û��free�Ļ����ÿռ���Ȼ���ڣ�����ʱ��
//			  //�ֲ�����int *ptr�ں������ý�������ռ�ռ�ᱻ�ͷ�
//}
//int main()
//{
//	int *p = test();
//	return 0;
//}




//void GetMemory(char **p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100); 
//	strcpy(str, "hel1o");
//	printf(str);
//	//�����ͷŶ�̬���ٵ��ڴ棬�����ڴ�й©
//	/*free(str);
//	str = NULL;*/
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


////����ʾ��
//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
//	//str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str,"world");
//		printf(str);
//	}
//}
// 
//int main()
//{
//	Test();
//	return 0;
//}


//struct S
//{
//	int n;
//	int arr[];//δ֪��С��
//};
//struct S
//{
//	int n;
//	int arr[0];//δ֪��С��-���������Ա-����Ĵ�С�ǿ��Ե�����
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//��ʱ����ṹ��Ĵ�Сʱ����������������Ĵ�С
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//01234
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//struct S
//{
//	int n;
//	int *arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//������С
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(ps->arr+i));
//	}
//	free(ptr);
//	ptr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//struct test {
//	int i;
//	short c;
//	char *p;
//	char s[10];
//};
//
//int main() {
//	struct test *pt = NULL;
//	printf("&s = %x\n", pt->s); //�ȼ��� printf("%x\n", &(pt->s));
//	printf("%x\n", &(pt->s));
//	printf("&i = %x\n", &pt->i); //��Ϊ���������ȼ�����û��д��&(pt->i)
//	printf("&c = %x\n", &pt->c);
//	printf("&p = %x\n", &pt->p);
//	return 0;
//}
//struct test {
//	int i;
//	short c;
//	char *p;
//};
//	
//int main() {
//	struct test *pt = NULL;
//	printf("&s = %x\n", &(pt->p)); //�ȼ��� printf("%x\n", &(pt->s) );
//	//printf("&s = %x\n", pt->p);
//	printf("&i = %x\n", &pt->i); //��Ϊ���������ȼ�����û��д��&(pt->i)
//	printf("&c = %x\n", &pt->c);
//	return 0;
//}

#include <stdio.h>
//struct str {
//	int len;
//	char s[0];
//};
//
//struct foo {
//	struct str *a;
//};
//
//int main(int argc, char** argv) {
//	struct foo f = { 0 };
//	if (f.a->s) {
//		printf("%x\n",f.a->s);
//	}
//	return 0;
//}


//����
//struct str {
//	int len;
//	char *s;
//};
//
//struct foo {
//	struct str *a;
//};
//
//int main(int argc, char** argv) {
//	struct foo f = { 0 };
//	if (f.a->len) {
//		printf("%x\n", f.a->len);
//	}
//	return 0;
//}