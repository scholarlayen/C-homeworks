#include<stdio.h>
//计算1!+2!+3!+...+10!
int main()
{
	int sum = 0, mul = 1, x, y;
	for (x = 1; x <= 3; x++)	//计算总和
	{
		mul = mul * x;//计算阶乘
		sum = sum + mul;
	}
	printf("1!+2!+3!+...+10!=%d", sum);
	return 0;
}