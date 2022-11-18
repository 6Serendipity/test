#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

// int main()
//{
//	 int n;
//	 int i, j;
//	 scanf("%d", &n);
//	 for (i = 1;i <= n;i++)
//	 {
//		 for (j = 2 * i;j <= 2 * n + 1;j++)
//		 {
//			 printf(" ");
//		 }
//		 for (j = 1;j <= 2 * i - 1;j++)
//		 {
//			 printf("*");
//		 }
//		 printf("\n");
//	 }
//	 return 0;
//}

//int main()
//{
//	int n,k;
//	int count = 0;
//	int a[100] = { 0 };
//	int i=0;
//	printf("请输入不多于5位的正整数：\n");
//	scanf("%d", &n);
//	k = n;
//	while (k != 0)
//	{
//		a[i] = k % 10;
//		k = k / 10;
//		i++;
//	}
//	count = i;
//	printf("这个数字的位数为%d\n",count);
//	for (i = count-1;i >= 0;i--)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (i = 0;i <= count - 1;i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//第三题
//int main()
//{
//	int i, j, k ,t=1;
//	int sum = 0;
//	for (i = 1;i <= 5;i++)
//	{
//		for (j = 2;j <= 6;j++)
//		{
//			for (k = 1;k <= i + j;k++)
//			{
//				t = t * k;
//			}
//			sum = sum + t;
//			t = 1;
//		}
//	}
//	printf("原式的结果为%d\n", sum);
//	return 0;
//}
//
//第四题
//int main()
//{
//	int k, sum = 0;
//	for (k = 0;k <= 50;k++)
//	{
//		sum = sum + k * k - 2 * k + 3;
//	}
//	printf("sum=%d\n", sum);
//}

//第五题
//int main()
//{
//	long long int k,num,sum=0;
//	int i,j;
//	int n=0;
//	int t=0;
//	int a[10] = { 0 };
//	long long int b[10] = { 1,1,1,1,1,1,1,1,1,1 };
//	for (num = 1;num <= 1e9;num++)
//	{
//		k = num;
//		while (k != 0)
//		{
//			a[n] = k % 10;
//			k = k / 10;
//			n++;
//		}
//		for (i = 0;i <= n - 1;i++)
//		{
//			for (j = 1;j <= n;j++)
//			{
//				b[i] = b[i] * a[i];
//			}
//		}
//		for (i = 0;i <= n - 1;i++)
//		{
//			sum = sum + b[i];
//		}
//		if (sum == num)
//		{
//			printf("%lld为自幂数\n", num);
//		}
//		sum = 0;
//		n = 0;
//		for (i = 0;i <= 9;i++)
//			b[i] = 1;
//	}
//	return 0;
//}

//第六题
//int main()
//{
//	int num;
//	int i;
//	int sum = 0;
//	for (num = 1000;num <= 10000;num++)
//	{
//		for (i = 1;i <= num / 2;i++)
//		{
//			if (num % i == 0)
//			{
//				sum = sum + i;
//			}
//		}
//		if (sum == num)
//		{
//			printf("%d是完数\n", num);
//		}
//		sum = 0;
//	}
//	return 0;
//}

//第七题
//两个乒乓球队进行比赛，各出3人。甲队为A,B,C 3人，乙队为X,Y,Z 3人
//以抽签决定比赛名单。有人向队员打听比赛名单，A说他不和X比，C说他不和X,Z比
//请编程序找出3对赛手名单
//int main()
//{
//	int a, b, c;  //a是A的对手 b是B的对手 c是C的对手
//	for (a = 'X'; a <= 'Z'; a++)
//	{
//		for (b = 'X'; b <= 'Z'; b++)
//		{
//			if (a != b)//避免重复比赛
//			{
//				for (c = 'X'; c <= 'Z'; c++)
//				{
//					if (a != c && b != c)//避免重复比赛
//					{
//						if (a != 'X' && c != 'X' && c != 'Z')
//						{
//							printf(" A对%c\n B对%c\n C对%c", a, b, c);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//第八题
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	for (;a < 10;a++)
//	{
//		while (b++ < 10)
//		{
//			for (;c < 10;c++, d++)
//			{
//				if (c * d > 25) break;
//				else continue;
//			}
//		}
//	}
//	for (;d >= 0;d--)
//	{
//		printf("%d %d %d %d\n", a, b, c, d);
//	}
//
//}

//第九题
//int main()
//{
//	int i, j, n = 0,num,sum=0;
//	for (i = 1;i <= 4;i++)
//	{
//		for (j = 1;j <= 6;j++)
//		{
//			num = (i + 1) * (j + 1);
//			if (num < 10)
//			{
//				printf(" %d  ", num);
//			}
//			else
//			{
//				printf("%d  ", num);
//			}
//			sum = sum + num;
//		}
//		printf("\n");
//	}
//	printf("矩阵中所有数字的和为%d。\n", sum);
//	return 0;
//}

//第十题
//int main()
//{
//	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int month = 0; 
//	int day = 0;
//	int i;
//	int total = 366;
//	int xingqi=5;
//	printf("请输入所要查询的2017年的月份：\n");
//	scanf("%d", &month);
//	while (month > 12 || month <= 0)
//	{
//		printf("月份不匹配！！！请重新输入所要查询的2017年的月份：\n");
//		scanf("%d", &month);
//	}
//	printf("请输入所要查询的2017年的日期：\n");
//	scanf("%d", &day);
//	if (month == 2)
//	{
//		while (day!=28)
//		{
//			printf("日期不匹配！！！请重新输入所要查询的2017年的日期：\n");
//			scanf("%d", &day);
//		}
//	}
//	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//	{
//		while (day != 31)
//		{
//			printf("日期不匹配！！！请重新输入所要查询的2017年的日期：\n");
//			scanf("%d", &day);
//		}
//	}
//	else
//	{
//		while (day != 30)
//		{
//			printf("日期不匹配！！！请重新输入所要查询的2017年的日期：\n");
//			scanf("%d", &day);
//		}
//	}
//	for (i = 0;i <= month - 2;i++)
//	{
//		total = total + a[i];
//	}
//	total = total + day - 1;
//	xingqi = (xingqi + total - 1) % 7 + 1;
//	printf("2017年%d月%d日是星期%d\n", month, day, xingqi);
//	return 0;
//}

//第十一题
//int main()
//{
//    int n = 0, m = 0;
//    int a[10][10];
//    printf("请输入行数与列数:\n");
//    scanf("%d%d", &n, &m);
//    for (int i = 0;i < n;i++)
//    {
//        for (int j = 0;j < m;j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    for (int i = 0;i < m;i++)
//    {
//        for (int j = 0;j < n;j++)
//        {
//            printf("%d ", a[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//第十二题
int main()
{
	int n;
	int i,j;
	printf("请输入行数n的值：\n");
	scanf("%d", &n);
	for (i = 1;i <= n-1;i++)
	{
		for (j = 1;j <= i;j++)
		{
			printf("*");
		}
		for (j = 1;j <= 2 * n - 1 - 2 * i;j++)
		{
			printf(" ");
		}
		for (j = 1;j <= i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (j = 1;j <= 2 * n - 1;j++)
	{
		printf("*");
	}
}