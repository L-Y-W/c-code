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
//	//strcpy---string copy--�ַ�������
//	//strlen-- string length--�ַ��������й�
//	char  arr1[] = "bit";
//	char arr2[20] = "#################";
//				   //bit\0#####
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


////memset
////memory---�ڴ� set--����
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("��������������:>");
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

//�����������
//��ʵ�δ����βε�ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���ı�ʵ�ε�
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


////����������1��������������0
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
//	printf("������һ��������");
//	scanf("%d", &a);
//	if (S(a))
//	{
//		printf("����");
//	}
//	else
//	{
//		printf("ż��");
//	}
//	return 0;
//}



//�ж��Ƿ�Ϊ����
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
//	printf("��������ݣ�");
//	scanf("%d", &year);
//	if (1== is_Leap_year(year))
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}


//int binary_search(int x, int arr1[],int num)//�����������arr1��һ��ָ��
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

//int binary_search(int x, int* p, int num)//�����������arr1��һ��ָ��
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
//	printf("��������Ҫ���ҵ�����");
//	scanf("%d", &a);
//	if (binary_search(a,arr,sz)!=(-1))//arr��ʾ���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//		printf("�ҵ���,�±�Ϊ��%d\n", binary_search(a, arr,sz));
//	else
//		printf("û�ҵ�");
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
//	int ret = strlen(strcat(arr, "bit"));//�������һ��strlen����
//	printf("%d\n", ret);
//	return 0;
//}



////��������
//int Add(int x,int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//��������
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
////��������
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
//	//��������
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}




//�����ĵݹ�
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
//	//�ݹ�
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
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
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
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
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
//	printf("%d�Ľ׳�Ϊ:%d\n",n, ret);
//	return 0;
//}



////쳲���������
////1 1 2 3  5 8 13 21 34 55...... 
////������n��쳲���������ʱ��
////int count = 0;
//int Fib(int n)
//{
////	if (n == 3)//���Ե�3��쳲��������ļ������
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



////쳲���������
////1 1 2 3  5 8 13 21 34 55...... 
////������n��쳲���������ʱ��
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




