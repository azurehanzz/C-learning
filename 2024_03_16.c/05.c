#include <stdio.h>
int main()
{
	int i;
	int j;
	int k;
	int l;
	int o;
	int count = 0;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; (j <= 5) ; j++)
		{
			if (j == i)
				continue;
			else
			{
				for (k = 1; (k <= 5); k++)
				{
					if ((k == i) || (k == j))
						continue;
					else
					{
						for (l = 1; (l <= 5); l++)
						{
							if ((l == i) || (l == j) || (l == k))
								continue;
							else
							{
								for (o = 1; (o <= 5) ; o++)
								{
									if (((o == i) || (o == j) || (o == k) || (o == l)))
										continue;
									else
									{
										if ((((j == 2) ^ (i == 3)) + ((j == 2) ^ (o == 4)) + ((k == 1) ^ (l == 2) )+ ((k == 5) ^ (l == 3)) + ((o == 4) ^ (i == 1)))== 5)
										{
											printf("名次分别为:\nA:%d\nB:%d\nC:%d\nD:%d\nE:%d\n", i, j, k, l, o);
											goto flag;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
  flag:
	return 0;
}