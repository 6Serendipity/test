#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int max(int v[], int n)
{
	int i;
	int max = v[0];
	for (i = 1;i <= n;i++)
	{
		if (v[i] > max)
			max = v[i];
	}
	return max;
}

int main(void)
{
	int i;
	int eng[5];
	int mat[5];
	int maxe, maxm;
	printf("请输入5名学生的分数。\n");
	for (i = 0;i < 5;i++)
	{
		printf("[%d]英语:", i + 1);scanf("%d", &eng[i]);
		printf("数学:");scanf("%d", &mat[i]);
	}
	maxe = max(eng, 5);
	maxm = max(mat, 5);
	
	printf("英语的最高分=%d\n", maxe);
	printf("数学的最高分=%d\n", maxm);

	return 0;
}