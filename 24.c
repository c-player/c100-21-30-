#define _CRT_SECURE_NO_WARNINGS 1

//��һ�������У�2 / 1��3 / 2��5 / 3��8 / 5��13 / 8��21 / 13...���������е�ǰ20��֮�͡�
//����쳲��������У���һ������=ǰһ�����ӷ�ĸ֮��
//��һ����ĸ=ǰһ������

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
	printf("ǰ%d���Ϊ��%f", N, sum);
    return 0;
}