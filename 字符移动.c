#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>

//��ʾ����ַ����м���
int main()
{
	char arr[25] = { "welcome to my world!!!!!" };
	int line;
	int i;
	for (line = 1; line < 13; line++)
	{
		for (i = 0; i < 25; i++)
		{
			if (i<line || (23 - line)<i) //�����й���24��Ԫ�أ���Ӧ�±�0-23 ��һ����ʾarr[0]��arr[23]
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