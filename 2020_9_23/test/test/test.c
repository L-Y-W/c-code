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
//		printf("�װ������ѣ���ĵ��Խ���һ���Ӻ�ػ�����������룺�������ͻ�ȡ���ػ�\n");
//		printf("������:");
//		scanf("%s", arr);
//		if (strcmp(arr, "������") == 0)
//		{
//			system("shutdown, -a");
//			break;
//		}
//	}		
//	return 0;
//}
//again:
//	printf("�װ������ѣ���ĵ��Խ���һ���Ӻ�ػ�����������룺�������ͻ�ȡ���ػ�\n");
//	printf("�����룺\n");
//	scanf("%s", arr);
//	if (strcmp(arr, "������") == 0)
//	{
//		system("shutdown, -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

////��������Ϸ
////1.���Ի����һ�������
////2.������
//void  menu()
//{
//
//	printf("**********************************\n");
//	printf("************* 1.play *************\n");
//	printf("************* 0.exit *************\n");
//	printf("**********************************\n");
//}
////TDD-��������������
////RAND_MAX--rand�����ܷ�������������ֵ��0~32767
//void game()
//{
//	
//	//1.����һ������� rand()����
//	//2.������
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("������µ�����>:");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("�´���\n");
//		}
//		else if (input < random_num)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");break;
//		}
//	}
//}
//int main()
//{	
//	int input = 0;
//	//��ʱ����������������������ʼ��time_t  time(time_t* timer);
//	srand((unsigned int)time(NULL));//ʱ�������ǰ�������ʱ��-���������ʼʱ��(1970.1.1.0:0:0)=��xxxxx����
//	do
//	{
//		
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:game();break;//��������Ϸ
//			case 0:printf("�˳���Ϸ\n"); break;
//			default:printf("ѡ�����,����������!\n");break;
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

////����1/1-1/2+1/3-1/4......+1/99-1/100
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
//			//�ж�:�Ƿ�Ϊ����//�������жϹ���//�Գ���//2-->i-1
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


////�ж�:�Ƿ�Ϊ����//�������жϹ���:��������һ����i=a*b��a��b��������һ������<=��ƽ��i
//int main()
//{
//		int i = 0;
//		int count = 0;
//		for(i=100;i<=200;i++)
//		{
//			//�ж�:�Ƿ�Ϊ����//�������жϹ���//�Գ���//2-->i-1
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
//			//�ж�:�Ƿ�Ϊ����//�������жϹ���//�Գ���//2-->i-1
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
//		//�ж�year�Ƿ�Ϊ����
//		//1.�ܱ�4�������Ҳ��ܱ�100����������
//		//2.�ܱ�400������������
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


////�������������Լ����շת�����
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
//	printf("��������������");
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
//		printf("���������룺>");
//		scanf("%s", password);
//		if (strcmp(password ,"123456")==0)//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��--strcmp
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����\n");
//	}
//	return 0;
//}


////��д���룬��ʾ����ַ��������ƶ������м���
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
//	//whileѭ��ʵ��
//	while (left <= right)
//	{
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������  -cls-�����Ļ
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	//forѭ��ʵ��
//	/*for (left = 0, right = strlen(arr1) - 1;left <= right;left++, right--)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2); 
//	}*/
//	return 0;
//}
	


////�۰�����㷨
////���ֲ����㷨
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}



//int main()
//{
//	int s=0,j, i=1,n= 0;
//	int ret = 1;
//	printf("������n��ֵ:\n");
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		while (i <=j)
//		{
//			ret *= i;//������õģ������Ǹ��ȽϺ�
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
//	printf("������n��ֵ:\n");
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
//	printf("������n��ֵ:\n");
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
//	printf("n�Ľ׳�Ϊ��%d\n", ret);
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
//	//	k++;//��һ�ν���ʱ���ж�������k=0������Ϊ�٣�����forѭ����䲻ִ��ֱ���˳�
//	return 0;
//}


//int main()
//{
//	int j = 0;
//	int i = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//���10��hehe//for(j=0;j<10;j++)���100��hehe
//		{					//j��0�䵽10���ڶ��ν���ʱj=10����������ֱ���˳�
//			printf("hehe\n");
//		}
//	}
//	/*
//	for (;;)
//	{
//		printf("haha\n");
//	}*/
//	//for ѭ���ĳ�ʼ�����������ж϶�����ʡ��
//	//���ǣ�forѭ�����жϲ��������ʡ�ԣ����ж��������ǣ���Ϊ��
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
//	printf("���������룺>");
//	scanf("%s", password);//��ȡ���� ��ȡʱ�Կո���Ϊ������־
//	//��������ʣ��һ��'\n'����ȡһ��'\n'
//	//getchar();
//	while((getchar())!='\n'){;}
//	printf("��ȷ��(Y/N):>");
//	//���뺯�������뻺���� ����\n
//	ret = getchar();//��ȡ\n
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
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
//	//ctrl +z �������
//	//EOF----end of file �ļ�������־ ֵΪ-1
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
//		printf("����һ\n"); break;
//	case 2:
//		printf("���ڶ�\n"); break;
//	case 3:
//		printf("������\n"); break;
//	case 4:
//		printf("������\n"); break;
//	case 5:
//		printf("������\n"); break;
//	case 6:
//		printf("������\n"); break;
//	case 7:
//		printf("������\n"); break;
//	default:
//		printf("�������\n"); break;
//	}
//	switch (day)
//	{
//	case 1:	
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n"); break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n"); break;
//	default:
//		printf("�������\n"); break;
//	}
//	return 0;
//}

//int main()
//{
//	int i=1;
//	for (i; i <= 100; i++)
//	{
//		if (i % 2)
//			printf("%d�Ǹ�����\n", i);
//		else
//			printf("%d�Ǹ�ż��\n", i);
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
//	//;//�����---�����
//	return 0;
//}


//#include <stdio.h>
////����1
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����\n");
//	}
//}
////����2
//#include <stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����\n");
//	}
//	else
//	{
//		printf("����\n");
//	}
//}
//����3
//#include <stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("����\n");
//	}
//	else if (age >= 18 && age < 30)
//	{
//		printf("����\n");
//	}
//	else if (age >= 30 && age < 50)
//	{
//		printf("����\n");
//	}
//	else if (age >= 50 && age < 80)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("�ϲ���\n");
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

