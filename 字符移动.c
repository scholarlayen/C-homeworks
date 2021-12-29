#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>

//演示多个字符向中间汇聚
int main()
{
	char arr[25] = { "welcome to my world!!!!!" };
	int line;
	int i;
	for (line = 1; line < 13; line++)
	{
		for (i = 0; i < 25; i++)
		{
			if (i<line || (23 - line)<i) //数组中共有24个元素，对应下标0-23 第一行显示arr[0]及arr[23]
			{
				printf("%c", arr[i]);
			}
			else 
			{
				printf("-");
			}
 		}
		printf("\n");
		Sleep(1000);
		system("cls");
	}

	return 0;

}