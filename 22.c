#define _CRT_SECURE_NO_WARNINGS 1

/*
两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。
已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，
c说他不和x,z比，请编程序找出三队赛手的名单。
*/

#include <stdio.h>
int main()
{
	char i, j, k;//假定a,b,c的对手分别是i,j,k
	for (i = 'x'; i <= 'z'; i++)
	{
		for (j = 'x'; j <= 'z'; j++)
		{
			if (i != j)//确保a和b的对手不同
			{
				for (k = 'x'; k <= 'z'; k++)
				{
					if (i != k&&j != k)//确保a和c、b和c的对手不同
					{
						if (i != 'x'&&k != 'x'&&k != 'z')//条件
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