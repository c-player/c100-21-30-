#define _CRT_SECURE_NO_WARNINGS 1

/*
����ƹ����ӽ��б������������ˡ��׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ�
�ѳ�ǩ���������������������Ա����������������a˵������x�ȣ�
c˵������x,z�ȣ��������ҳ��������ֵ�������
*/

#include <stdio.h>
int main()
{
	char i, j, k;//�ٶ�a,b,c�Ķ��ֱַ���i,j,k
	for (i = 'x'; i <= 'z'; i++)
	{
		for (j = 'x'; j <= 'z'; j++)
		{
			if (i != j)//ȷ��a��b�Ķ��ֲ�ͬ
			{
				for (k = 'x'; k <= 'z'; k++)
				{
					if (i != k&&j != k)//ȷ��a��c��b��c�Ķ��ֲ�ͬ
					{
						if (i != 'x'&&k != 'x'&&k != 'z')//����
						{
							printf("a--%c\nb--%c\nc--%c",i,j,k);
						}
					}
				}
			}
		}
	}
    return 0;
}