#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//int main()
//{
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		if (i = 5)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}



//输入三个整数按从大到小输出
//void Swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	//输入
//	scanf("%d %d %d",&a,&b,&c);
//
//	//比较
//	if (a < b)
//	{
//		Swap(&a,&b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//
//	//输出
//	printf("%d %d %d\n",a,b,c);
//
//	return 0;
//}



//打印1-100之间所有3的倍数
//int main()
//{
//	int i = 0;
//	for ( i = 3; i <= 100; i += 3)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ",i);
//		}
//	}
//
//	return 0;
//}



//给定两个数，求两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	//输入
//	scanf("%d %d",&a,&b);
//
//	//求最大公约数
//	//1.暴力求解
//	/*int min = (a < b) ? a : b;
//	int m = min;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d\n",m);*/
//
//	//2.辗转相除法
//	while (a % b)
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//
//	return 0;
//}



//统计1-100的所以整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 1; i <= 100; i++)
//	{
//		//判断个位是不是9
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		//判断十位是不是9
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n",count);
//
//	return 0;
//}



//打印9 * 9乘法口诀表
//int main()
//{
//	int i = 0;
//	for ( i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for ( j = 0; j <= i; j++)
//		{
//			printf("%d * %d = %2d  ",i,j,i * j);  // %2d --> 两位右对齐  ;  %-2d --> 两位左对齐
//		}
//		printf("\n");
//	}
//
//	return 0;
//}