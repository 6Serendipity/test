#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1
//int main(void)
//{
//	int A[4][5] = { 0 };
//	int sum[4] = { 0 };
//	int i,j;
//	int max, k,t;
//
//
//	for (i = 0;i <= 3;i++)
//	{
//		printf("请输入第%d行的数字:\n",i+1);
//		for (j = 0;j <= 4;j++)
//		{
//			scanf("%d", &A[i][j]);
//			sum[i] = sum[i] + A[i][j];
//		}
//	}
//
//	k = 0;
//	max = sum[0];
//	for (i = 1;i <= 3;i++)
//	{
//		if (sum[i] > max)
//		{
//			k = i;
//		}
//	}
//	if (k != 0)
//	{
//		for (j = 0;j <= 4;j++)
//		{
//			t = A[k][j];A[k][j] = A[0][j];A[0][j] = t;
//		}
//	}
//
//
//	for (i = 0;i <= 3;i++)
//	{
//		for (j = 0;j <= 4;j++)
//		{
//			printf("%d  ", A[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//2
//int main()
//{
//	int i,j=0;
//	int k, p, n = 0,m = 0;
//	int a[50] = { 0 };
//	int b[50] = { 0 };
//	int t;
//
//	//输入
//	for (i = 0;i <= 49;i++)
//	{
//		scanf("%d", &a[i]);
//		if (a[i] == -1)
//		{
//			break;
//		}
//		while (a[i] < 1000 || a[i] > 9999)
//		{
//			printf("输入的第%d个数字不是四位数，请重新输入\n",i+1);
//			scanf("%d", &a[i]);
//		}
//		n++;
//	}
//
//	//判断满足条件的数并赋值到b数组
//	for (i = 0;i <= n-1;i++)
//	{
//		k = a[i];
//		while (k != 0)
//		{
//			p = k % 10;
//			if (p % 2 != 0)
//			{
//				break;
//			}
//			k = k / 10;
//		}
//		if (k == 0)
//		{
//			b[j] = a[i];
//			j++;
//			m++;
//		}
//	}
//
//	//b数组内的数字进行排序
//	for (i = 0;i <= m - 2;i++)
//	{
//		for (j = m - 1;j >= i + 1;j--)
//		{
//			if (b[j] > b[j - 1])
//			{
//				t = b[j];b[j] = b[j - 1];b[j - 1] = t;
//			}
//		}
//	}
//
//	//输出
//	for (i = 0;i <= m - 1;i++)
//	{
//		printf("%d  ", b[i]);
//	}
//	return 0;
//}


//3
//int main()
//{
//	int i,j,k;
//	int t;
//	int a[10]={0};
//	for (i = 0;i <= 9;i++)
//	{
//		printf("请输入第%d个数字：\n", i + 1);
//		scanf("%d", &a[i]);
//	}
//
//	for (i = 0;i <= 9;i++)
//	{
//		k = i;
//		for (j = i + 1;j <= 9;j++)
//		{
//			if (a[k] % 2 == 0 && a[j] % 2 == 1)
//			{
//				k = j;
//			}
//			else if ((a[k] % 2 == a[j] % 2) && a[j] < a[k])
//			{
//				k = j;
//			}
//		}
//		
//		if (k != i)
//		{
//			t = a[k];a[k] = a[i];a[i] = t;
//		}
//	}
//
//	for (i = 0;i <= 9;i++)
//	{
//		printf("%d  ", a[i]);
//	}
//	return 0;
//}

//4
//int main()
//{
//	int k=0, i;
//	int a[17]={0};
//	int n = 17;
//
//	for (i = 0;i <= 16;i++)
//	{
//		a[i] = i+1;
//	}
//
//	while (n >= 0)
//	{
//		k = (k + 7 - 1) % n + 1;
//		printf("%d  ", a[k-1]);
//		for (i = k-1 ;i <= n-2;i++)
//		{
//			a[i] = a[i + 1];
//		}
//		k = k - 1;
//		n--;
//	}
//
//	return 0;
//}