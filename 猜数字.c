#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define range 100
int manu()
{
	printf("****************************************************\n");
	printf("*************猜**********数********字***************\n");
	printf("****************************************************\n");
}

int game()
{
	int x;	//随机数
	x = rand() % range + 1;
	int num;//玩家猜的数字
	printf("猜一个数\n");
	while (1)
	{
		scanf_s("%d", &num);
		if (num > x)
		{
			printf("大了\n再试一次吧：");
		}
		else if (num < x)
		{
			printf("小了\n再试一次吧：");
		}
		else
		{
			printf("猜对了！\n");
			break;
		}
	}
	return 0;
}

int main()
{
	srand((unsigned int)time(NULL));//设置以时间为基础的随机起点
	do
	{
		manu();
		int z;
		printf("开始游戏？> ( Y / N )\n");
		z = getchar();
		if (z == 'Y' || z == 'y')
		{
			printf("开始游戏\n");
			game();
		}
		else if (z == 'N' || z == 'n')
		{
			printf("退出游戏\n");
			break;
		}
		else
		{
		printf("请重新输入\n");
		}
	} while (1);
	return 0;
}