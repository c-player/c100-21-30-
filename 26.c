#define _CRT_SECURE_NO_WARNINGS 1

//���õݹ鷽����5!��

#include <stdio.h>

long Factorial(int n)
{
	if (n == 1)
		return 1;
	else
		return n * Factorial(n - 1);
}

int main()
{
	printf("%ld", Factorial(5));
    return 0;
}