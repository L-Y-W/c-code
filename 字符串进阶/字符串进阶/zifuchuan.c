#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

////1.�������ķ���
////2.�ݹ�
////3.ָ��-ָ��
//int my_strlen(const char *str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen1(const char *str)
//{
//	assert(str != NULL);
//	const char* start = str;
//	const char* end = str;
//	while (*end)
//	{
//		end++;
//	}
//	return end - start;
//}
//int my_strlen2(const char *arr)
//{
//	assert(arr != NULL);
//	if (*arr != '\0')
//	{
//		arr++;
//		return 1 + my_strlen2(arr);
//	}
//	return 0;
//}
//int main()
//{
//	int len = my_strlen2("abcdef");
//	//����ʾ��
//	/*char arr[] = { 'a', 'b','c','d','e','f' };
//	int len = my_strlen(arr);*/
//	printf("%d\n", len);
//	// unsigned int==size_t
//	//size_t strlen ( const char * str );
//	//    3          -     6  =-3  //�����޷��������������������޷���������
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}////���Ϊhehe
//	return 0;
//}

//char* my_strcpy(char *dest,const char*src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char*ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬������\0��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	/*while (*src!='\0') 
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;*/
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcat(char* dest, const char *src)
//{
//	assert(dest&&src);
//	char *ret = dest;
//	/*int len= strlen(dest);
//	dest = dest + len;*/
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++=*src++)
//	{	
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "bit";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//int main()
//{
//	//VS2017��strcmp()�����ķ���ֵ
//	//> 1
//	//== 0
//	//< -1
//	//��ͬ�������µķ���ֵ��С�ǲ�һ����
//	char *p1 = "bit";
//	char *p2 = "bit";
//	/*int ret = strcmp(p1, p2);
//	printf("%d\n", ret);*/
//	if (strcmp(p1, p2) > 0)
//	{
//		printf("p1>p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("p1==p2\n");
//	}
//	else if (strcmp(p1, p2) < 0)
//	{
//		printf("p1<p2\n");
//	}
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1&&str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//	//if (*str1 > *str2)
//	//{
//	//	return 1;//����
//	//}
//	//else
//	//{
//	//	return -1;//С��
//	//}
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char *p1 = "abcdef";
//	char *p2 = "qwert";
//	if (my_strcmp(p1, p2) > 0)
//	{
//		printf("p1 > p2\n");
//		printf("ret=%d\n", my_strcmp(p1, p2));
//	}
//	else if (my_strcmp(p1, p2) == 0)
//	{
//		printf("p1 == p2\n");
//		printf("ret=%d\n", my_strcmp(p1, p2));
//	}
//	else if (my_strcmp(p1, p2) < 0)
//	{
//		printf("p1 < p2\n");
//		printf("ret=%d\n", my_strcmp(p1, p2));
//	}
//	return 0; 
//}      


//char* my_strncpy(char *dest, const char* source,int count)
//{
//	assert(dest && source);
//	char *start = dest;
//	while (count&&(*dest++ = *source++))
//	{
//		count--;
//	}
//	if (count)
//	{
//		while (--count)
//		{
//			*dest++ = '\0';
//		}
//	}
//	return start;
//}
//int main()
//{
//	char arr1[10] = "abcxxx";
//	char arr2[] = "bit";
//	my_strncpy(arr1, arr2, 1);
//	printf("%s\n", arr1);
//	return 0;
//}


//char* my_strncat(char *dest, const char* source, int count)
//{
//	char *start = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (count&&(*dest++ = *source++))
//	{
//		count--;
//	}
//	if(!count)
//	*dest = '\0';
//	return start;
//	/*while (count--)
//		if (!(*dest++ = *source++))
//			return start;
//	*dest = '\0';
//	return start;*/
//}
//int main()
//{
//	char arr1[30] = "abc\0xxxxxxxx";
//	char arr2[] = "h";
//	my_strncat(arr1, arr2,2);
//	printf("%s\n", arr1);
//	return 0;
//}




//int my_strncmp(const char* str1, const char* str2, int count)
//{
//	assert(str1&&str2);
//	while (count&&(*str1 == *str2))
//	{
//		str1++;
//		str2++;
//		count--;
//	}
//	if (count == 0)
//	{
//		return 0;//���
//	}
//	if (*str1 > *str2)
//	{
//		return 1;//����
//	}
//	else
//	{
//		return -1;//С��
//	}
//}
//int main()
//{
//	//strncmp---�ַ����Ƚ�
//	const char *p1 = "abc";
//	const char *p2 = "abc";
//	//int ret = strcmp(p1, p2);
//	int ret = my_strncmp(p1, p2,1);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
//	int n;
//	puts("Looking for R2 astromech droids...");
//	for (n = 0; n < 3; n++)
//		if (strncmp(str[n], "R2xx", 2) == 0)
//		{
//			printf("found %s\n", str[n]);
//		}
//	return 0;
//}

//char* my_strstr(const char* p1, const char *p2)
//{
//	assert(p1&&p2);
//	char *s1 = NULL;
//	char *s2 = NULL;
//	char *cur = (char*)p1;
//	if (*p2 == '\0')//!*p2
//	{
//		return ((char*)p1);
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//		{
//			return cur;//�ҵ��Ӵ�
//		}	
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
//}
//
//int main()
//{
//	//strstr--�����ַ���
//	//NULL--��ָ��
//	//NUL/Null--'\0'
//	char *p1 = "def";
//	char *p2 = "def";
//	char *ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("�ִ�������");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//int main()
//{
//	//192.168.31.121   .IP��ַ�ı�ʾ����:���ʮ���Ƶı�ʾ����
//    //192 168 31 121    -strtok
//    //zpu@bitedu.tech  @.
//    //zpw bitedu tech 
//	/*char arr[] = "zpw@bitedu.tech";
//	char *p = "@.";*/
//	char arr[] = "192.168.31.1..121 ";
//	char *p = ".";
//	//zpw@bitedu.tech 
//	char buf[1024]= { 0 };
//	strcpy(buf,arr);
//    //�и�buf�е��ַ���
//	char *ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	/*char *ret = strtok(arr,p);
//	printf("%s\n",ret);
//	ret = strtok(NULL,p);
//	printf("%s\n",ret);
//	ret = strtok(NULL,p);
//	printf("%s\n",ret);*/
//
//	return 0;
//}

//int main()
//{
//	char str[] = "- This, a sample string.";
//	char * pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,.-");
//	}
//	return 0;
//}

#include <errno.h>//���������ͷ�ļ�


//int main()
//{
//	//������   ������Ϣ
//	//0        -No error
//	//1        -Operation not permitted
//	//2        -No such file or directory
//	//...
//	//errno ��һ��ȫ�ֵĴ�����ı���
//    //��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//	//char *str = strerror(errno);
//	//printf("%s\n", str);
//
//	//���ļ�
//	FILE *  pFile = fopen("test.txt", "r");
//	if (pFile == NULL)
//	{
//		printf("Error opening file test.txt: %s\n", strerror(errno));
//	}
//	else
//	{
//		printf("%s\n", "open file test.txt successfully\n");
//	}
//	return 0;	
//}

#include <ctype.h>
int main()
{
	/*int   ch0 = 97;
	int ret0 = islower(ch0);
	printf("%d\n", ret0);

	char  ch = 64;
	int ret = isupper(ch);
	printf("%d\n", ret);

	int  num = 47;
	int ret1 = isdigit(num);
	printf("%d\n", ret1);*/
	//int i = 0;
	//char str[] = "Test String.\n";
	//while (str[i])
	//{
	//	if(isupper(str[i]))
	//		str[i] = tolower(str[i]);
	//	putchar(str[i]);
	//	i++;
	//}
	char arr[] = "I am A Student";
	int i = 0;
	while (arr[i])
	{
		/*if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}*/
		if (islower(arr[i]))
		{
			arr[i] = toupper(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);
	return 0;
}

//void* my_memcpy(void* dest, const void*src, unsigned int num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//	while (num)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//		num--;
//	}
//	return ret;
//}
//
//struct s
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[10] = { 0 };
//	//char *dest  const char* src
//	//strcpy(arr2, arr1); //����
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	struct s arr3[] = {{"��ҫ��",20},{"����",30}};
//	struct s arr4[3] = {0};
//	my_memcpy(arr4, arr3, sizeof(arr3)); 
//	return 0;
//} 


////c���Ա�׼��
////memcpy ֻ�ܴ����ص����ڴ濽���Ϳ�����
////memmove �����ص����ڴ濽��
////��ǰ��������memcpyҲʵ����memmove�Ĺ���
//void* my_memmove(void* dest, void*src, unsigned int num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//	if(dest < src)
//	{
//		while (num)
//		{
//			//ǰ->��
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//			num--;
//		}
//	}
//	else
//	{
//		char *dest1 = (char*)dest + num-1;
//		char *src1 = (char*)src + num-1;
//		while (num)
//		{
//			*(char*)dest1 = *(char*)src1;
//			--(char*)dest1;
//			--(char*)src1;
//			num--;
//		}
//		//while (num--)
//		//{
//		//	//��>ǰ
//		//	*((char*)dest + num) = *((char*)src + num);
//		//}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	my_memmove(arr, arr+3, 20);//�����ڴ��ص������
//	//memcpy(arr + 2, arr, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	} 
//	return 0;
//} 

//int main()
//{
//	//01 00 00 00 02 00 00 00 03 00 00 00...
//	//01 00 00 00 02 00 00 00 05 00 00 00...
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

//memset--�ڴ�����

//int main()
//{
//	/*char arr[10]="";
//	memset(arr, '#', 10);*/
//	int arr1[10] = { 0 };
//	//40���ֽ�
//	//01 01 01 01 01 01 01 01 01 01
//	memset(arr1, 1, 10);
//	return 0;
//}