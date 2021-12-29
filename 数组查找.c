#include<stdio.h>
//在一个有序数组中查找某数字n，编写int binsearch(int x,int v[],int n); 功能：在v[0]<v[1]<v[2]...的数组中查找x

int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
int x = 4;
int i = 0;

//int binsearch(int x, int v[], int n)//顺序寻找
//{
//	for (i = 0; i < 9; i++)
//	{
//		if (arr[i] == x)
//		{
//			return i;
//		}
//	}
//}

int binsearch(int x, int v[], int n)//二分法寻找
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