#include<stdio.h>
//��һ�����������в���ĳ����n����дint binsearch(int x,int v[],int n); ���ܣ���v[0]<v[1]<v[2]...�������в���x

int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
int x = 4;
int i = 0;

//int binsearch(int x, int v[], int n)//˳��Ѱ��
//{
//	for (i = 0; i < 9; i++)
//	{
//		if (arr[i] == x)
//		{
//			return i;
//		}
//	}
//}

int binsearch(int x, int v[], int n)//���ַ�Ѱ��
{
	int left = 0;
	int right = n-1;

	for(i=n/2;left <= right;)
	{
		i = (left + right) / 2;
		if (arr[i] == x)
		{
			return i;
		}
		else if (arr[i] > x)
		{
			right = i-1;
		}
		else if(arr[i] < x)
		{
			left = i+1;
		}
	}
}

int main()
{

	int n = sizeof(arr) / sizeof(int);
	int a = binsearch(x, arr, n);
	printf("%d", a+1);
	return 0;
}