#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe ");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	return 0;
// }


//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
// 	int i = 0;
//	int j = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int ret = 1;//����n�Ľ׳�
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret; 
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//	printf("%d\n", &i- arr);
//	//VC6.0 ������<=10����ѭ����
//	//gcc������<=11����ѭ����
//	//VS2017<=12����ѭ����
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}
//��ѭ��  ��C�ʼ�-1


//void my_strcpy(char* dest, char* src)
//{
//	int i = 0;
//	while ((*src)!= '\0')
//	{
//		dest[i] = *src;
//		i++;
//		src++;
//	}
//	dest[i] = '\0';
//}

//void my_strcpy(char* dest, char* src)
//{
//	if(dest!=NULL &&src!=NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}

//#include<assert.h>
//char*  my_strcpy(char* dest, const char* src)
//{
//	char* p = dest;
//	assert(dest != NULL );//����
//	assert( src != NULL);//����
//	//��srcָ����ַ���������destָ��Ŀռ䣬������\0���ַ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return p;
//}
//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "#################";
//	char arr2[] = "bit,halou";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}



//int main()
//{
//	const int num = 10 ;
//	int n = 100;
//    const int *p = &num;
//	//const����ָ�������*���ʱ�����ε���*p,Ҳ����˵������ͨ��p���ı�*p(num)��ֵ
//	//const����ָ�������*�ұ�ʱ�����ε���p,Ҳ����˵�����ܸı�p��
//	//*p = 20;
//	p = &n;
//	printf("%d\n", *p);
//	return 0;
//}


//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str)//�ж��ַ����Ƿ����
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	const char* p = "abcdef";
//	//����
//	int len = my_strlen(p);
//	printf("len = %d\n", len);
//	return 0;
//}
#include <string.h>
//int main()
//{
//	char name[20] = "liuyaowen";
//	strcpy(name, "12345555");
//	printf("%s\n", name);
//	return 0;
//}


//int main()
//{
//	char *p = "hello bit.";
//	printf("%s\n", p);
//	return 0;
//}