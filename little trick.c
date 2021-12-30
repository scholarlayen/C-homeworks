#include<stdio.h>
#include<Windows.h>
#include<string.h>

int main()
{
	char input[20];
	printf("说：我是猪，不然你的电脑会在2分钟后关机\n");
	system("shutdown -s -t 120");
	while (1)
	{
		scanf_s("%s", input, 20);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			printf("好的，猪。");
			break;
		}
		else
		{
			printf("再给你一次机会吧");
		}
	}
	return 0;
}
