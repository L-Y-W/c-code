#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{	
//	int n = 10;
//	char *pc =(char *) &n;
//	int *pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i= 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int *p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *p++);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int *p = &arr[9];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *p--);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int *p = &arr[9];
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", *p);
//		p -= 2;
//	}
//	return 0;
//}


//#define N_VALUES 5
//int main()
//{
//	int i = 0;
//	float values[N_VALUES];
//	float *vp;
//	for (vp= &values[0]; vp< &values[N_VALUES]; vp++)
//	{
//		*vp = 0;
//	}
//	for (i = 0; i < N_VALUES; i++)
//	{
//		printf("%f\n",values[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[10] - &arr[0]);//数组元素的个数10
//	return 0;
//}

//int my_strlen(char* str)
//{
//	/*if (*str != '\0')
//	{
//		str++;
//		return 1 + my_strlen(str);
//	}
//	return 0;*/
//	char* start = str;
//	char *end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//int my_strlen(char arr[])
//{
//	int count = 0;
//	int i = 0;
//	while(arr[i] != '\0')
//	{
//		i++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//int my_strlen(char arr[])
//{
//	int i = 0; 
//	if (arr[i] != '\0')
//	{
//		i++;
//		return 1 + my_strlen(&arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//arr首元素地址
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//
//}

//////指针数组---数组--存放指针的数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int *arr[3] = { &a,&b,&c };//指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n",*arr[i]);
//	}
//	return 0;
//}
////数组指针---指针

//int main()
//{ 
//	int a = 0x11223344;
//	int *pa = &a;
//	*pa = 0;
// 	return 0;
// }

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int *p = test();
//	printf("%d\n", *p);
//	return 0;
//}