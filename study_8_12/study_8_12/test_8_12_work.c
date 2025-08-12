#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//Work_转换ASCII码
//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	//sizeof(arr) --> 计算的是数组的总大小，单位是byte
//	//sizeof(arr[0]) --> 计算的是数组元素的总大小
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	while (i < sz)
//	{
//		printf("%c",arr[i]);
//		i++;
//	}
//
//	return 0;
//}


//Work_出生日期输入输出
//int main()
//{
//	//输入数据
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d",&year,&month,&day);
//	//输出数据
//	printf("year = %d\n",year);
//	printf("month = %02d\n", month);
//	printf("date = %02d\n",day);
//
//	return 0;
//}


//Work_学生基本信息输入输出
//int main()
//{
//	//输入
//	int id = 0;
//	float C = 0.0f; //末尾不加f默认double类型
//	float Math = 0.0f;
//	float ENG = 0.0f;
//	scanf("%d;%f,%f,%f",&id,&C,&Math,&ENG);
//
//	//输出
//	printf("The each subject score of No. %d is %.2f,%.2f,%.2f.\n",id,C,Math,ENG);
//
//	return 0;
//}


//Work_printf的返回值
//int main()
//{
//	int n = printf("Hello World!");
//	printf("\n%d\n",n);
//
//	return 0;
//}


//Work_函数
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return(a + b + c);
//}
//int main()
//{
//	int i = 0;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\t", sum(a));
//	}
//}


//Work_程序设计基础_转义字符
//int main()
//{
//	printf("printf(\"Hello World!\\n\");\n");
//	printf("cout << \"Hello World!\" << endl;\n");
//
//	return 0;
//}


//Work_找最大数
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d",&arr[i]);
//		i++;
//	}
//	//找最大值，假设第一个元素是最大值。
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}


//Work_计算球的体积
//int main()
//{
//	double V = 0.0;
//	double r = 0.0;
//	scanf("%lf",&r);
//	V = 4 / 3.0 * 3.1415926 * r * r * r;
//	printf("%.3lf\n",V);
//
//	return 0;
//}


//Work_计算BMI
//int main()
//{
//	int high = 0;
//	int weight = 0;
//	scanf("%d %d",&high,&weight);
//
//	//计算
//	float bmi = weight / (high / 100.0) / (high / 100.0);
//
//	//输出
//	printf("%.2f\n", bmi);
//
//	return 0;
//}


//Work_计算n的阶乘
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//
//	scanf("%d",&n);
//
//	for ( i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}


//Work_计算1!+2!+3!...+10!
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	/*for ( n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for ( i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}*/
//
//	for ( n = 1; n <= 10 ; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}


//Work_有序数组中查找某个数字(二分查找)
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	int k = 6;
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//
//	while (left <= right)
//	{
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("Find:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("404 F\n");
//	}
//	
//
//	return 0;
//}