#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�Զ��庯���������ͱ���������
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


//дһ�������ж�һ�����ǲ���������
//����������1�����Ƿ���0
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
//��ӡ100~200֮�������
//������ֻ�ܱ�1����������������
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



//дһ�������ж�һ���ǲ�������
//��ӡ1000~2000��֮�������
//�����жϹ���:
//1.�ܱ�4���������Ҳ��ܱ�100������������
//2.�ܱ�400������������
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
//		//�ж�year�ǲ�������
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
//		//3.����
//		/*if (is_leap_year(year))
//		{
//			printf("%d  ", year);
//		}*/
//	}
//
//	return 0;
//}



//������Ƕ�׵���



//������ʽ����
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}



//main������3������
//int main(int argc,char* argv[],char* envp[])
//{
//	return 0;
//}