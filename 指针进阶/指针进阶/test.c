#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch = 'W';
//	char *pc = &ch;
//	printf("%c\n", *pc);
//	test(arr);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char *str3 = "hello bit.";
//	const char *str4 = "hello bit.";
//	char *p = "abcdef";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char *pc = str1;
//	printf("%s\n", str1);
//	printf("%s\n", pc);
//	return 0;
//}

//int main()
//{
//	//const char* p = "hello bit.";//常量字符串
//	char* p = "hello bit.";//常量字符串
//	*p = 'w';//错误
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int *arr[4] = { &a,&b,&c,&d };//存放整形指针的数组--指针数组
//	char *pch[5];//存放字符指针的数组--指针数组
//	int arr[10]={0};//整型数组
//	char ch[5]={0};//字符数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int *parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d  ", *(parr[i]+j));
//			printf("%d  ", *(*(parr + i) +j));
//			printf("%d  ",parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
 
//int main()
//{
//	char * arr[5];//指针数组
//	char* (*Pa)[5]=&arr;//数组指针
//	return 0;
//}

//void print_arr1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++) 
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//			//printf("%d ", *(*(arr + i) + j));
//			//*(*(arr + i) + j)--->*(arr[i]+j)---->arr[i][j]
//			//printf("%d ", (*(arr + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	print_arr1(arr, 3, 5);
//	//数组名arr，表示首元素的地址
//	//但是二维数组的首元素是二维数组的第一行
//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//	//可以数组指针来接收
//	print_arr2(arr, 3, 5);
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	int (*pa)[10]=&arr;
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//	    printf("%d ",*(*pa+i));//*pa==arr
//	}
//	printf("\n");
//	for(i=0;i<10;i++)
//	{ 
//		printf("%d ",(*pa)[i]);
//	}
//	return 0;
//}

//int  main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int *p = arr;
//	for (i = 0; i < 10; i++)
//	{ 
//		  printf("%d", p[i]);
//		//printf("%d",*(p+i))
//		//printf("%d",*(arr+i));
//		//printf("%d",arr[i]);//arr[i]==*(arr+i)==*(p+i)==p[i]
//		return 0;
//	}
//}

//void test1(int* p)
//{
//
//}
//
//int main()
//{		
//	int a = 10;
//	int* pl = &a;
//	test1(&a);//ok
//	test1(pl);//ok 
//
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok 
//	test2(pc);//ok 
//	return 0;
//}

//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int *arr)//ok?
//{}
//  
//void test2(int **arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}

////数组指针---是指向数组的指针
////函数指针---是指向函数的指针--存放函数地址的一个指针
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20; 
//	int arr[10] = { 0 };
//	//&arr;
//	//arr;
//	printf("%d\n",Add(a,b));
//	//&函数名 和 函数名 都是函数的地址
//	printf("%p\n",&Add);
//	printf("%p\n",Add);
//	int(*p)(int,int)=Add; 
//	printf("%d\n", (*p)(2, 3));//5
//	return 0;
//}

//void Print(char *str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hello bit");
//	 p("hello bit");
//	return 0;
//}


//int main()
//{
//	//signal是一个函数声明
//	//signal函数的参数有2个，第一个是int。第二个是函数指针，该函数指针指向的函数的参数是int，
//	//返回类型是void
//	//signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int，
//	//返回类型是void
//	void(*signal(int, void(*)(int))) (int);			//int  
//	//等价于下面这两句
//	//简化
//	typedef  void(*pfun_t)(int);//类似于typedef unsigned int   uint;
//								//void(*)(int)重新命名为pfun_t 写法和一般写法不同
//	pfun_t signal(int, pfun_t);
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*p)(int,int)=Add;
//	printf("%d\n", p(2, 3));
//	printf("%d\n", Add(2, 3));
//	printf("%d\n", (*p)(2, 3));
//	printf("%d\n", (**p)(2, 3));
//	printf("%d\n", (***p)(2, 3));
//	return 0;
//}


////函数指针数组
//int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	// 指针数组
//	int*arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址-函数指针的数组
//	int(*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div};//函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](5, 5));//10 0 25 1
//	}
//	char* my_strcpy(char *dest, const char *src);
//	//1.写一个函数指针pf，能够指向my_strcpy
//	char* (*pf)(char *, const char *) = my_strcpy;
//	//2.写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//	char* (*pfArr[4])(char *, const char *) = { my_strcpy,my_strcpy,my_strcpy,my_strcpy };
//	return 0;
//}



//void menu()
//{
//	printf("***************************\n");
//	printf("**    1:add     2:sub    **\n");
//	printf("**    3:mul     4:div    **\n");
//	printf("**    5:xor     0:exit   **\n");
//	printf("***************************\n");
//}
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int div1(int a, int b)
//{
//	return a / b;
//}
//
//int xor(int a, int b)
//{
//	return a ^ b;
//}
//
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*p[])(int x, int y) = { 0, add, sub, mul, div1,xor }; //函数指针数组--转移表
//	while (input)
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if ((input <= 5 && input >= 1))
//		{
//			printf("输入两个操作数：>");
//			scanf("%d %d", &x, &y);
//			ret = p[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}	
//	}
//	return 0;
//}

//void menu()
//{
//	printf("***************************\n");
//	printf("**    1:add     2:sub    **\n");
//	printf("**    3:mul     4:div    **\n");
//	printf("**    5:xor     0:exit   **\n");
//	printf("***************************\n");
//}
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int div1(int a, int b)
//{
//	return a / b;
//}
//
//int xor(int a, int b)
//{
//	return a ^ b;
//}
//
//void calc(int(*pf)(int, int))
//{
//		int x = 0;
//		int y = 0;
//		printf("请输入两个操作数：>");
//		scanf("%d%d",&x,&y);
//		printf("%d\n",pf(x,y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div1);
//			break;
//		case 5:
//			calc(xor);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	}while(input);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//	int(*pfArr)(int, int);
//	int(*pfArr[4])(int, int);
//	int(*(*ppfArr)[4])(int, int) =&pfArr;//ppfArr是一个指向函数指针数组的指针
//	//ppfArr是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针int(*)(int，int）
//	return 0;
//}


//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

#include <stdlib.h>
//void qsort(void * base,
//	size_t num,
//	size_t width,
//	int(*cmp)(const void *e1, const void *e2)
//	);
//第一个参数：待排序数组的首元素的地址
//第二个参数：待排序数组的元素个数
//第三个参数：待排序数组的每个元素的大小 - 单位是字节
//第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
//			  函数指针的两个参数是：待比较的两个元素的地址
//int cmp_int(const void *e1, const void *e2)
//{
//	//比较两个整型值的函数
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int  cmp_float(const void *e1, const void *e2)
//{
//	/*if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;*/
//	return ((int)(*(float*)e1 - *(float*)e2));//有点小问题，当两个数相减小于1时，结果不正确
//}
//void test2()
//{
//	float f[] = { 9.0f,6.0f,7.1f,8.0f,5.0f,4.0f };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void *e1, const void *e2)
//{
//	return ((struct Stu*)e1)->age -((struct Stu*)e2)->age;
//}
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//#include<string.h>
//int cmp_stu_by_name(const void *e1, const void *e2)
//{
//	//比较名字就是比较字符串
//	//字符串比较不能直接用> <=来比较，因该用strcmp函数
//	return strcmp( ((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//}
//void test4()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	test4();
//	//bubble_sort(arr, sz);
//	//bubble_sort(f, sz);	
//}

//int main()
//{
//	int a = 10;
//	//int *p=&a;
//	//char *pa = &a;
//	//char ch = 'w';
//	void* p1=&a;
//	/**p1=0;
//	p1++;*/
//
//	//p = &ch;
//	//void* 类型的指针 可以接受任何类型的地址
//	//void* 类型的指针 不能进行解引用操作
//	//void* 类型的指针 不能进行加减整数的操作
//	return 0;
//}

////////////////////////////////////////////////////////////////////////////////////////

////void qsort(void * base,
////	size_t num,
////	size_t width,
////	int(*cmp)(const void *e1, const void *e2)
////	);
////第一个参数：待排序数组的首元素的地址
////第二个参数：待排序数组的元素个数
////第三个参数：待排序数组的每个元素的大小 - 单位是字节
////第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
////			  函数指针的两个参数是：待比较的两个元素的地址
//void bubble_sort(void *base, int sz, int width, int(*cmp)(const void *e1 ,const void *e2));
////int cmp_int(int  *e1, int  *e2)
////{
////	//比较两个整型值的函数
////	return *e1 - *e2;
////}
//int cmp_int(const void  *e1, const void  *e2)
//{
//	//比较两个整型值的函数
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//使用bubb1e_sort的程序员一定知道自己排序的是什么数据
//	//就应该知道如何比较待排序数组中的元素
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int cmp_float(const void *e1, const void *e2)
//{
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//	//return ((int)(*(float*)e1 - *(float*)e2));//有点小问题，当两个数相减小于1时，结果不正确
//}
//void test2()
//{
//	float f[] = { 9.0f,6.0f,7.1f,8.0f,5.0f,4.0f };
//	int sz = sizeof(f) / sizeof(f[0]);
//	bubble_sort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void *e1, const void *e2)
//{
//	return ((struct Stu*)e1)->age -((struct Stu*)e2)->age;
//}
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//#include<string.h>
//int cmp_stu_by_name(const void *e1, const void *e2)
//{
//	//比较名字就是比较字符串
//	//字符串比较不能直接用> <=来比较，因该用strcmp函数
//	return strcmp( ((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//}
//void test4()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//void Swap(const void* p1, const void *p2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *((char *)p1 + i);
//		*((char *)p1 + i) = *((char *)p2 + i);
//		*((char *)p2 + i) = tmp;
//	}
//}
////void Swap(char *p1,char *p2, int width)
////{
////	int i = 0;
////	for (i = 0; i < width; i++)
////	{
////		
////		char tmp = *p1;
////		*p2 = *p1;
////		*p1 = tmp;
////		p1++;
////		p2++;
////}
////实现bubble_sort函数的程序员，他是否知道未来排序的数据类型-不知道
////那程序员也不知道，待比较的两个元素的类型
//void bubble_sort(void *base, int sz, int width, int(*cmp)(const void *e1,const void *e2))
//{
//	int i = 0;
//	int j = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟比较的对数
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			//两个元素的比较
//			if (cmp((char *)base + j * width, (char *)base + (j + 1)*width) > 0)
//			{
//				Swap((char *)base + j * width, (char *)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
////int main()
////{
////	test1();
////	printf("\n");
////	test2();
////	return 0;
////}
#include<string.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//int main()
//{
//	//数组名是首元素的地址
//	//1.sizeof（数组名）-数组名表示整个数组
//	//2.&数组名-数组名表示整个数组
//	//一维数组
//	//int a[] = { 1,2,3,4 };            //4*4=16
//	//printf("%d\n", sizeof(a));        //sizeof（数组名）  计算的是数组总大小-单位是字节-16
//	//printf("%d\n", sizeof(a + 0));    //4/8  数组名这里表示首元素的值，a+0还是首元素地址，地址的大小就是4/8个字节
//	//printf("%d\n", sizeof(*a));       //4    数组名表示首元素地址，*a就是首元素，sizeof（*a）就是4
//	//printf("%d\n", sizeof(a + 1));    //4/8  数组名这里表示首元素的值，a+1第2个元素的地址，地址的大小就是4/8个字节
//	//printf("%d\n", sizeof(a[1]));     //4    第2个元素的大小
//	//printf("%d\n", sizeof(&a));       //4/8  &a取出的是数组的地址，但是数组的地址那也是地址，地址的大小就是4/8个字节
//	//printf("%d\n", sizeof(*&a));      //16   &a数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小单位是字节
//	//printf("%d\n", sizeof(&a + 1));   //4/8  &a是数组的地址，&a+1虽然地址跳过整个数组，但还是地址，所以是4/8个字节
//	//printf("%d\n", sizeof(&a[0]));    //4/8  &a[0]是第一个元素的地址
//	//printf("%d\n", sizeof(&a[0] + 1));//4/8  &a[0]+1是第二个元素的地址
//
//
//	////字符数组
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));            //6  sizeof计算的是数组的大小 6*1=6字节
//	//printf("%d\n", sizeof(arr + 0));        //4/8  arr是首元素的地址，arr+0还是首元素的地址，地址的大小是4/8字节
//	//printf("%d\n", sizeof(*arr));           //1  arr是首元素的地址，*arr就是首元素，首元素是字符大小是一个字节
//	//printf("%d\n", sizeof(arr[1]));         //1
//	//printf("%d\n", sizeof(&arr));           //4/8  &arr 虽然是数组的地址，但还是地址，地址大小是4/8个字节
//	//printf("%d\n", sizeof(&arr + 1));       //4/8  &arr+1是跳过整个数组后的地址，地址大小是4/8个字节
//	//printf("%d\n", sizeof(&arr[0] + 1));    //4/8  第二个元素的地址
//	//printf("%d\n", strlen(arr));              //随机值
//	//printf("%d\n", strlen(arr + 0));          //随机值
//	////printf("%d\n", strlen(*arr));			  //err
//	////printf("%d\n", strlen(arr[1]));		  //err
//	//printf("%d\n", strlen(&arr));			  //随机值
//	//printf("%d\n", strlen(&arr + 1));		  //随机值-6
//	//printf("%d\n", strlen(&arr[0] + 1));      //随机值-1
//
//
//	//char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));                 //7    sizeof（arr）计算的是数组的大小，单位是字节：7
//	//printf("%d\n", sizeof(arr + 0));             //4/8  计算的是地址的大小---arr+0是首元素的地址
//	//printf("%d\n", sizeof(*arr));                //1    *arr 是首元素，sizeof（*arr）计算首元素的大小
//	//printf("%d\n", sizeof(arr[1]));              //1    arr[1]是第二个元素，sizeof（arr[1]）计算的是第二个元素的大小
//	//printf("%d\n", sizeof(&arr));                //4/8  &arr虽然是数组的地址，但也是地址，所以是4/8个字节
//	//printf("%d\n", sizeof(&arr + 1));            //4/8  &arr+1是跳过整个数组后的地址，但也是地址
//	//printf("%d\n", sizeof(&arr[0] + 1));         //4/8  &arr[0]+1第二个元素的地址
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//6          //&arr - 数组的地址-数组指针 char(*p)[7]=&arr；    
//	//printf("%d\n", strlen(&arr + 1));//随机值
//	//printf("%d\n", strlen(&arr[0] + 1));//5 
//	//char *p = "abcdef";
//	//printf("%d\n", sizeof(p));//4/8-计算指针变量p的大小
//	//printf("%d\n", sizeof(p + 1));//4/8-p+1得到的是字符b的地址
//	//printf("%d\n", sizeof(*p));//1 *p就是字符串的第一个字符-'a'
//	//printf("%d\n", sizeof(p[0]));//1 int arr[10]；arr[0]==*（arr+0) p[0]==*(p+0)=='a'
//	//printf("%d\n", sizeof(&p));//4/8地址
//	//printf("%d\n", sizeof(&p + 1));//4/8地址
//	//printf("%d\n", sizeof(&p[0] + 1));//4/8地址
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	////printf("%d\n", strlen(*p));//err
//	////printf("%d\n", strlen(p[0]));//err
//	//printf("%d\n", strlen(&p));//随机值
//	//printf("%d\n", strlen(&p + 1));//随机值
//	//printf("%d\n", strlen(&p[0] + 1));//5
//	//////二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//
//
//	printf("%d\n", sizeof(a[0]));//16  a[0]相当于第一行做为一维数组的数组名，
//	//sizeof（arr[0]）把数组名单独放在sizeof()内，计算的是第一行的大小
//	printf("%d\n", sizeof(a[0] + 1));//4 a[0]是第一行的数组名，数组名此时是首元素的地址，
//    //a[0]其实就是第一行第一个元素的地址,所以a[0] + 1就是第一行第二个元素的地址,地址大小就是4/8个字节
//	printf("%d\n", sizeof(*(a[0] + 1)));//4  *(a[0] + 1)是第一行第二个元素
//
//	printf("%d\n", sizeof(&a[0] + 1));//4  第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 计算第二行的大小，单位是字节
//
//	printf("%d\n", sizeof(a + 1));//4  a是二维数组的数组名，没有sizeof（a），也没有&（a），所以a是首元素地址
//	//而把二维数组看成一维数组时，二维数组的首元素是他的第一行，a就是第一行（首元素）的地址,a+1就足第二行的地址
//	printf("%d\n", sizeof(*(a + 1)));//16  sizeof（a[1]）计算第二行的大小，单位是字节
//
//	printf("%d\n", sizeof(*a));//16 a是首元素地址-第一行的地址，*a就是第一行，sizeof（*a）就足计算第一行的大小
//	printf("%d\n", sizeof(a[3]));//16
//	//return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	//int *ptr = (&a + 1);//“int *”与“int (*)[5]”的间接级别不同
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2   5
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////结构体的大小是20个字节
//int main()
//{
//	p=(struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//有警告
//	printf("%p\n", ((struct Test*)((unsigned long)p + 0x1)));
//	//P<===>1048576    1048576+1=1048577
//	//指针p被强制类型转换为unsigned long，所以p+1等价于加了p+1，即为0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);
//	//指针p被强制类型转换为unsigned int*，所以p+1等价于加了4个字节，即为0x00100004
//	return 0;
//}

//int main()
//{ 
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//4  2000000
//	return 0;
//}

//int main()
//{ 
//	//int a[3][2] = { (0, 1), (2, 3), (4, 5) };//(0,1)逗号表达式，数组里面存储的数据是：1 3 5 0 0 0
//	int a[3][2] = { {0, 1}, {2, 3}, {4, 5} };
//	int *p;
//	p = a[0];//这里的a[0]是第一行数组的首元素地址
//	printf("%d\n", p[0]);//1  p[0]===*(p+0)
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(*p));
//	printf("%d\n", sizeof(a[0]));
//	printf("%p\n",p );
//	printf("%d\n", *p);
//	printf("%p\n", p+1);
//	printf("%p\n", a[0]);
//	printf("%p\n", a[0]+1);
//	printf("%d\n", *(p + 1));
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//int (*)[4]   int (*)[5]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//p[4][2]==*(*(p+4)+2) 
//	//-4
//	//1000 0000 0000 0000 0000 0000 0000 0100
//	//1111 1111 1111 1111 1111 1111 1111 1011
//	//1111 1111 1111 1111 1111 1111 1111 1100
//	//f     f    f    f     f    f    f    c  
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int*)(&aa + 1);
//	int *ptr2 = (*(aa + 1));//*(aa + 1)==aa[1] 
//	printf("%d,%d ", *(ptr1 - 1), *(ptr2 - 1));//10  5
//	return 0;
//}

//int main()
//{
//	char *a[] = { "work","at","alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	
//
//	return 0;
//}

//int main()
//{
//	char *c[] = { "ENTER","NEW","POINT","FIRST" };
//	char**cp[] = { c + 3,c + 2,c + 1,c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp); //POINT
//	printf("%s\n", *--*++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	return 0;
//}

//#include<assert.h>
//void reverse(char*str)
//{
//	assert(str);
//	int sz = strlen(str);
//	char  *left= str;
//	char  *right = str + sz-1;
//	for (left;left < right;)
//	{
//		char a = *left;
//		*left = *right;
//		*right = a;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	gets(arr);
//	//scanf("%s", arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int num = 0;
//	for (i = 0; i < n; i++)
//	{		
//		num = num*10+a;
//		sum += num;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{	
//	int i = 0;
//	for (i = 0; i <=10000; i++)
//	{		
//		//判断i是否为水仙花数(自幂数)
//		//1.计算i的位数---n位数
//		int n = 1;
//		int num = i;
//		int j = 0;
//		int sum1 = 0;
//		int ret = 0;
//		while (num /= 10)
//		{
//			n++;
//		}	
//		//2.计算i的每一位的n次方之和sum
//		num = i;
//		for (j = 0; j < n; j++)
//		{
//			ret = num % 10;
//			int k = 0;
//			int sum = 1;
//			for (k = 0; k < n; k++)
//			{
//				sum = sum * ret;
//			}
//			sum1 += sum;
//			num  =  num / 10;	
//		}
//		//3.比较i==sum
//		if (sum1 == i)
//		{
//			printf("%d ", sum1);
//		}
//	}
//	return 0;
//}

//#include<math.h>
//int main()
//{	
//	int i = 0;
//	for (i = 0; i <=10000; i++)
//	{		
//		//判断i是否为水仙花数(自幂数)
//		//1.计算i的位数---n位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}	
//		//2.计算i的每一位的n次方之和sum
//		tmp  = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp  % 10, n);
//			tmp  /= 10;
//		}
//		//3.比较i==sum
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}

//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//int main()
//{	
//	int  line= 0;
//	scanf("%d", &line);
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf("%c",' ');
//		}
//		//打印*
//		for (j = 0; j <2*i+1 ; j++)
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line-1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < i+1; j++)
//		{
//			printf("%c", ' ');
//		}
//		//打印*
//		for (j = 0; j < 2*(line-1-i)- 1; j++)
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//	return 0;
//}


////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以换多少瓶汽水
//int mian()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	if (money == 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = 2 * money - 1;
//	}
//	////买回来的汽水喝掉
//	//total = money;
//	//empty = money;
//	////换回来的汽水
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty % 2+empty/2;
//	//}
//	printf("total=%d\n", total);
//	return 0;
//}


//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void move(int arr[], int sz)
//{
//	int *left = arr;
//	int *right = arr + sz - 1;
//	while (left < right)
//	{
//		//从左边找偶数
//		while ((left < right)&&(*left % 2))
//		{
//			left++;
//		}
//		//从右边找奇数
//		while ((left < right)&&(*right % 2 != 1))
//		{
//			right--;	
//		}
//		if (left < right)
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}	
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

//    1
//   1 1
//  1 2 1
// 1 3 3 1
//1 4 6 4 1 

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (arr[i][j]==0)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//			/*if (i>=2&&j>=1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}*/
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		int k = 0;
//		for (k = 0; k < 10-1-i; k++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <=i; j++)
//		{	
//			printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//第7题（编程题）
//题目名称：
//猜凶手
//题目内容：
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词：
//A说：不是我。
//B说：是c。
//c说：是D。
//0说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手
 
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer!= 'a') + (killer == 'c')+(killer=='d')+(killer !='d')==3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//}

////5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
////A选手说：B第二，我第三；
////B选手说：我第二，E第四；
////C选手说：我第一，D第二；
////D选手说：C最后，我第三；
////E选手说：我第四，A第一；
////比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for(a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for(c = 1; c <= 5; c++)
//			{
//				for(d = 1; d <= 5; d++)
//				{
//					for(e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if(a*b*c*d*e==120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

////题目内容：
////实现一个函数，可以左旋字符串中的k个字符。
////例如：
////ABCD左旋一个字符得到BCDA
////ABCD左旋两个字符得到CDAB
////旋转字符串
//#include<assert.h>
//void left_move1(char arr[], int sz)
//{
//	assert(arr);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		char *left = arr;
//		char *left1 = arr;
//		char tmp = *arr;
//		while (*left1!='\0')
//		{	
//			left1++;
//			*left = *(left1);
//			left++;
//		}
//		left--;
//		*left =tmp;
//	}
//}
//void left_move(char *arr, int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//1.
//		char tmp = *arr;
//		//2.
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3.
//		//*(arr+len-1) = tmp;
//		arr[j] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr,2);
//	printf("%s\n", arr);
//	return 0;
//}

////三步翻转法
////abcdef
////bafedc
////cdefab
//#include<assert.h>
//void reverse(char *arr,int sz)
//{
//	assert(arr != NULL);
//	char*left = arr;
//	char*right = arr + sz - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char *arr, int k,int sz)
//{
//	assert(arr);
//	assert(k <= sz);
//	reverse(arr, k);
//	reverse(arr+k, sz-k);
//	reverse(arr, sz);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = strlen(arr);
//	left_move(arr,3,sz);
//	printf("%s\n", arr);
//	return 0;
//}


////三步翻转法
////abcdef  abcdef
////bafedc  dcbafe
////cdefab  efabcd
//#include <assert.h>
//void reverse(char *arr,int sz)
//{
//	assert(arr != NULL);
//	char*left = arr;
//	char*right = arr + sz - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char *arr, int k,int sz)
//{
//	assert(arr);
//	assert(k <= sz);
//	reverse(arr, k);
//	reverse(arr+k, sz-k);
//	reverse(arr, sz);
//}
////abcdef
////bcdefa
////cdefab
////defabc
////efabcd
////fabcde 
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i <len; i++)
//	{
//		left_move(s1,1,len);
//		int ret=strcmp(s1, s2);
//		if (ret == 0)
//			return 1;	
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2); 
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}


//////abcdefabcdef
//int is_left_move(char* s1, char* s2)
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s1);
//	if (len1 != len2)
//	return 0;
//	//1.在str1字符串中追加一个str1字符串
//	//strcat（s1，s1）；//err
//	strncat(s1,s2,len1);//abcdefabcdef
//	//2.判断s2指向的字符串是否是s1指向的字符串的子串
//	//strstr-找子串的
//	char* ret = strstr(s1,s2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2); 
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}


// 题目名称：
//杨氏矩阵
//题目内容：
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于0（N）；

//1  2  3
//2  3  4
//3  4  5

//1  2  3
//4  5  6
//7  8  9
//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while ((x!=row)&&(y!=-1))//x<=row-1&&y>=0
//	{
//		if (arr[x][y] == k)
//			return 1;
//		else if (arr[x][y] > k)
//		{
//			y -= 1;
//		}
//		else
//		{
//			x += 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 17;
//	int ret = FindNum(arr,k,3, 3);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while ((x != *px) && (y != -1))//x<=*px-1 && y>= 0
//	{
//		if (arr[x][y] == k)
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//		else if (arr[x][y] > k)
//		{
//			y -= 1;
//		}
//		else
//		{
//			x += 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了\n"); 
//		printf("下标是:x=%d y=%d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}