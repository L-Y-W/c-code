#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

//int main()
//{
//	//创建一个数组，存放整形，10个
//	int arr[10] = {1,2,3};//不完全初始化，剩余的元素默认初始化为0。结果为：1 2 3 0 0 0 0 0 0 0 
//	char arr2[10] = {'a','b',98};//不完全初始化，剩余的元素默认初始化为0。结果为：'a' 'b' 0 0 0
//	char arr3[10] = "abc";
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(arr3));//10
//	printf("%d\n", sizeof(arr2));//10
//	printf("%d\n", strlen(arr2));//3
//	printf("%d\n", strlen(arr3));//3
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//7
//	//sizeof计算arr4所占空间的大小
//	//7个元素-char 7*1=7
//	printf("%d\n", strlen(arr4));//6
//	//strlen求字符串长度--‘\0'之前的字符个数
//	//[a b c d e f \0]
//	//6
//	//strlen和sizeof没有什么关联
//	//strlen是求字符串长度的--只能针对字符串求长度---库函数---使用得引头文件
//	//sizeof计算变量、数组、类型的大小--单位是字符--操作符
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	//int arr1[][4] = { {1,2,3,4},{5,6,7,8} };
//	//char ch[5][6];
//	int arr1[3][4] = {1,2,3,4,5};
//	//int arr1[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n"); 
//	}
//
//	
//	return 0;
//}




//int main()
//{
//	int arr1[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j, &arr1[i][j]);
//		}
//	}
//	return 0;
//}

void bubble_sort(int sz,int arr[])
{
	int	i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < sz - 1; i++)//确定冒泡排序的趟数
	{
		int flag = 1; //假设本趟排序的数据已经有序
		for (j = 1; j <sz-i ;j++)//每一趟冒泡排序
		{
			if (arr[j] < arr[j-1])
			{
				tmp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = tmp;
				flag = 0;//本趟排序的数据其实不完全有序
			}
		}
		if (flag == 1)
		{
			break;
		}
		/*for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}*/
	}
}
int main()
{
	int j = 0;
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//对arr进行排序,排成升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(sz,arr);//冒泡排序函数
	for (j = 0; j < sz; j++)
	{
		printf("%d ", arr[j]);
	}
	return 0;
}




//int main()
//{
//	if (1)
//		break;//error
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//1.sizeof(数组名)----数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
//	//2.&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}
