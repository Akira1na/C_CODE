#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>  //库中的头文件使用<>。

#include"Add.h"    //自己定义的头文件使用双引号""。

//导入静态库
#pragma comment(lib,"sub.lib")


//函数的声明和定义
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//
//	//加法
//	int sum = Add(a, b);
//	printf("%d\n",sum);
//
//	//减法
//	int ret = Sub(a, b);
//	printf("%d\n",ret);
//
//	return 0;
//}
//



//函数的递归和迭代

//接受一个整型值(无符号)，按照顺序打印它的每一位
//%d是打印有符号的整数(会有正负数)
//%u是打印无符号的整数
//
//void Print(unsigned int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);  // 123
//	}
//	printf("%d ", n % 10);  // 4
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d",&num);
//
//	//接受一个整型值(无符号)，按照顺序打印它的每一位
//	Print(num); 
//
//	return 0;
//}



//求字符串长度
//模拟实现strlen
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "ssvgg";
//
//	//char*
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//
//	return 0;
//}



//求n的阶乘
//
//int fac(int n)
//{
//	//递归实现
//	/*if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}*/
//
//	//迭代实现(非递归)
//	int i = 0;
//	int ret = 1;
//	for ( i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//
//	int ret = fac(n);
//	printf("ret = %d\n",ret);
//
//	return 0;
//}



//求第n个斐波那契数
//斐波那契数列
//1 1 2 3 5 8 13 21 34 55 ...
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//
//	int ret = Fib(n);
//	printf("%d\n",ret);
//
//	return 0;
//}