#include<stdio.h >
#include<string.h>
#include<stdlib.h>

int main()
{
	//system()-执行系统命令
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s",input);//接收输入的内容
	//strcmp()-比较两个字符串是否相等
	if (strcmp(input, "我是猪")==0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
