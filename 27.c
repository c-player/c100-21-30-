#define _CRT_SECURE_NO_WARNINGS 1

//���õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������

#include <stdio.h>

#define N 5

void palin(int n)
{
	char next;
	if (n <= 1) {
		next = getchar();
		printf("�෴˳��������:");
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
	printf("������%d���ַ�:", N);
	palin(N);
}