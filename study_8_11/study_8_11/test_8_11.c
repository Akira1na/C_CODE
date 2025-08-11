#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//分支语句
//1.if...else if...else...语句
//1.1  else语句跟最近的if匹配。
// 
//int main()
//{
//	
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("Child\n");
//	}
//	else if (age >= 18 && age < 30)
//	{
//		printf("Teen\n");
//	}
//	else if (age >= 30 && age < 60)
//	{
//		printf("Adult\n");
//	}
//	else
//	{
//		printf("Older\n");
//	}
//	
//	return 0;
//}
//
//判断一个数是否为奇数
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//
//	if (num % 2 == 1)
//	{
//		printf("奇数\n");
//	}
//	else
//	{
//		printf("偶数\n");
//	}
//
//	return 0;
//}
//
//输出1-100之间的奇数
//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		if (num % 2 == 1)  //判断是否为奇数。
//		{
//			printf("%d\n", num);
//		}
//		num++;
//	}
//
//	return 0;
//}
//
// 
// 
//2. switch语句(常用于多分支的情况)
// 
// 判断日期
//int main()
//{
//	int Day = 0;
//	scanf("%d", &Day);
//
//	switch (Day) //switch(整型表达式)，表达式只能是整型。
//	{
//	case 1:  //case决定入口。
//		printf("周一\n");
//		break;  //break跳出循环。
//	case 2:  //case 整型常量表达式;  表达式只能是整型且只能是常量。字符也属于整型常量，因为字符存储时用的是ASCII码值。
//		printf("周二\n");
//		break;
//	case 3:
//		printf("周三\n");
//		break;
//	case 4:
//		printf("周四\n");
//		break;
//	case 5:
//		printf("周五\n");
//		break;
//	case 6:
//		printf("周六\n");
//		break;
//	case 7:
//		printf("周日\n");
//		break;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int Day = 0;
//	scanf("%d", &Day);
//
//	switch (Day) 
//	{
//	case 1:  
//	case 2:  
//	case 3:
//	case 4:
//	case 5:
//		printf("Weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("Weekend\n");
//		break;
//	}
//
//	return 0;
//}
//
//
//2.1 default子句
//int main()
//{
//	int Day = 0;
//	scanf("%d", &Day);
//
//	switch (Day) 
//	{
//	case 1:  
//	case 2:  
//	case 3:
//	case 4:
//	case 5:
//		printf("Weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("Weekend\n");
//		break;
//	default:  //  如果输入值与case语句的值不匹配，执行default子句的语句。
//		printf("Err");
//		break;
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++; 
//	case 3:
//		switch (n)
//		{  //switch允许嵌套使用
//		case 1:n++; 
//		case 2:m++; n++; 
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d,n = %d\n",m,n); // m = 5  n = 3
//
//	return 0;
//}
//
//
// 
//循环语句
//1. while循环语句
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;
//
//		printf("%d\n", i);
//		i++;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF) //getchar管理输入缓冲区
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	//只打印数字字符
//
//	return 0;
//}
