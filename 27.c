#define _CRT_SECURE_NO_WARNINGS 1

//利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。

#include <stdio.h>

#define N 5

void palin(int n)
{
	char next;
	if (n <= 1) {
		next = getchar();
		printf("相反顺序输出结果:");
		putchar(next);
	}
	else {
		next = getchar();
		palin(n - 1);
		putchar(next);
	}
}

int main()
{
	printf("请输入%d个字符:", N);
	palin(N);
}