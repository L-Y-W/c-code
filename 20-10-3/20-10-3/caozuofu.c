#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((num >> i) & 1)
//		{
//			count++;
//		}	 
//	}
//	printf("%d\n", count);
//	return 0;
//}




//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//	printf("%d\n", sizeof(ch[0]));//(4)
//	printf("%d\n", sizeof(ch[5]));//(4)
//}
//
//int  main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)40
//	printf("%d\n", sizeof(ch));//(3)10
//	printf("%d\n", sizeof ch);
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	int a = -10;
//	int *p = NULL;
//	printf("%d\n", !2);
//	printf("%d\n", !0);
//	a = -a;
//	p = &a;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);//这样写行不行？
//	return 0;
//}



//int  main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(a= s + 15));//2 括号里面的表达式没有实际参加运算
//	printf("%d\n", sizeof(s = a + 15));
//	printf("%d\n", s);//0
//	return 0;
//}



//int  main()
//{
//	
//	/*int a = 10;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	int a1 = 10;
//	printf("%d\n", a1++);
//	printf("%d\n", a1);*/
//
//	/*int a = 10;
//	int b = 20;
//	int max = 0;
//	max=a > b ? a : b;
//	printf("%d\n", max);*/
//
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}



//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//调用函数的时候的()就是函数调用操作符
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++||++b||d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}


//void test1()
//{
//	printf("hehe\n");
//}
//void test2(const char *str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1(); //实用（）作为函数调用操作符。
//	test2("hello bit.");//实用（）作为函数调用操作符。
//	return 0;
//}




//int main()
//{
//	/*char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");*/
//		char  c = 1;
//		printf("%u\n", !c);
//		printf("%u\n", sizeof(!c));
//		printf("%d\n", sizeof(0));
//		printf("%u\n", sizeof(-c));
//		printf("%u\n", sizeof(c));
//	
//	/*float f = 3.14;
//	int num = f;
//	printf("%d\n", num);
//	return 0;*/
//
//	/*int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, b = a + 1);
//	printf("%d\n", c);*/
//
//
//}


#include <stdio.h>
//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//void set_age1(struct Stu stu)
//{
//	stu.age = 18;
//}
//void set_age2(struct Stu* pStu)
//{
//	pStu->age = 18;//结构成员访问
//}
//int main()
//{
//	struct Stu stu;
//	struct Stu* pStu = &stu;//结构成员访问
//	stu.age = 20;//结构成员访问
//	printf("%d\n", stu.age);
//	set_age1(stu);
//	printf("%d\n", stu.age);
//	pStu->age = 20;//结构成员访问
//	printf("%d\n", stu.age);
//	set_age2(pStu);
//	printf("%d\n", stu.age);
//	return 0;
//}

//int main()
//{
//	printf("%d %i %d %d %d %d\n",340,0x154, 0X154, 0524,0xAb,0xAB);
//	//%d,%i   表示整形量int 
//	//%lf     long float的意思，表示double
//	//%o      表示“无符号八进制整形数”
//	//%x %X   表示“无符号十六进制整型数”
//	printf("%d %o %x %X\n",0144,-1,-1,-1);
//	//(-1)补（32位）
//	//=（1000 0000 0000 0000 0000 0000 0000 0001)原
//	//= (1111 1111 1111 1111 1111 1111 1111 1111)补
//	//= (011 111 111 111 111 111 111 111 111 111 111)补
//	//= (3    7   7   7    7  7    7  7    7   7   7)补8
//    //printf("%d\n", 3.14);
//	//这种输出是有逻辑错误的，而逻辑错误是c编译软件所无法发现的。
//	printf("%lf %lf %lf %lf %lf %lf\n", 3.14, -4.5, 3., .3,2.34e4,0.000234E8);
//	//printf("%lf\n", 2.34e);错
//	//printf("%lf\n", e4);错
//	//printf("%lf\n", 2.34e2.3);错
//	//xey 其中x必须是整形或小数常量；y必须是整型；且e可以用E。x和y缺一不可。
//	printf("%c\n", 'A');
//	printf("%c %c %c %c %c\n",65,'\101','\x41','\x7D','\x7d');
//	printf("\101\102\103\104\n");
//	printf("我想输出一个',可以么？\'可以么？\n");
//	printf("%c %c\n", '"', '\"');
//	printf("95%%");
//	printf("我说:\"你说：'他走了。'\"\n");
//	printf("我爱你！k;adlksjfkajdf\b\b\b\b她\n");
//	printf("我爱你！\r他\n");
//	printf("%d\n", strlen("我爱你！\r他\n"));
//	printf("%d\n", strlen("\xABwC"));
//	printf("1234567890123456789012345678901234567890\n");
//	printf("姓名\t年龄\t工资\t职称\n张三\t20\t3400\t工程师\n");
//	printf("刘耀文\t3\t30000\t开发工程师\n");
//	printf("哒哒哒阿达\t20\t10000\txuesheng\n");
//	//\t   将光标移动到当前位置的下一个“制表符”位置的下一个位置
//	return 0;
//}



//int main()
//{	
//	int a = 27 % -4;
//	int b = -27 % 4;
//	int c = -27 % -4;
//	int i = 0;
//	
//	for (i = 0; i <= 100; i++)
//	{
//		printf("%c ", i % 26 + 'A' +32);
//	}
//	/*for (i = 0; i <= 100; i++)
//	{
//		printf("%d ",  i / 26 % 2 );
//	}*/
//	/*for (i = 0; i <= 100; i++)
//	{
//		printf("%c ",i%26+'A'+i/26%2*32);
//	}*/
//	//for (i = 0; i <= 51; i++)
//	//{
//	//	//printf("%c ", i/2%26 + 'A' + i% 2 * 32);
//	//	printf("%c ", i%52/2+ 'A' + i % 2*32);
//	//}
//	//printf("%d %d %d\n", a,b,c);
//	return 0;
//}

#include<math.h>
	
//int main()
//{
//	printf("%lf\n", exp(1.0));
//	printf("%lf\n", sqrt(2.0));
//	printf("%lf %lf\n", log10(2.0),log(2.0)/log(10.0));
//    printf("%lf\n", sin(30*3.1415926/180.0));
//	return 0;
//}

//int main()
//{
//	double a, b, c, x1, x2;
//	printf("请输入一元二次方程的个系数：");
//	scanf("%lf %lf %lf", &a, &b, &c);
//	x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
//	x2 = (-b - sqrt(b*b - 4 * a*c)) / 2 / a;
//	printf("两个根分别是：%lf %lf\n", x1, x2);
//	return 0;
//}


//int main()
//{
//	int num;
//	scanf("%d", &num);
//	printf("%d\n", 14 > num > 3);
//	// 14 > num > 3   <==>  (14>num)>3  <===>  1/0>3  <====>  0
//	printf("%d\n", !!3);
//	printf("%d\n", 0 || 3 && 1);
//	printf("%d\n", 4 && 3 || 0);
//	printf("%d\n", 0 || 3 && 0);
//	printf("%d\n", (4 || 3) &&0);
//	//!!3 <==> !(!3)<==> !0 <==> 1
//	printf("%d\n", 300 + 4 > 5 * 6 + 6);
//	printf("%d\n", 20 - 10 + 15 / 5 * 20 % 3);
//	printf("%d\n", 20 - 10 + 20 % 3*15 / 5  );
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int i, j, k, t;
//	if ((a = 4) != 0)
//		printf("%d\n", a);
//	i = j = k = t = 3 + 4;
//	//i =( j = k = t = 3 + 4);
//	//j = (k = t = 3 + 4);
//	//k = (t = 3 + 4);
//	//t =(3 + 4);
//	//t=7;
//	printf("%d %d %d %d\n", i, j, k, t);
//	i *= 4 + 5;//i=i*(4+5);
//	printf("%d\n", i);
//	i = 3;
//	i += i -= i * i;
//	//i += i -= 3 * 3;
//	//i += i -= 9;
//	//i += (i =i - 9);<==>i += (i =3- 9);
//	//i += (i = -6);    i=-6
//	//i =i+(-6);
//	//i=-12;
//	printf("%d\n", i);
//	printf("%d\n", 3&&4+5*6);
//	i = 3;
//	j = 4;
//	k = ++i + j++;
//	//k = i + j++;  i=4
//	//k = i + j;  ++j;  i=4 j=4
//	//k = 8;  ++j;  i=4 j=5
//	printf("%d %d %d\n", i,j,k);
//	i = 3;
//	j = (i++)+(i++)+(i++);
//	printf("%d %d\n", i,j);
//	i = 3;
//	j = (++i) + (++i) + (++i);    //i   
//	//j = i + (++i) + (++i);        4
//	//j = i + i + (++i);	     	5
//	//j = (i + i) + (++i);			
//	//j = 10 + (++i);
//	//j = 10 + i;		     		6	
//	//j=16;VC++下面是正确的，在VS上面是错误的
//	//不同编译器的结果可能不同
//	printf("%d %d\n", i, j);
//	i = 3;
//	j = (++i) + (++i) * (++i);
//	//j = i+ (++i) * (++i); i=4
//	//j = i+ i * (++i);		i=5
//	//j = i+ i* i;			i=6
//	//j=6+6*6;
//	printf("%d %d\n", i, j);
//	i = 3;
//	j = (++i)*(++i) + (++i) * (++i);
//	printf("%d %d\n", i, j);
//
//
//	i = 3;
//	printf("%d %d\n", i, j = (++i) + (++i) + (++i) );
//	i = 3;
//	printf("%d %d %d\n", i, j = (++i) + (++i) + (++i),i);
//	return 0;
//}


//int main()
//{
//	char sex;
//	int a, b, c, d;
//	scanf("%c", &sex);
//	printf(sex == 'm' ? "先生\n" : "女士\n");
//	printf("刘德华%s\n", sex == 'm' ? "先生\n" : "女士\n");
//	//scanf("%d%d%d", &a, &b, &c);
//	////d=a、b中最大的>c ？a、b中最大的 ：c;
//	//d= (a>b?a:b) > c ? (a>b?a:b) : c;
//	//printf("%d\n", d);
//	/*a = 1;
//	b = a-- ? a + 1 : a * 2;
//	printf("%d %d\n", a, b);*/
//	//a = 7;
//	//while (a--)
//	//	printf("%d ", a);
//	//printf("%d\n", a);
//	return 0;
//}
//
//
//int main()
//{
//	int i,j,k;
//	i = 3, 4 + 5, 6 * 7;
//	printf("%d\n", i);
//	i = (3, 4 + 5, 6 * 7);
//	printf("%d\n", i);
//	i = 3;
//	j = 4;
//	k = (++i, j++, i++*++j);
//	//i   j    k
//	//3   4    垃圾
//	//4	  5    
//	//5   6   24
//	printf("%d %d %d\n", i, j, k);
//	i = 3;
//	j = 4;
//	k = (k=++i, j++,i++, i++*++j*k++);
//	//i		j		k
//	//3      4      垃圾
//	//4      5      4
//	//5      6      120
//	//6             121
//	printf("%d %d %d\n", i, j, k);
//	i = 3;
//	printf("%d %d\n", i, j = (i++) + (i++) + (i++) );
//	//VC++里面：滞后自增（减）在遇到逗号运算符后，立刻自增（减），但是，函数参数中的逗号例外
//	//VS里面不符合这个规则
//	return 0;
//}


//int main()
//{
//	printf("%d\n", ~1);
//	//1是int类型，4B补码
//	//0000 0000 0000 0000 0000 0000 0000 0001
//	//1111 1111 1111 1111 1111 1111 1111 1110
//	//上面的数值，被“%d”当成补码看待！！！
//	//（1111 1111 1111 1111 1111 1111 1111 1110）补
//	//（1000 0000 0000 0000 0000 0000 0000 0010）原
//	// -2
//	printf("%d\n", ~0);//-1
//	printf("%d\n", 3 << 2);
//	//3=0000 0000 0000 0000 0000 0000 0000 0011
//	//	0000 0000 0000 0000 0000 0000 0000 1100
//	//  12
//	printf("%d\n", 3 << 4);
//	//3*（10000）2=3*2^4
//	//printf("%d\n", n << m);n<<m   <===>    n*2^m
//	printf("%d\n", -2 << 2);
//	//(1111 1111 1111 1111 1111 1111 1111 1110)补
//	//(1111 1111 1111 1111 1111 1111 1111  1000）补
//	//(1000 0000 0000 0000 0000 0000 0000  1000）原
//	//-8
//	printf("%d\n", 37 >> 1);
//	//n>>m  <==>(n/2^m)向下取整
//	printf("%d\n", -37 >> 1);
//	//（1000 0000 0000 0000 0000 0000 0010 0101）原
//	//（1111 1111 1111 1111 1111 1111 1101 1011）补>>1
//	//（1111 1111 1111 1111 1111 1111 1110 1101）补
//	//（1000 0000 0000 0000 0000 0000 0001 0011）原==>-19
//	return 0;
//}


//int main()
//{
//	////自动强制类型转换
//	//char c;
//	//c = 3.14159 + 'A';
//	//printf("%d %c\n", c, c);//68 D
//	int i = 0, j = 2, k;
//	k = ++i || ++j;
//	//因为++i的值为1，为真，||运算符左侧为真，所以右侧++j被短路
//	printf("%d %d %d\n", i, j,k);
//
//	i = 0 ;
//	j = 2;
//	k = i++ || ++j;
//	printf("%d %d %d\n", i, j, k);
//
//	i = 0;
//	j = 2;
//	k = i++ || j++;
//	printf("%d %d %d\n", i, j, k);
//
//	i = 0;
//	j = 2;
//	k = i++&&++j&&j++;
//	printf("%d %d %d\n", i, j, k);
//
//	i = 0;
//	j = 2;
//	k = ++i&&++j&&j++;
//	printf("%d %d %d\n", i, j, k);
//
//	i = 0;
//	j = 2;
//	k = ++i&&j++&&++j;
//	printf("%d %d %d\n", i, j, k);
//
//	i = 1;
//	j = 2;
//	k = i--||++i&&++j;
//	//k=i--||(++i&&++j);
//	printf("%d %d %d\n", i, j, k);
//
//	i = 0;
//	j = 2;
//	k = i++&&++j||i--;
//	//k=0&&++j||i--;
//	//k=0&&(++j)||i--; //k=3*4+5   ++j被短路，但||i--并没有被短路
//	//k=0||i--;
//	//k=0||1;
//	//k=1,i=0；
//	printf("%d %d %d\n", i, j, k);
//
//	i = 1;
//	j = 2;
//	k = i-- || ++j || i++&&j++;  //3+4+5*6==>7+5*6==>7+30
//	//k = 1 || (++j)(此时++j被短路，现在换顾不上|| i++&&j++)   || i++&&j++;(不看这一块)
//	//k = 1|| (i++&&j++);(此时i++&&j++被短路)
//	//k=1;
//	printf("%d %d %d\n", i, j, k);
//	return 0;
//}  

//int main()
//{
//	printf("printf()函数返回了：%d\n",printf("abcd\rh\n"));
//	printf("%015.5lf\n", 12134111.22222);
//	return 0;
//}



//#include <stdio.h>
//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//void set_age1(struct Stu stu)
//{
//	stu.age = 18;
//}
//
//void set_age2(struct Stu* pStu)
//{
//	pStu->age = 18;//结构成员访问
//}
//
//int main()
//{
//	//struct Stu stu;
//	//struct Stu* pStu = &stu;//结构成员访问
//	//stu.age = 20;//结构成员访问
//	//set_age1(stu);
//	//printf("%d\n", stu.age);
//	//pStu->age = 20;//结构成员访问
//	//set_age2(pStu);
//	//printf("%d\n", stu.age);
//	char ch = 1;
//	int num = 1;
//	int n1 = sizeof(ch + num);
//	printf("%d\n", n1);
//	int n2 = sizeof(ch = ch + num);
//	printf("%d\n", ch);
//	printf("%d\n", n2);
//	return 0;
//}