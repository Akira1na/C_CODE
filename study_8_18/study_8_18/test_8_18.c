#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>  //���е�ͷ�ļ�ʹ��<>��

#include"Add.h"    //�Լ������ͷ�ļ�ʹ��˫����""��

//���뾲̬��
#pragma comment(lib,"sub.lib")


//�����������Ͷ���
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//
//	//�ӷ�
//	int sum = Add(a, b);
//	printf("%d\n",sum);
//
//	//����
//	int ret = Sub(a, b);
//	printf("%d\n",ret);
//
//	return 0;
//}
//



//�����ĵݹ�͵���

//����һ������ֵ(�޷���)������˳���ӡ����ÿһλ
//%d�Ǵ�ӡ�з��ŵ�����(����������)
//%u�Ǵ�ӡ�޷��ŵ�����
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
//	//����һ������ֵ(�޷���)������˳���ӡ����ÿһλ
//	Print(num); 
//
//	return 0;
//}



//���ַ�������
//ģ��ʵ��strlen
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



//��n�Ľ׳�
//
//int fac(int n)
//{
//	//�ݹ�ʵ��
//	/*if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}*/
//
//	//����ʵ��(�ǵݹ�)
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



//���n��쳲�������
//쳲���������
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