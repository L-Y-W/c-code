#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<string.h>


//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[], int  sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int a = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		a = arr[left];
//		arr[left] = arr[right];
//		arr[right] = a;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2 ,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr,sz);//初始化数组
//	Print(arr, sz);//打印数组
//	Reverse(arr, sz);
//	Print(arr, sz);//打印数组
//	return 0;
//}



//void Print(int arr[], int  sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[] = { 1,2 ,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 11,12 ,13,14,15,16,17,18,19,20 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int tmp = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	Print(arr1, sz);
//	Print(arr2, sz);
//	return 0;
//}


//int i;
//int main()
//{
//	i--;
//	//-1
//	//1000 0000 0000 0000 0000 0000 0000 0001
//	//1111 1111 1111 1111 1111 1111 1111 1110
//	//1111 1111 1111 1111 1111 1111 1111 1111
//	if (i > sizeof(i))//sizeof()---计算变量/类型所占的内存的大小  >=0  无符号数
//	{//这里i的补码会被当成无符号数
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;//整体算是逗号表达式：b = ++c, c++, ++a, a++
//	b += a++ + c;
//	printf("a=%d b=%d c=%d\n", a, b, c);
//	system("pause");//system()库函数----执行系统命令---pause(暂停)
//	return 0;
//}


//int count_bit_one(unsigned int n )
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++; 
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	return 0;
//}



//int count_bit_one( int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if(n>>i&1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	return 0;
//}

//经典算法
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);
//	}
//	return count;
//}
////n=n&(n-1)
////n
////13
////1101 n
////1100 n-1
////1100 n
////1011 n-1
////1000 n
////0111 n-1
////0000 n
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	return 0;
//}       



//int count_bit_one(int n, int m)
//{
//
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i & 1) != (m >> i & 1))
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	int count = count_bit_one(a, b);
//	printf("count=%d\n", count);
//	return 0;
//}


//int count_bit_one(int n, int m)
//{
//
//	int a = n ^ m; 
//	int i = 0;
//	int count = 0;
//	while (a)
//	{
//		count++;
//		a = a & (a - 1);
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int count = count_bit_one(a, b);
//	printf("count=%d\n", count);
//	return 0;
//}


//自己写的
//void  count_bit_one( int n)
//{
//	int count = 0;
//	int arr1[16] = { 0 };
//	int arr2[16] = { 0 };
//	int i = 0;
//	int a = 0;
//	for (i = 0; i < 32; i+=2)
//	{
//		arr1[a] = n >> i & 1;
//		a++;
//		
//	}
//	a = 0;
//	for (i = 1; i < 32; i +=2 )
//	{
//		
//		arr2[a] = n >> i & 1;
//		a++;
//
//	}
//	for (i = 0; i < 16; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 16; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	count_bit_one(a);
//	return 0;
//}


//void  print(int n)
//{	
//	int i = 0;
//	printf("奇数为：\n");
//	for (i = 30; i>=0; i -= 2)
//	{
//		printf( "%d ",n >> i & 1);
//	}
//	printf("\n偶数为：\n");
//	for (i = 31; i >=1; i -= 2)
//	{
//		printf("%d ", n >> i & 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}



//void  print_table(int n)
//{	
//	int i = 0;
//	int j = 0;
//	for (i=1;i<=n;i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-3d*%-3d=%-3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print_table(a);
//	return 0;
//}

//void   reverse_string(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	int tmp = 0;
//	while(left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
////将字符串中的字符反向打印
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}




//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	char *left = str;
//	while (*str!='\0')
//	{
//		str++;
//		
//	}
//	return str-left;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(++str);
//	}
//	return 0;
//}
//void   reverse_string(char arr[])
//{
//	int left = 0;
//	int right =my_strlen(arr) - 1;
//	int tmp = 0;
//	while(left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
////将字符串中的字符反向打印
//int main()
//{
//	char arr[] = "abcdefghijklmn";
//	printf("%s\n", arr);
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}



//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(++str);
//	}
//	return 0;
//}
//void   reverse_string(char* arr)
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	int tmp = arr[left]; 
//	arr[left] = arr[right];
//	arr[right] = '\0';
//	if (my_strlen(1+arr) >= 2)
//	{
//		reverse_string(1+arr);
//	}
//	arr[right] = tmp;
//}
////将字符串中的字符反向打印
//int main()
//{
//	char arr[] = "abcde";
//	printf("%s\n", arr);
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0; 
//}


//int DigitSum(unsigned int num)
//{
//	int count = 0;
//	if (num > 9)
//		return DigitSum(num / 10) + num % 10;
//	else
//		return num;
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret=DigitSum(num);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//double  Pow(int n, int k)
//{
//	//n^k=n*n^(k-1)
//	if (k < 0)
//		return (1.0 / Pow(n, -k));
//	else if (k == 0)
//		return 1;
//	else
//		return n * Pow(n, k - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double  ret = Pow(n,k);
//	printf("ret=%lf\n", ret);
//	return 0;
//}

