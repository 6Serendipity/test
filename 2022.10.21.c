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
	printf("������5��ѧ���ķ�����\n");
	for (i = 0;i < 5;i++)
	{
		printf("[%d]Ӣ��:", i + 1);scanf("%d", &eng[i]);
		printf("��ѧ:");scanf("%d", &mat[i]);
	}
	maxe = max(eng, 5);
	maxm = max(mat, 5);
	
	printf("Ӣ�����߷�=%d\n", maxe);
	printf("��ѧ����߷�=%d\n", maxm);

	return 0;
}