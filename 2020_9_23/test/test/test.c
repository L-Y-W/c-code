#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


//int main()
//{
//	int a = 0;
//	int b = 2;
//	/*if (a==0) {
//		printf("%d\n", a);
//		return a;
//	}
//	printf("%d\n", b);
//	return b;*/
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown - s - t 60");
//	while (1)
//	{
//		printf("亲爱的朋友，你的电脑将在一分钟后关机，如果你输入：我是猪，就会取消关机\n");
//		printf("请输入:");
//		scanf("%s", arr);
//		if (strcmp(arr, "我是猪") == 0)
//		{
//			system("shutdown, -a");
//			break;
//		}
//	}		
//	return 0;
//}
//again:
//	printf("亲爱的朋友，你的电脑将在一分钟后关机，如果你输入：我是猪，就会取消关机\n");
//	printf("请输入：\n");
//	scanf("%s", arr);
//	if (strcmp(arr, "我是猪") == 0)
//	{
//		system("shutdown, -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

////猜数字游戏
////1.电脑会产生一个随机数
////2.猜数字
//void  menu()
//{
//
//	printf("**********************************\n");
//	printf("************* 1.play *************\n");
//	printf("************* 0.exit *************\n");
//	printf("**********************************\n");
//}
////TDD-测试驱动开发。
////RAND_MAX--rand函数能返回随机数的最大值。0~32767
//void game()
//{
//	
//	//1.生成一个随机数 rand()函数
//	//2.猜数字
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入猜的数字>:");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");break;
//		}
//	}
//}
//int main()
//{	
//	int input = 0;
//	//用时间戳来设置随机数的生成起始点time_t  time(time_t* timer);
//	srand((unsigned int)time(NULL));//时间戳：当前计算机的时间-计算机的起始时间(1970.1.1.0:0:0)=（xxxxx）秒
//	do
//	{
//		
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:game();break;//猜数字游戏
//			case 0:printf("退出游戏\n"); break;
//			default:printf("选择错误,请重新输入!\n");break;
//		}
//	} while (input);
//	return 0;
//}



//int main()
//{
//	int i= 0;
//	int j = 0;
//	
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//int main()
//{
//
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-100 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

////计算1/1-1/2+1/3-1/4......+1/99-1/100
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		//int flag=1;sum+=flag*1.0/i;flag=-flag;
//		if (i % 2 != 0)
//		{
//			sum += (1.0/i);
//		}
//		else
//		{
//			sum -=(1.0/i);
//		}
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10== 9)
//		{
//			count++;
//			printf("%d ", i);
//         }
//		if (i % 10== 9)
//		{
//			count++;
//			printf("%d ", i);
//		 }
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}




//int main()
//{
//		int i = 0;
//		int count = 0;
//		for(i=101;i<=200;i+=2)
//		{
//			//判断:是否为素数//素数的判断规则//试除法//2-->i-1
//			int j = 0;
//			for (j = 2; j < i; j++)
//			{
//				if (i%j ==0)
//				{
//					break;
//				}
//			}
//			if (j >= i)
//			{
//				printf("%d\n", i);
//				count++;
//			}
//		}
//		printf("count=%d\n", count);
//		return 0;
//}


////判断:是否为素数//素数的判断规则:对于任意一个数i=a*b，a和b中至少有一个数字<=开平方i
//int main()
//{
//		int i = 0;
//		int count = 0;
//		for(i=100;i<=200;i++)
//		{
//			//判断:是否为素数//素数的判断规则//试除法//2-->i-1
//			int j = 0;
//			for (j = 2; j <=sqrt(i); j++)
//			{
//				if (i%j ==0)
//				{
//					break;
//				}
//			}
//			if (j >sqrt(i))
//			{
//				printf("%d\n", i);
//				count++;
//			}
//		}
//		printf("count=%d\n", count);
//		return 0;
//}




//int main()
//{
//		int i = 0;
//		int count = 0;
//		for(i=100;i<=200;i++)
//		{
//			//判断:是否为素数//素数的判断规则//试除法//2-->i-1
//			int j = 0;
//			for (j = 2; j < i; j++)
//			{
//				if (i%j ==0)
//				{
//					break;
//				}
//			}
//			if (j >= i)
//			{
//				printf("%d\n", i);
//				count++;
//			}
//		}
//		printf("count=%d\n", count);
//		return 0;
//}


//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//1.能被4整除并且不能被100整除是闰年
//		//2.能被400整除的是闰年
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d", year);
//			count++;
//		}
//		/*if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d", year);
//			count++;
//		}*/
//	}	
//	printf("\ncount=%d\n", count);
//	return 0;
//}


////求两个数的最大公约数，辗转相除法
//int main()
//{
//	int  m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3)
//			;
//		else
//			printf("%d\n", i);
//	}
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int s = 0;
//	printf("请输入三个数：");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		s = a;
//		a = b;
//		b = s;
//	}
//	if (a < c)
//	{
//		s = a;
//		a = c;
//		c = s;
//	}
//	if (b < c)
//	{
//		s = b;
//		b = c;
//		c = s;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		if (strcmp(password ,"123456")==0)//==不能用来比较两个字符串是否相等，应该使用一个库函数--strcmp
//		{
//			printf("登陆成功\n");
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序\n");
//	}
//	return 0;
//}


////编写代码，演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	/*char arr1[] = "welcome to bit...";
//	char arr2[] = "#################";*/
//	char arr1[] = "welcome to bit...";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	//char arr1[]="abc";
//	//[a b c \0]
//	//int right = sizeof(arr1) / sizeof(arr1[0])-2;
//	/*printf("%d\n",sizeof(arr1));
//	printf("%d\n", strlen(arr1));*/
//	printf("%s\n", arr2);
//	//while循环实现
//	while (left <= right)
//	{
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数  -cls-清空屏幕
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	//for循环实现
//	/*for (left = 0, right = strlen(arr1) - 1;left <= right;left++, right--)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2); 
//	}*/
//	return 0;
//}
	


////折半查找算法
////二分查找算法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if(arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}



//int main()
//{
//	int s=0,j, i=1,n= 0;
//	int ret = 1;
//	printf("请输入n的值:\n");
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		while (i <=j)
//		{
//			ret *= i;//不是最好的，下面那个比较好
//			i++;
//		}
//		s += ret;	
//	}
//	printf("%d\n",s );
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	printf("请输入n的值:\n");
//	scanf("%d", &n);
//	/*for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}*/
//	for (j = 1; j <= n; j++)
//	{
//		ret = ret * j ;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 1, n = 0;
//	int ret = 1;
//	printf("请输入n的值:\n");
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		ret *= i;
//		i++;
//	}
///*for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}*/
//	printf("n的阶乘为：%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//			//continue;
//		printf("%d\n",i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x,y++)
//	{
//		printf("hehe\n");
//	}
//	//int i = 0;
//	//int k = 0;
//	//for (i = 0, k = 0; k = 0; i++, k++)
//	//	k++;//第一次进入时，判断条件是k=0，条件为假，所以for循环语句不执行直接退出
//	return 0;
//}


//int main()
//{
//	int j = 0;
//	int i = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//输出10个hehe//for(j=0;j<10;j++)输出100个hehe
//		{					//j从0变到10，第二次进入时j=10不满足条件直接退出
//			printf("hehe\n");
//		}
//	}
//	/*
//	for (;;)
//	{
//		printf("haha\n");
//	}*/
//	//for 循环的初始化、调整、判断都可以省略
//	//但是：for循环的判断部分如果被省略，那判断条件就是：恒为真
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);//读取密码 读取时以空格作为结束标志
//	//缓冲区还剩余一个'\n'，读取一下'\n'
//	//getchar();
//	while((getchar())!='\n'){;}
//	printf("请确认(Y/N):>");
//	//输入函数：输入缓冲区 密码\n
//	ret = getchar();//读取\n
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}


//int main()
//{
//	//char string[256];
//	//printf("Insert your full address: ");
//	//gets(string);     // warning: unsafe (see fgets instead)
//	//puts(string);
//	//printf("Your address is: %s\n", string);
//	//return 0;
//	/*while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}*/
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	//ctrl +z 程序结束
//	//EOF----end of file 文件结束标志 值为-1
//	///*int ch = getchar();
//	//putchar(ch);
//	//printf("%c\n", ch);
//	//return 0;*/
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n"); break;
//	case 2:
//		printf("星期二\n"); break;
//	case 3:
//		printf("星期三\n"); break;
//	case 4:
//		printf("星期四\n"); break;
//	case 5:
//		printf("星期五\n"); break;
//	case 6:
//		printf("星期六\n"); break;
//	case 7:
//		printf("星期日\n"); break;
//	default:
//		printf("输入错误：\n"); break;
//	}
//	switch (day)
//	{
//	case 1:	
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n"); break;
//	case 6:
//	case 7:
//		printf("休息日\n"); break;
//	default:
//		printf("输入错误：\n"); break;
//	}
//	return 0;
//}

//int main()
//{
//	int i=1;
//	for (i; i <= 100; i++)
//	{
//		if (i % 2)
//			printf("%d是个奇数\n", i);
//		else
//			printf("%d是个偶数\n", i);
//	}
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else printf("haha\n");
//	else 
//		printf("asd;jfj\n");
//	//;//是语句---空语句
//	return 0;
//}


//#include <stdio.h>
////代码1
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//}
////代码2
//#include <stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else
//	{
//		printf("成年\n");
//	}
//}
//代码3
//#include <stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else if (age >= 18 && age < 30)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 30 && age < 50)
//	{
//		printf("中年\n");
//	}
//	else if (age >= 50 && age < 80)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老不死\n");
//	}
//}




//int main()
//{
//	int i = 10;
//	do
//	{
//		printf("%d\n", i);
//	} while (i < 10);
//	return 0;
//}


//int main()
//{
//	int i = 10;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//	} while (i < 10);
//	return 0;
//}

