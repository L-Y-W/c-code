#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <math.h>


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
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}


//int main()
//{
//	//strcpy---string copy--字符串拷贝
//	//strlen-- string length--字符串长度有关
//	char  arr1[] = "bit";
//	char arr2[20] = "#################";
//				   //bit\0#####
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


////memset
////memory---内存 set--设置
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//
//	char arr[] = "hello word";
//	memset(arr, '*',5);
//	printf("%s\n", arr);//***** word
//	return 0;
//}

//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int a = 10;
//	int  b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	max = get_max(100, 300);
//	printf("max=%d\n", max);
//	return 0;
//}

//不能完成任务
//当实参传给形参的时候
//形参其实是实参的一份临时拷贝
//对形参的修改不会改变实参的
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	Swap1(a, b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//void Swap1(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	Swap1(&a,&b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


////是素数返回1，不是素数返回0
//int S(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{	
//			return 0;
//		}		
//	}
//	return 1;
//}
//
//int main()
//{
//	int a = 0;
//	printf("请输入一个正数：");
//	scanf("%d", &a);
//	if (S(a))
//	{
//		printf("素数");
//	}
//	else
//	{
//		printf("偶数");
//	}
//	return 0;
//}



//判断是否为闰年
//int is_Leap_year(int a)
//{
//	if ((a % 4 == 0) && (a % 100!= 0) || ((a % 400 )== 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year;
//	printf("请输入年份：");
//	scanf("%d", &year);
//	if (1== is_Leap_year(year))
//	{
//		printf("闰年\n");
//	}
//	else
//	{
//		printf("非闰年\n");
//	}
//	return 0;
//}


//int binary_search(int x, int arr1[],int num)//本质上这里的arr1是一个指针
//{
//	int left = 0;
//	int i = 0;
//	int right = num - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr1[mid] > x)
//		{
//			right = mid  - 1;
//		}
//		else if (arr1[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}

//int binary_search(int x, int* p, int num)//本质上这里的arr1是一个指针
//{
//	int left = 0;
//	int i = 0;
//	int right = num - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (p[mid] > x)
//		{
//			right = mid  - 1;
//		}
//		else if (p[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入你要查找的数：");
//	scanf("%d", &a);
//	if (binary_search(a,arr,sz)!=(-1))//arr表示传递过去的是数组arr首元素的地址
//		printf("找到了,下标为：%d\n", binary_search(a, arr,sz));
//	else
//		printf("没找到");
//	return 0;
//}

//void Add(int *p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d ", num);
//	return 0;
//}


//int main()
//{
//	//printf("%d\n", printf("%d", printf("%d", 43)));
//	//printf("%d", printf("%d", 2));//43
//	//printf("%d", 1);//432
//	//4321
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));//这里介绍一下strlen函数
//	printf("%d\n", ret);
//	return 0;
//}



////函数声明
//int Add(int x,int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//函数调用
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
////函数定义
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}




//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//函数调用
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}




//函数的递归
//int main()
//{
//	printf("heh\n");
//	main();
//	return 0;
//}





//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d  ", n%10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//递归
//	//print(1234)
//	//print(123) 4
//	//print(12)  3 4
//	//print(1) 2 3 4
//	print(num);
//	return 0;
//}





//int  my_strlen(char* str)
//{
//	int count=0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	//printf("%d\n", len);
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len=%d\n", len);	
//	return 0;
//}




//int  my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(++str);
//	else
//		return 0;
//		
//}
////my_strlen("bit");
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+my_strlen("");
////1+1+1+0
////3
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	//printf("%d\n", len);
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len=%d\n", len);
//	return 0;
//}



////int Fac1(int n)
////{
////	int i = 0;
////	int s= 1;
////	for (i = 1; i <= n; i++)
////	{
////		s *= i;
////	}
////	return s;
////}
//int Fac2(int n)
//{
//	if (n > 1)
//	{
//		return n * Fac2(n-1);
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//ret = Fac1(n);
//	ret = Fac2(n);
//	printf("%d的阶乘为:%d\n",n, ret);
//	return 0;
//}



////斐波那契数列
////1 1 2 3  5 8 13 21 34 55...... 
////描述第n个斐波那契数的时候
////int count = 0;
//int Fib(int n)
//{
////	if (n == 3)//测试第3个斐波那契数的计算次数
////	{
////		count++;
////	}
//	if (n == 1 || n == 2)//n<=2
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	//printf("%d\n", count);
//	return 0;
//}



////斐波那契数列
////1 1 2 3  5 8 13 21 34 55...... 
////描述第n个斐波那契数的时候
////int count = 0;
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int i = 0;
//	if (n == 1 || n == 2)//n <= 2
//		return 1;
//	else
//	{
//		for (i = 3;i<=n; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//	}
//	return c;
//
//	/*int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;*/
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	//printf("%d\n", count);
//	return 0;
//}




