#define _CRT_SECURE_NO_WARNINGS 1

//给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。

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
	printf("逆序：");
	while (n != 0)
	{
		printf("%d ", n % 10);
		n = n / 10;
	}
}

int main()
{
	int n;
	printf("输入一个不多于5位的正整数：");
	scanf("%d", &n);
	if (n < 0 || n > 99999)
	{
		printf("数据非法，请重新输入。");
		return -1;
	}
	printf("%d位数\n", Digit(n));
	InverseNum(n);
    return 0;
}