#include <stdio.h>
//����n�Ľ׳�
int main()
{
	int x;	//���̱���
	int i;	//����Ŀ��
	int mul = 1;	//���ս��
	printf("���������׳˵Ļ�����");
	scanf_s("%d", &i);
	for (x = 1; x < i+1; x++)
	{
		mul = mul * x;
	}
	printf("�����Ľ׳�Ϊ��%d\n", mul);
	return 0;
}
