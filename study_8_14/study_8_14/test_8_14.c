#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//自定义函数交换整型变量的内容
//
//void Swap(int* px,int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	printf("a = %d,b = %d\n", a, b);
//
//	Swap(&a, &b);
//	printf("a\' = %d,b\' = %d\n", a, b);
//
//	return 0;
//}


//写一个函数判断一个数是不是素数。
//是素数返回1，不是返回0
//int is_prime(int n)
//{
//	int j = 0;
//	for ( j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//打印100~200之间的素数
//素数是只能被1和它本身整除的数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d  ",i);
//			count++;
//		}
//		
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}



//写一个函数判断一年是不是闰年
//打印1000~2000年之间的闰年
//闰年判断规则:
//1.能被4整除，并且不能被100整除的是闰年
//2.能被400整除的是闰年
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0)&&(y % 100 != 0) ||(y % 400 == 0) )
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}


//int main()
//{
//	int year = 0;
//	for ( year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是闰年
//		//1.
//		/*if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d\t", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d\t", year);
//		}*/
//
//
//		//2.
//		/*if ((year % 4 == 0)&&(year % 100 != 0) ||(year % 400 ==0) )
//		{
//			printf("%d  ", year);
//		}*/
//
//
//		//3.函数
//		/*if (is_leap_year(year))
//		{
//			printf("%d  ", year);
//		}*/
//	}
//
//	return 0;
//}



//函数的嵌套调用



//函数链式访问
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}



//main函数有3个参数
//int main(int argc,char* argv[],char* envp[])
//{
//	return 0;
//}