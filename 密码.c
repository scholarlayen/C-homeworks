#include<stdio.h>
#include<string.h>
//ģ���û���½��ֻ�������������룬������ֱ���˳�

char code[] = { "123456" };
char input[20] = { 0 };
int i = 1;

int main()
{
	do
	{
		printf("���������룺");
		scanf_s("%s", input,20);
		i++;
		if (strcmp(input, code) == 0)
		{
			printf("������ȷ");
			return 1;
		}
		else
		{
			printf("�������.\n");
		}
	} while (i <= 3);
	return 0;
}


