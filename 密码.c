#include<stdio.h>
#include<string.h>
//模拟用户登陆，只能输入三次密码，都错误直接退出

char code[] = { "123456" };
char input[20] = { 0 };
int i = 1;

int main()
{
	do
	{
		printf("请输入密码：");
		scanf_s("%s", input,20);
		i++;
		if (strcmp(input, code) == 0)
		{
			printf("密码正确");
			return 1;
		}
		else
		{
			printf("密码错误.\n");
		}
	} while (i <= 3);
	return 0;
}


