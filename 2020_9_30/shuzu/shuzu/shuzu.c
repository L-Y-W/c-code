#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

//int main()
//{
//	//����һ�����飬������Σ�10��
//	int arr[10] = {1,2,3};//����ȫ��ʼ����ʣ���Ԫ��Ĭ�ϳ�ʼ��Ϊ0�����Ϊ��1 2 3 0 0 0 0 0 0 0 
//	char arr2[10] = {'a','b',98};//����ȫ��ʼ����ʣ���Ԫ��Ĭ�ϳ�ʼ��Ϊ0�����Ϊ��'a' 'b' 0 0 0
//	char arr3[10] = "abc";
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(arr3));//10
//	printf("%d\n", sizeof(arr2));//10
//	printf("%d\n", strlen(arr2));//3
//	printf("%d\n", strlen(arr3));//3
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//7
//	//sizeof����arr4��ռ�ռ�Ĵ�С
//	//7��Ԫ��-char 7*1=7
//	printf("%d\n", strlen(arr4));//6
//	//strlen���ַ�������--��\0'֮ǰ���ַ�����
//	//[a b c d e f \0]
//	//6
//	//strlen��sizeofû��ʲô����
//	//strlen�����ַ������ȵ�--ֻ������ַ����󳤶�---�⺯��---ʹ�õ���ͷ�ļ�
//	//sizeof������������顢���͵Ĵ�С--��λ���ַ�--������
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
	for (i = 0; i < sz - 1; i++)//ȷ��ð�����������
	{
		int flag = 1; //���豾������������Ѿ�����
		for (j = 1; j <sz-i ;j++)//ÿһ��ð������
		{
			if (arr[j] < arr[j-1])
			{
				tmp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = tmp;
				flag = 0;//���������������ʵ����ȫ����
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
	//��arr��������,�ų�����
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(sz,arr);//ð��������
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
//	//1.sizeof(������)----��������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
//	//2.&�������������������������飬&��������ȡ��������������ĵ�ַ
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}
