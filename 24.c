#define _CRT_SECURE_NO_WARNINGS 1

//有一分数序列：2 / 1，3 / 2，5 / 3，8 / 5，13 / 8，21 / 13...求出这个数列的前20项之和。
//两个斐波那契数列，后一个分子=前一个分子分母之和
//后一个分母=前一个分子

#include <stdio.h>
#define N 20

int main()
{
	int i = 0;
	float f1 = 2.0, f2 = 1.0;
	int temp;
	float sum = 0;
	for (i = 0; i < N; i++)
	{
		sum += f1 / f2;
		temp = f1;
		f1 = f1 + f2;
		f2 = temp;
	}
	printf("前%d项和为：%f", N, sum);
    return 0;
}