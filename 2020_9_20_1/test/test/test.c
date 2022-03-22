#define  _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
#include<string.h>
//#include<stdlib.h>





typedef struct
{
	char name[20];
	short price;
}*p,a;
int main()
{
	a F = {"1231",23};
	p  b=&F;
	b->price = 20;
	//struct Book b1 = { "c语言程序设计",55 };
	//struct Book* pb =&b1;
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	//printf("书名：%s\n", b1.name);
	//printf("价格：%d元\n", b1.price);
	////b1.name="C++";错误
	//strcpy(b1.name, "C++");//strcpy--string copy ---字符串拷贝--库函数
	//b1.price = 15;
	//printf("修改后的书名：%s\n", b1.name);
	//printf("修改后的价格：%d元\n", b1.price);
	//return 0;
}

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//	return 0;
//}


//
//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a;
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//	printf("%p\n",pd);
//	//有一种变量是用来存放地址的---指针变量
//	*p=20;//*---解引用操作符/间接访问操作符  p是一个变量---指针变量
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("a=%d\n", a);
//	//printf("%d\n", sizeof(p));
//	//printf("%d\n", sizeof(char*));//4
//	//printf("%d\n", sizeof(double*));//4
//	//printf("%d\n", sizeof(short*));//4
//	//printf("%d\n", sizeof(int*));//4
//	return 0;
//}



////#define 定义标识符常量
////#define MAX 100;
////#define 也可以定义宏---带参数
////函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	//max=(a>b?a:b);
//	printf("max=%d\n", max);
//	return 0;
//}


//声明外部函数
//extern int Add(int x, int y);
////staic 修饰函数
////也改变了函数的作用域----表达不是很准确
////static 修饰函数改变了函数的链接属性
////外部链接属性-----》内部链接属性
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}











////static 修饰全局变量
////改变了变量的作用域--让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就无法使用
//int main()
//{
//	extern int g_val;
//	//extern --声明外部符号
//	printf("g_val=%d\n", g_val);
//	return 0;
//}




//void test()
//{
//	static int a = 1;//是一个静态的局部变量
//	//static 修饰局部变量 局部变量的生命周期变长
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//
//}













//int main()
//{
//	int a = 0;//局部变量，自动变量 等价于auto int a=10;
//	//register int a = 10;//把a定义成寄存器变量
//	//int定义的变量是有符号的---（signed）int
//	//union联合体/共用体
//	//typedef --类型定义---类型重定义
//	unsigned int num = 20;
//	//typedef  unsigned int u_int;
//	//u_int num = 20;
//
//	int b = ~a;
//	printf("%d\n",b);
//	return 0;
//}














//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max=0;
//	max=MAX(num1, num2);
//	printf("较大值为：max=%d\n", max);
//	return 0;
//}





//int main()
//{
//	int att[] = { 1,2,3,4,5 };
//	char ch[] = "heord";
//	printf("%d\n", sizeof(att));//计算数组大小，单位是字节
//	printf("%d\n", sizeof(ch));
//	printf("%d\n", strlen(ch));
//	return 0;
//}















//单目操作符
//双目操作符
//三目操作符
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int sz = 0;
//	//a+b;//+双目运算符
//	//sizeof 计算的是变量/类型所占空间的大小，单位是字节
//	//计算数组中元素的个数，个数=数组总大小/每个元素的大小
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(a));//4等价于printf("%d\n", sizeof a );去掉括号
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", a);
//	printf("%d\n",!a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	a = 20;//=赋值 ==判断相等
//	a = a + 10;
//	a += 10;
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;//复合赋值符+= -= *= /= %= >>= <<= &= |= ^=
//	return 0;
//
//}


//int main()
//{
//	int a=0;
//	printf("加入比特\n");
//	while(a<=20000)
//	{
//		printf("敲一行代码%d\n",a);
//		a++;
//	}
//	if(a >=20000)
//	printf("好offer\n");
//
//	return 0;
//}


//int main()
//{
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//	/*short int a = 10;
//	char ch = 'A';
//	printf("%d\n",a);
//	printf("%c\n",ch);
//	return 0;*/
//}
//int main()
//{
//	int coding = 0;
//	printf("你会去敲代码吗？（选择1 or 0）:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("坚持，你会有好offer\n");
//	}
//	else
//	{
//		printf("放弃，回家卖红薯\n");
//	}
//	return 0;
//}
//int main()
//{
//	printf("%d\n",strlen("c:\test\32\test.c\n"));
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	printf("c:\test\32\test.c\n");
//	//printf("%c\n", '\45');
//	//printf("%c\n", '\x61');//a
//
//	//\32--32是2个8进制数字
//	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	//32--->10进制 26--->作为ASCII码值代表的字符
//	return 0;
//}
//int main()
//{
//	char arrl[20] = "abc";
//	char *arr3 = "abchgfj";
//	char arr2[] = { 'a','b','a','b','c','\0'};
//	printf("abcn");
//	printf("\r");
//	printf("acb123\n");
//	printf("c:\test\32\test.c\n");//\t--水平制表符
//	printf("c:\\test\\32\\test.c\n");
//	printf("%c\n",'a');
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	//'\0'转义字符
//	printf("%d\n", strlen(arrl));//strlen---string length--计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", sizeof(arr3));
//	printf("%d\n", sizeof(arrl));
//	return 0;
//}
//int main()
//{
//	char arrl[]="abc";//'a' 'b' 'c' '\0'--'\0'字符串的结束标志
//	                  // 97  98  99   0
//	                 //ASCII编码
//	char arr2[] = { 'a','b','c',0};//等价于char arr2[] = { 'a','b','c','\0'};
//	char arr3[] = {'a','b','c'};
//	printf("%s\n", arrl);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}
////枚举常量 enum
//enum Sex
//{
//	MAIL,
//	FEMAIL,
//	SECRET//枚举常量
//};
//int main()
//{
//	//enum Sex s = FEMAIL;
//	//s=MAIL;
//	//MAIL = 1;错误
//	
//	printf("%d\n", MAIL);//0
//	printf("%d\n", FEMAIL);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}

//#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int  arr[MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}
//int main()
//{
//
//	const-常属性
//	const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量
//	int arr[n] = { 0 };
//	const修饰的常变量
//	/*const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);*/
//	3;//字面常量
//	3.14;
//
//
//}



//int main()
//{
//	//system()-执行系统命令
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	printf("liuyaowen\n");
//again:
//	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s",input);//接收输入的内容
//	//strcmp()-比较两个字符串是否相等
//	if (strcmp(input, "我是猪")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	a = a + b;
//	b=a - b;
//	a=a - b;
//	printf("a=%d b=%d\n", a, b);
//}
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}
