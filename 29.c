#define _CRT_SECURE_NO_WARNINGS 1

//��һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�

#include <stdio.h>

int Digit(int n)
{
	int count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return count;
}

void InverseNum(int n)
{
	printf("����");
	while (n != 0)
	{
		printf("%d ", n % 10);
		n = n / 10;
	}
}

int main()
{
	int n;
	printf("����һ��������5λ����������");
	scanf("%d", &n);
	if (n < 0 || n > 99999)
	{
		printf("���ݷǷ������������롣");
		return -1;
	}
	printf("%dλ��\n", Digit(n));
	InverseNum(n);
    return 0;
}