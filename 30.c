#define _CRT_SECURE_NO_WARNINGS 1

//һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��

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
		printf("������һ��5λ��������-1ֹͣ�жϣ�");
		scanf("%d", &n);
		if (n == -1)
		{
			break;
		}
		if (n < 10000 || n > 99999)
		{
			printf("���ݷǷ������������롣\n");
		}
		else
		{
			if (1 == Palin(n))
			{
				printf("%d�ǻ��ġ�\n", n);
			}
			else
			{
				printf("%d���ǻ��ġ�\n", n);
			}
		}
	}
    return 0;
}