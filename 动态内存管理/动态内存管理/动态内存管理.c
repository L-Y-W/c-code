#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include<stdlib.h>

#include<string.h>

#include <errno.h>

//int main()
//{
//	//向内存申请10个整形的空间
//	int *p = (int*)malloc(10 * sizeof(int));
//	//int *p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		for (int i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用的时候
//	//就应该还给操作系统
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
//	//释放空间
//	//free函数是用来释放动态开辟的空间的
//	free(p);
//	p = NULL;
//	return 0;
//}


//realloc
//调整动态开辟内存空间的大小

//int main()
//{
//	//int *ptr = realloc(NULL, 40);//等价于malloc(40)
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
//	//就是在使用malloc开辟的20个字节空间
//	//假设这里，20个自字节不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//
//	//realloc使用的注意事项：
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找
//	//一个新的内存区域,开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，
//	//释放旧的内存空间,最后返回新开辟的内存空间地址
//	//3.得用一个新的变量来接受realloc函数的返回值
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
//	////1.对NULL进行解引用操作
//	//int *p = (int*)malloc(40);
//	////万一malloc失败了，p就被赋值为NULL
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
//	//2.对动态开辟的内存的越界访问
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
//	//3.对非动态开辟内存使用free释放
//	/*int a = 10;
//	int *p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;*/
//
//
//	//4.使用free释放一块动态开辟内存的一部分
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
//	//// 回收空间
//	//free(p);
//	//p = NULL;
//
//	
//	//5.对同一块动态内存多次释放
//	//int *p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////使用
//	////释放
//	//free(p);
//	//p = NULL;
//	//free(p);
//
//
//	//6.动态开辟内存忘记释放（内存泄漏）
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
//	//1.运行代码程序会出现崩溃的现象
//	//2.程序存在内存泄露的情况
//	//p是GetMemory函数的形参，只在函数内部有效，等GetMemory函数返回后，动态开辟的内存
//	//尚未释放，并且无法找到，所以会造成内存泄漏
//	return 0;
//}


//改正1
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

////改正2
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
//	char p[] = "hello world";//数组p存放在栈区，当函数GetMemory调用结束后,数组p所占的内存空间已经释放
//							//所以这时访问的话，属于非法访问。
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



////错误案例
//int* test()
//{
//	//static int a = 10;//静态区
//	int a = 10;//栈区
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


////正确的处理方式
//int* test()
//{
//	int *ptr = malloc(100);//堆区
//	return ptr;//malloc开辟的内存空间当函数调用结束后，如果没有free的话，该空间依然存在，而此时的
//			  //局部变量int *ptr在函数调用结束后，所占空间会被释放
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
//	//忘记释放动态开辟的内存，导致内存泄漏
//	/*free(str);
//	str = NULL;*/
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


////错误示例
//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free释放str指向的空间后，并不会把str置为NULL
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
//	int arr[];//未知大小的
//};
//struct S
//{
//	int n;
//	int arr[0];//未知大小的-柔性数组成员-数组的大小是可以调整的
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//此时计算结构体的大小时，不包含柔性数组的大小
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
//	//调整大小
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
//	printf("&s = %x\n", pt->s); //等价于 printf("%x\n", &(pt->s));
//	printf("%x\n", &(pt->s));
//	printf("&i = %x\n", &pt->i); //因为操作符优先级，我没有写成&(pt->i)
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
//	printf("&s = %x\n", &(pt->p)); //等价于 printf("%x\n", &(pt->s) );
//	//printf("&s = %x\n", pt->p);
//	printf("&i = %x\n", &pt->i); //因为操作符优先级，我没有写成&(pt->i)
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


//错误
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