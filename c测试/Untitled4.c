#include<stdio.h >
#include<string.h>
#include<stdlib.h>

int main()
{
	//system()-ִ��ϵͳ����
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s",input);//�������������
	//strcmp()-�Ƚ������ַ����Ƿ����
	if (strcmp(input, "������")==0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
