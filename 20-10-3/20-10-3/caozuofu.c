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
//	printf("%d\n", sizeof a);//����д�в��У�
//	return 0;
//}



//int  main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(a= s + 15));//2 ��������ı��ʽû��ʵ�ʲμ�����
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
//	//���ú�����ʱ���()���Ǻ������ò�����
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
//	test1(); //ʵ�ã�����Ϊ�������ò�������
//	test2("hello bit.");//ʵ�ã�����Ϊ�������ò�������
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
//	pStu->age = 18;//�ṹ��Ա����
//}
//int main()
//{
//	struct Stu stu;
//	struct Stu* pStu = &stu;//�ṹ��Ա����
//	stu.age = 20;//�ṹ��Ա����
//	printf("%d\n", stu.age);
//	set_age1(stu);
//	printf("%d\n", stu.age);
//	pStu->age = 20;//�ṹ��Ա����
//	printf("%d\n", stu.age);
//	set_age2(pStu);
//	printf("%d\n", stu.age);
//	return 0;
//}

//int main()
//{
//	printf("%d %i %d %d %d %d\n",340,0x154, 0X154, 0524,0xAb,0xAB);
//	//%d,%i   ��ʾ������int 
//	//%lf     long float����˼����ʾdouble
//	//%o      ��ʾ���޷��Ű˽�����������
//	//%x %X   ��ʾ���޷���ʮ��������������
//	printf("%d %o %x %X\n",0144,-1,-1,-1);
//	//(-1)����32λ��
//	//=��1000 0000 0000 0000 0000 0000 0000 0001)ԭ
//	//= (1111 1111 1111 1111 1111 1111 1111 1111)��
//	//= (011 111 111 111 111 111 111 111 111 111 111)��
//	//= (3    7   7   7    7  7    7  7    7   7   7)��8
//    //printf("%d\n", 3.14);
//	//������������߼�����ģ����߼�������c����������޷����ֵġ�
//	printf("%lf %lf %lf %lf %lf %lf\n", 3.14, -4.5, 3., .3,2.34e4,0.000234E8);
//	//printf("%lf\n", 2.34e);��
//	//printf("%lf\n", e4);��
//	//printf("%lf\n", 2.34e2.3);��
//	//xey ����x���������λ�С��������y���������ͣ���e������E��x��yȱһ���ɡ�
//	printf("%c\n", 'A');
//	printf("%c %c %c %c %c\n",65,'\101','\x41','\x7D','\x7d');
//	printf("\101\102\103\104\n");
//	printf("�������һ��',����ô��\'����ô��\n");
//	printf("%c %c\n", '"', '\"');
//	printf("95%%");
//	printf("��˵:\"��˵��'�����ˡ�'\"\n");
//	printf("�Ұ��㣡k;adlksjfkajdf\b\b\b\b��\n");
//	printf("�Ұ��㣡\r��\n");
//	printf("%d\n", strlen("�Ұ��㣡\r��\n"));
//	printf("%d\n", strlen("\xABwC"));
//	printf("1234567890123456789012345678901234567890\n");
//	printf("����\t����\t����\tְ��\n����\t20\t3400\t����ʦ\n");
//	printf("��ҫ��\t3\t30000\t��������ʦ\n");
//	printf("�����հ���\t20\t10000\txuesheng\n");
//	//\t   ������ƶ�����ǰλ�õ���һ�����Ʊ����λ�õ���һ��λ��
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
//	printf("������һԪ���η��̵ĸ�ϵ����");
//	scanf("%lf %lf %lf", &a, &b, &c);
//	x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
//	x2 = (-b - sqrt(b*b - 4 * a*c)) / 2 / a;
//	printf("�������ֱ��ǣ�%lf %lf\n", x1, x2);
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
//	//j=16;VC++��������ȷ�ģ���VS�����Ǵ����
//	//��ͬ�������Ľ�����ܲ�ͬ
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
//	printf(sex == 'm' ? "����\n" : "Ůʿ\n");
//	printf("���»�%s\n", sex == 'm' ? "����\n" : "Ůʿ\n");
//	//scanf("%d%d%d", &a, &b, &c);
//	////d=a��b������>c ��a��b������ ��c;
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
//	//3   4    ����
//	//4	  5    
//	//5   6   24
//	printf("%d %d %d\n", i, j, k);
//	i = 3;
//	j = 4;
//	k = (k=++i, j++,i++, i++*++j*k++);
//	//i		j		k
//	//3      4      ����
//	//4      5      4
//	//5      6      120
//	//6             121
//	printf("%d %d %d\n", i, j, k);
//	i = 3;
//	printf("%d %d\n", i, j = (i++) + (i++) + (i++) );
//	//VC++���棺�ͺ�����������������������������������������������ǣ����������еĶ�������
//	//VS���治�����������
//	return 0;
//}


//int main()
//{
//	printf("%d\n", ~1);
//	//1��int���ͣ�4B����
//	//0000 0000 0000 0000 0000 0000 0000 0001
//	//1111 1111 1111 1111 1111 1111 1111 1110
//	//�������ֵ������%d�����ɲ��뿴��������
//	//��1111 1111 1111 1111 1111 1111 1111 1110����
//	//��1000 0000 0000 0000 0000 0000 0000 0010��ԭ
//	// -2
//	printf("%d\n", ~0);//-1
//	printf("%d\n", 3 << 2);
//	//3=0000 0000 0000 0000 0000 0000 0000 0011
//	//	0000 0000 0000 0000 0000 0000 0000 1100
//	//  12
//	printf("%d\n", 3 << 4);
//	//3*��10000��2=3*2^4
//	//printf("%d\n", n << m);n<<m   <===>    n*2^m
//	printf("%d\n", -2 << 2);
//	//(1111 1111 1111 1111 1111 1111 1111 1110)��
//	//(1111 1111 1111 1111 1111 1111 1111  1000����
//	//(1000 0000 0000 0000 0000 0000 0000  1000��ԭ
//	//-8
//	printf("%d\n", 37 >> 1);
//	//n>>m  <==>(n/2^m)����ȡ��
//	printf("%d\n", -37 >> 1);
//	//��1000 0000 0000 0000 0000 0000 0010 0101��ԭ
//	//��1111 1111 1111 1111 1111 1111 1101 1011����>>1
//	//��1111 1111 1111 1111 1111 1111 1110 1101����
//	//��1000 0000 0000 0000 0000 0000 0001 0011��ԭ==>-19
//	return 0;
//}


//int main()
//{
//	////�Զ�ǿ������ת��
//	//char c;
//	//c = 3.14159 + 'A';
//	//printf("%d %c\n", c, c);//68 D
//	int i = 0, j = 2, k;
//	k = ++i || ++j;
//	//��Ϊ++i��ֵΪ1��Ϊ�棬||��������Ϊ�棬�����Ҳ�++j����·
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
//	//k=0&&(++j)||i--; //k=3*4+5   ++j����·����||i--��û�б���·
//	//k=0||i--;
//	//k=0||1;
//	//k=1,i=0��
//	printf("%d %d %d\n", i, j, k);
//
//	i = 1;
//	j = 2;
//	k = i-- || ++j || i++&&j++;  //3+4+5*6==>7+5*6==>7+30
//	//k = 1 || (++j)(��ʱ++j����·�����ڻ��˲���|| i++&&j++)   || i++&&j++;(������һ��)
//	//k = 1|| (i++&&j++);(��ʱi++&&j++����·)
//	//k=1;
//	printf("%d %d %d\n", i, j, k);
//	return 0;
//}  

//int main()
//{
//	printf("printf()���������ˣ�%d\n",printf("abcd\rh\n"));
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
//	pStu->age = 18;//�ṹ��Ա����
//}
//
//int main()
//{
//	//struct Stu stu;
//	//struct Stu* pStu = &stu;//�ṹ��Ա����
//	//stu.age = 20;//�ṹ��Ա����
//	//set_age1(stu);
//	//printf("%d\n", stu.age);
//	//pStu->age = 20;//�ṹ��Ա����
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