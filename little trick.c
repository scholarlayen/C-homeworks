#include<stdio.h>
#include<Windows.h>
#include<string.h>

int main()
{
	char input[20];
	printf("˵����������Ȼ��ĵ��Ի���2���Ӻ�ػ�\n");
	system("shutdown -s -t 120");
	while (1)
	{
		scanf_s("%s", input, 20);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			printf("�õģ���");
			break;
		}
		else
		{
			printf("�ٸ���һ�λ����");
		}
	}
	return 0;
}
