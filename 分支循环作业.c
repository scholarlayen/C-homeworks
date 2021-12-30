#include<stdio.h>
#include<string.h>
#include<math.h>

void codejudge()
{
	//模拟用户登陆，只能输入三次密码，都错误直接退出

	char code[] = { "123456" };
	char input[20] = { 0 };
	int i = 1;

	do
	{
		printf("请输入密码：");
		scanf_s("%s", input, 20);
		i++;
		if (strcmp(input, code) == 0)
		{
			printf("密码正确");
		}
		else
		{
			printf("密码错误.\n");
		}
	} while (i <= 3);
}

void threemuls()//3的倍数
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

void bubblesequence()	//简单冒泡算法
{
	int x, i, j;
	int arr[] = { 4,8,6 };
	int length = sizeof(arr) / sizeof(int);
	for (i = 0; i < length; i++)	//3是数组长度
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

void divisor()//求最大公因数
//使用辗转相除法：两数的余数和较小数再取余数，直至余数为0，最后一次较小数为最大公因数。
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

void leapyear()//1000年-2000年的闰年
{
	int i;
	for (i = 1000; i <= 2001; i++)
	{
		if (((i % 4) == 0 && (i % 100) != 0) || (i % 400) == 0)
			printf("%d年是闰年\n ",i);
	}
}

void primenum()//100-200之间的质数
{
	int i,icon;
	int x;
	for (i = 101; i <= 200; i+=2) //可以直接筛去偶数
	{
		for (x = 2; x <= sqrt(i); x++)	//不需要类型转换和上位。若开方不为整数，相近的两个数均不是公因数。
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

void num9()//1-100出现9的个数
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

void max()	//求最大值（不排序）
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

void multable()//输出乘法口诀表
{
	int i,j;
	for (i = 1; i <= 9; i++)
	{
		for ( j = 1; j <= i; j++)
		{
			printf(" %d × %d = %2d ",j,i,i*j);			//%2d 表示只打印两位
		}
		printf("\n");
	}
}

int main()
{
	multable();
	return 0;
}


