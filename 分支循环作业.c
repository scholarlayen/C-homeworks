#include<stdio.h>
#include<string.h>
#include<math.h>

void codejudge()
{
	//ģ���û���½��ֻ�������������룬������ֱ���˳�

	char code[] = { "123456" };
	char input[20] = { 0 };
	int i = 1;

	do
	{
		printf("���������룺");
		scanf_s("%s", input, 20);
		i++;
		if (strcmp(input, code) == 0)
		{
			printf("������ȷ");
		}
		else
		{
			printf("�������.\n");
		}
	} while (i <= 3);
}

void threemuls()//3�ı���
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i%3==0)
		{
			printf("%d  ", i);
		}
	}
}

void bubblesequence()	//��ð���㷨
{
	int x, i, j;
	int arr[] = { 4,8,6 };
	int length = sizeof(arr) / sizeof(int);
	for (i = 0; i < length; i++)	//3�����鳤��
	{
		for (j = 0; j < length - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = x;
			}
		}
	}
	printf("output:%d %d %d", arr[0], arr[1], arr[2]);
}

void divisor()//���������
//ʹ��շת������������������ͽ�С����ȡ������ֱ������Ϊ0�����һ�ν�С��Ϊ���������
{
	int a=64, b=96;
	int x, n = 1;
	if (a < b)
	{
		x = a;
		a = b;
		b = x;
	}
	while (n)
	{
		n = a % b;
		a = b;
		b = n;
	}
	printf("%d", a);
}

void leapyear()//1000��-2000�������
{
	int i;
	for (i = 1000; i <= 2001; i++)
	{
		if (((i % 4) == 0 && (i % 100) != 0) || (i % 400) == 0)
			printf("%d��������\n ",i);
	}
}

void primenum()//100-200֮�������
{
	int i,icon;
	int x;
	for (i = 101; i <= 200; i+=2) //����ֱ��ɸȥż��
	{
		for (x = 2; x <= sqrt(i); x++)	//����Ҫ����ת������λ����������Ϊ����������������������ǹ�������
		{
			icon = 0;
			if (i % x == 0)
			{
				icon = 1;
				break;
			}
			
		}
		if(icon==0)
			printf("%d\n", i);
	}
}

void num9()//1-100����9�ĸ���
{
	int i, count = 0;
	for ( i = 9; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("%d", count);
}

void cal()
{
	int i;
	float sum = 0;
	for (i=1;i<=100;i++)
	{
		if (i % 2 == 0)
		{
			sum = sum + 1.0 / (-i);
		}
		else
		{
			sum = sum + 1.0 / i;
		}
	}
	printf("%f", sum);
}

void max()	//�����ֵ��������
{
	int i;
	int arr[] = { 1,2,3,4,5,6,7,8,9,7,1,20 };
	int length = sizeof(arr) / sizeof(int);
	int max = arr[0];
	for (i = 0; i < length; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d", max);
}

void multable()//����˷��ھ���
{
	int i,j;
	for (i = 1; i <= 9; i++)
	{
		for ( j = 1; j <= i; j++)
		{
			printf(" %d �� %d = %2d ",j,i,i*j);			//%2d ��ʾֻ��ӡ��λ
		}
		printf("\n");
	}
}

int main()
{
	multable();
	return 0;
}


