#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int t, i, j;
	int a[5];
	for (i = 0;i <= 4;i++)
	{
		a[i] = 0;
	}
	i = 0;
	while (i <= 4)
	{
		scanf("%d", &a[i]);
		i++;
	}
	for (i = 0;i <= 3;i++)
	{
		for (j = 0;j <= 3 - i; j++)
		{
			if (a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	printf("最小的数字为%d", a[4]);
	return 0;
}