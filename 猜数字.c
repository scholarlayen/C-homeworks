#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define range 100
int manu()
{
	printf("****************************************************\n");
	printf("*************��**********��********��***************\n");
	printf("****************************************************\n");
}

int game()
{
	int x;	//�����
	x = rand() % range + 1;
	int num;//��Ҳµ�����
	printf("��һ����\n");
	while (1)
	{
		scanf_s("%d", &num);
		if (num > x)
		{
			printf("����\n����һ�ΰɣ�");
		}
		else if (num < x)
		{
			printf("С��\n����һ�ΰɣ�");
		}
		else
		{
			printf("�¶��ˣ�\n");
			break;
		}
	}
	return 0;
}

int main()
{
	srand((unsigned int)time(NULL));//������ʱ��Ϊ������������
	do
	{
		manu();
		int z;
		printf("��ʼ��Ϸ��> ( Y / N )\n");
		z = getchar();
		if (z == 'Y' || z == 'y')
		{
			printf("��ʼ��Ϸ\n");
			game();
		}
		else if (z == 'N' || z == 'n')
		{
			printf("�˳���Ϸ\n");
			break;
		}
		else
		{
		printf("����������\n");
		}
	} while (1);
	return 0;
}