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
	//struct Book b1 = { "c���Գ������",55 };
	//struct Book* pb =&b1;
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	//printf("������%s\n", b1.name);
	//printf("�۸�%dԪ\n", b1.price);
	////b1.name="C++";����
	//strcpy(b1.name, "C++");//strcpy--string copy ---�ַ�������--�⺯��
	//b1.price = 15;
	//printf("�޸ĺ��������%s\n", b1.name);
	//printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
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
//	int a = 10;//4���ֽ�
//	int* p = &a;
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//	printf("%p\n",pd);
//	//��һ�ֱ�����������ŵ�ַ��---ָ�����
//	*p=20;//*---�����ò�����/��ӷ��ʲ�����  p��һ������---ָ�����
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



////#define �����ʶ������
////#define MAX 100;
////#define Ҳ���Զ����---������
////������ʵ��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)
//
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	//max=(a>b?a:b);
//	printf("max=%d\n", max);
//	return 0;
//}


//�����ⲿ����
//extern int Add(int x, int y);
////staic ���κ���
////Ҳ�ı��˺�����������----��ﲻ�Ǻ�׼ȷ
////static ���κ����ı��˺�������������
////�ⲿ��������-----���ڲ���������
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}











////static ����ȫ�ֱ���
////�ı��˱�����������--�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ����޷�ʹ��
//int main()
//{
//	extern int g_val;
//	//extern --�����ⲿ����
//	printf("g_val=%d\n", g_val);
//	return 0;
//}




//void test()
//{
//	static int a = 1;//��һ����̬�ľֲ�����
//	//static ���ξֲ����� �ֲ��������������ڱ䳤
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
//	int a = 0;//�ֲ��������Զ����� �ȼ���auto int a=10;
//	//register int a = 10;//��a����ɼĴ�������
//	//int����ı������з��ŵ�---��signed��int
//	//union������/������
//	//typedef --���Ͷ���---�����ض���
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
//	printf("�ϴ�ֵΪ��max=%d\n", max);
//	return 0;
//}





//int main()
//{
//	int att[] = { 1,2,3,4,5 };
//	char ch[] = "heord";
//	printf("%d\n", sizeof(att));//���������С����λ���ֽ�
//	printf("%d\n", sizeof(ch));
//	printf("%d\n", strlen(ch));
//	return 0;
//}















//��Ŀ������
//˫Ŀ������
//��Ŀ������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int sz = 0;
//	//a+b;//+˫Ŀ�����
//	//sizeof ������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
//	//����������Ԫ�صĸ���������=�����ܴ�С/ÿ��Ԫ�صĴ�С
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(a));//4�ȼ���printf("%d\n", sizeof a );ȥ������
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", a);
//	printf("%d\n",!a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	a = 20;//=��ֵ ==�ж����
//	a = a + 10;
//	a += 10;
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;//���ϸ�ֵ��+= -= *= /= %= >>= <<= &= |= ^=
//	return 0;
//
//}


//int main()
//{
//	int a=0;
//	printf("�������\n");
//	while(a<=20000)
//	{
//		printf("��һ�д���%d\n",a);
//		a++;
//	}
//	if(a >=20000)
//	printf("��offer\n");
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
//	printf("���ȥ�ô����𣿣�ѡ��1 or 0��:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("��֣�����к�offer\n");
//	}
//	else
//	{
//		printf("�������ؼ�������\n");
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
//	//\32--32��2��8��������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	//32--->10���� 26--->��ΪASCII��ֵ������ַ�
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
//	printf("c:\test\32\test.c\n");//\t--ˮƽ�Ʊ��
//	printf("c:\\test\\32\\test.c\n");
//	printf("%c\n",'a');
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	//'\0'ת���ַ�
//	printf("%d\n", strlen(arrl));//strlen---string length--�����ַ������ȵ�
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", sizeof(arr3));
//	printf("%d\n", sizeof(arrl));
//	return 0;
//}
//int main()
//{
//	char arrl[]="abc";//'a' 'b' 'c' '\0'--'\0'�ַ����Ľ�����־
//	                  // 97  98  99   0
//	                 //ASCII����
//	char arr2[] = { 'a','b','c',0};//�ȼ���char arr2[] = { 'a','b','c','\0'};
//	char arr3[] = {'a','b','c'};
//	printf("%s\n", arrl);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}
////ö�ٳ��� enum
//enum Sex
//{
//	MAIL,
//	FEMAIL,
//	SECRET//ö�ٳ���
//};
//int main()
//{
//	//enum Sex s = FEMAIL;
//	//s=MAIL;
//	//MAIL = 1;����
//	
//	printf("%d\n", MAIL);//0
//	printf("%d\n", FEMAIL);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}

//#define ����ı�ʶ������
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
//	const-������
//	const int n = 10;//n�Ǳ������������г����ԣ���������˵n�ǳ�����
//	int arr[n] = { 0 };
//	const���εĳ�����
//	/*const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);*/
//	3;//���泣��
//	3.14;
//
//
//}



//int main()
//{
//	//system()-ִ��ϵͳ����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	printf("liuyaowen\n");
//again:
//	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s",input);//�������������
//	//strcmp()-�Ƚ������ַ����Ƿ����
//	if (strcmp(input, "������")==0)
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
