#include<stdio.h>
//����1!+2!+3!+...+10!
int main()
{
	int sum = 0, mul = 1, x, y;
	for (x = 1; x <= 3; x++)	//�����ܺ�
	{
		mul = mul * x;//����׳�
		sum = sum + mul;
	}
	printf("1!+2!+3!+...+10!=%d", sum);
	return 0;
}