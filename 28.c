#define _CRT_SECURE_NO_WARNINGS 1

/*
��5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ�ʵ�4����������
��˵�ȵ�3���˴�2�ꡣ�ʵ������ˣ���˵�ȵ�2�˴����ꡣ
�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ����ʵ�һ���ˣ���˵��10�ꡣ���ʵ�����˶��
*/

#include <stdio.h>
#define N 5

int Age(int n)
{
	if (n == 1)
	{
		return 10;
	}
	else
		return 2 + Age(n - 1);
}

int main()
{
	printf("��%d����%d�ꡣ", N, Age(N));
    return 0;
}