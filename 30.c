#define _CRT_SECURE_NO_WARNINGS 1

//一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。

#include <stdio.h>

int Palin(int n)
{
	if ((n % 10 == n / 10000) && (n / 1000 % 10 == n % 100 / 10))
	{
		return 1;
	}
	return 0;
}

int main()
{
	int n;
	while (1)
	{
		printf("请输入一个5位数，输入-1停止判断：");
		scanf("%d", &n);
		if (n == -1)
		{
			break;
		}
		if (n < 10000 || n > 99999)
		{
			printf("数据非法，请重新输入。\n");
		}
		else
		{
			if (1 == Palin(n))
			{
				printf("%d是回文。\n", n);
			}
			else
			{
				printf("%d不是回文。\n", n);
			}
		}
	}
    return 0;
}