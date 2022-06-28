#define _CRT_SECURE_NO_WARNINGS 1

//Çó1 + 2!+ 3!+ ... + 20!µÄºÍ¡£

#include <stdio.h>

long long Factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
		return n * Factorial(n - 1);
}

int main()
{
	int i;
	long long sum = 0;
	for (i = 1; i <= 20; i++)
	{
		sum += Factorial(i);
	}
	printf("%lld", sum);
    return 0;
}