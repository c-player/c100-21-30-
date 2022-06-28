#define _CRT_SECURE_NO_WARNINGS 1

/*
打印出如下图案（菱形）。
 0123456
0   *
1  ***
2 *****
3*******
4 *****
5  ***
6   *
*/

#include <stdio.h>

int main()
{
	int i = 0, j = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3 - i; j++)
		{
			printf(" ");
		}
		for (j = 3 - i; j <= 3 + i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 4; i < 7; i++)
	{
		for (j = 0; j < i - 3; j++)
		{
			printf(" ");
		}
		for (j = i - 3; j < 10 - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
    return 0;
}