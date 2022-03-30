#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stddef.h>

//#define ANDROID40
//
//#if defined(ANDROID20)
//#pragma message("Complie Android SDK 2.0...")
//#define VERSION "Android 2.0"
//#elif defined(ANDROID23)
//#pragma message("Complie Android SDK 2.3...")
//#define VERSION "Android 2.3"
//#elif defined(ANDROID40)
//#pragma message("Complie Android SDK 4.0...")
//#define VERSION "Android 4.0"
//#else
//#error Compile Version is not provided!
//#endif
//
////#define _X86
//int main()
//{
//#ifdef _X86
//	#pragma message("_X86 macro activated!")
//#endif
//	printf("%s\n", VERSION);
//	return 0;
//}

//#define  S
//int main()
//{
////#if !defined (STM32F10X_LD) && !defined (STM32F10X_LD_VL) && \
////	!defined (STM32F10X_MD) && !defined (STM32F10X_MD_VL) && \
////	!defined (STM32F10X_HD) && !defined (STM32F10X_HD_VL) && \
////	!defined (STM32F10X_XL) && !defined (STM32F10X_CL)
//#if !defined (S) && !defined (G) 
//	
//#error "Please select first the target STM32F10x device used in your application (in stm32f10x.h file)"
//#endif
//	return 0;
//}


////作者 A 写的代码
////--------------------------开始--------------------------
////把 line 的下一行定义为第 1 行，文件名为“a.c”
//#line 1 "a.c"
////--------------------------结束--------------------------
////作者 B 写的代码
////--------------------------开始--------------------------
////把 line 的下一行定义为第 1 行，文件名为“b.c”
//#line 1 "b.c"
////--------------------------结束--------------------------
////作者 C 写的代码
////--------------------------开始--------------------------
//#line 1 "MyCode.c"
//int main() 
//{
//	printf("%s: %d\n", __FILE__, __LINE__);
//#line 1 "Test.c"
//	printf("%s: %d\n", __FILE__, __LINE__);
//	return 0;
//}




//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, c2));
//	return 0;
//}


//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}


#include<windows.h>

//void Find(int arr[], int len)
//{
//	int num1 = 0;
//	int num2 = 0;
//	int ret = 0;
//	int n = 0;
//	int i = 0;
//	int bit = 0;
//	for (i = 0; i < len; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	for (n = 0; n < 32; n++)
//	{
//		if ((ret >> n) & 1 == 1)
//			break;
//	}
//	for (i = 0; i < len; i++)
//	{
//		if ((arr[i] >> n) & 1 == 1)
//			num1 = num1 ^ arr[i];
//		else
//			num2 = num2 ^ arr[i];
//	}
//	printf(" num1=%d\n num2=%d\n", num1, num2);
//}
//
//void main()
//{
//	int a[] = { 1, 2, 3, 3, 2, 1, 4, 5 };
//	int len = sizeof(a) / sizeof(a[0]);
//	Find(a, len);
//	system("pause");
//	return 0;
//}


//void Func(int *arr, int len, int *px, int* py)
//{
//	int i = 0;
//	int num = 0;
//	int pos = 0;
//	for (i = 0; i < len; i++)
//	{
//		num ^= arr[i];
//	}
//	//整体异或的结果，存放到了num
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			pos = i;
//			break;
//		}
//	}
//	//分组异或
//	for (i = 0; i < len; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			*px = *px^arr[i];
//		}
//		else {
//			*py = *py^arr[i];
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 2, 4, 1, 5, 3, 4 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int x = 0;
//	int y = 0;
//	Func(arr, len, &x, &y);
//	printf("%d,%d\n", x, y);
//	system("pause");
//	return 0;
//}



//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//void assert_failed(char * file, int  line)
//{
//	FILE *pf = fopen("log.txt", "a");
//	fprintf(pf, "file: %s line: %d\n", file , line);
//	fclose(pf);
//	pf = NULL;
//}
//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("%s\n", __FUNCTION__);
//	//printf("%d\n", __STDC__);
//	int arr[10] = { 0 };
//	FILE *pf = fopen("log.txt", "a");
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		//assert_failed(__FILE__, __LINE__);
//		fprintf(pf,"file: %s line: %d date: %s time: %s i = %d\n",
//			__FILE__,__LINE__,__DATE__,__TIME__,i);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//
//int main()
//{
//	
//	printf("hello world\n");
//	printf("hello " "world\n");
//	printf("he"   "llo " "world\n");
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	printf("the value of ""a"" is %d\n",a);
//	PRINT(b);
//	printf("the value of ""b"" is %d\n",b); 
//	return 0;
//}



//#define CAT(X,Y) X##Y 
//
//int main()
//{
//	int Class84 = 2019;
//	printf("%d\n",Class84); 
//	printf("%d\n",CAT(Class,84));
//	//printf("%d\n",Class##84);
//	//printf("%d\n",Class84); 
//	return 0;
//}


//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++,b++);
//	//int max = ((a++) > (b++) ? (a++) : (b++));
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//	return 0;
//}


////函数
//int Max(int x,int y)
//{
//	return(x > y ? x : y);
//}
//
////宏
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数在调用的时候
//	//会有函数调用和返回的开销
//	int max = Max(a++, b++);
//	printf("max=%d\n", max);
//	//预处理阶段就完成了替换
//	//没有函数的调用和返回的开销
//	max = MAX(a,b);
//	printf("max=%d\n",max);
//	return 0;
//}


#define SIZEOF(type) sizeof(type)
int main()
{
	int ret = SIZEOF(int);
	//int ret=sizeof(int);
	printf("%d\n", ret);
	return 0;
}

//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int *p = (int*)malloc(10 * sizeof(int));
//	int *p = MALLOC(10, int); 
//	//int *p = (int*)malloc(10 * sizeof(int));
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if  1+1
//		printf("%d ", arr[i]);
//#endif 
//	}
//	return 0;
//}


//int main()
//{
//#if 0
//	printf("haha\n");
//#elif 2==1
//	printf("hehe\n");
//#else
//printf("heihei\n");
//#endif 
//	return 0;
//}

//#define DEBUG  0
//int main()
//{
//#if defined(DEBUG)
//	printf("hehe\n");
//#endif 
//
//
//#ifdef DEBUG
//	printf("haha\n");
//#endif
//
//
//#if !defined(DEBUG)
//	printf("hehe\n");
//#endif 
//
//
//#ifndef DEBUG
//	printf("haha\n");
//#endif
//
//	return 0;
//}

//#include"add.h"
//
//int main()
//{
//	int ret = Add(2, 3);
//	printf("%d\n", ret);
//}