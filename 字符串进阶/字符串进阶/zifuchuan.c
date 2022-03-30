#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

////1.计数器的方法
////2.递归
////3.指针-指针
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
//	//错误示范
//	/*char arr[] = { 'a', 'b','c','d','e','f' };
//	int len = my_strlen(arr);*/
//	printf("%d\n", len);
//	// unsigned int==size_t
//	//size_t strlen ( const char * str );
//	//    3          -     6  =-3  //两个无符号数相减，结果被当成无符号数看待
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}////结果为hehe
//	return 0;
//}

//char* my_strcpy(char *dest,const char*src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char*ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含‘\0’
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
//	//返回目的空间的起始地址
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
//	//VS2017下strcmp()函数的返回值
//	//> 1
//	//== 0
//	//< -1
//	//不同编译器下的返回值大小是不一样的
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
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//	//if (*str1 > *str2)
//	//{
//	//	return 1;//大于
//	//}
//	//else
//	//{
//	//	return -1;//小于
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
//		return 0;//相等
//	}
//	if (*str1 > *str2)
//	{
//		return 1;//大于
//	}
//	else
//	{
//		return -1;//小于
//	}
//}
//int main()
//{
//	//strncmp---字符串比较
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
//			return cur;//找到子串
//		}	
//		cur++;
//	}
//	return NULL;//找不到子串
//}
//
//int main()
//{
//	//strstr--查找字符串
//	//NULL--空指针
//	//NUL/Null--'\0'
//	char *p1 = "def";
//	char *p2 = "def";
//	char *ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("字串不存在");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//int main()
//{
//	//192.168.31.121   .IP地址的表示方法:点分十进制的表示方法
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
//    //切割buf中的字符串
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

#include <errno.h>//必须包含的头文件


//int main()
//{
//	//错误码   错误信息
//	//0        -No error
//	//1        -Operation not permitted
//	//2        -No such file or directory
//	//...
//	//errno 是一个全局的错误码的变量
//    //当c语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//	//char *str = strerror(errno);
//	//printf("%s\n", str);
//
//	//打开文件
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
//	//strcpy(arr2, arr1); //错误
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	struct s arr3[] = {{"刘耀文",20},{"张三",30}};
//	struct s arr4[3] = {0};
//	my_memcpy(arr4, arr3, sizeof(arr3)); 
//	return 0;
//} 


////c语言标准：
////memcpy 只能处理不重叠的内存拷贝就可以了
////memmove 处理重叠的内存拷贝
////当前编译器的memcpy也实现了memmove的功能
//void* my_memmove(void* dest, void*src, unsigned int num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//	if(dest < src)
//	{
//		while (num)
//		{
//			//前->后
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
//		//	//后—>前
//		//	*((char*)dest + num) = *((char*)src + num);
//		//}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	my_memmove(arr, arr+3, 20);//处理内存重叠的情况
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

//memset--内存设置

//int main()
//{
//	/*char arr[10]="";
//	memset(arr, '#', 10);*/
//	int arr1[10] = { 0 };
//	//40个字节
//	//01 01 01 01 01 01 01 01 01 01
//	memset(arr1, 1, 10);
//	return 0;
//}