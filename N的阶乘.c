#include <stdio.h>
//计算n的阶乘
int main()
{
	int x;	//流程变量
	int i;	//计算目标
	int mul = 1;	//最终结果
	printf("请输入计算阶乘的基数：");
	scanf_s("%d", &i);
	for (x = 1; x < i+1; x++)
	{
		mul = mul * x;
	}
	printf("此数的阶乘为：%d\n", mul);
	return 0;
}
