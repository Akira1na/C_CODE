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



//���������������Ӵ�С���
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
//	//����
//	scanf("%d %d %d",&a,&b,&c);
//
//	//�Ƚ�
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
//	//���
//	printf("%d %d %d\n",a,b,c);
//
//	return 0;
//}



//��ӡ1-100֮������3�ı���
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



//�������������������������Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	//����
//	scanf("%d %d",&a,&b);
//
//	//�����Լ��
//	//1.�������
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
//	//2.շת�����
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



//ͳ��1-100�����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 1; i <= 100; i++)
//	{
//		//�жϸ�λ�ǲ���9
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		//�ж�ʮλ�ǲ���9
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n",count);
//
//	return 0;
//}



//��ӡ9 * 9�˷��ھ���
//int main()
//{
//	int i = 0;
//	for ( i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for ( j = 0; j <= i; j++)
//		{
//			printf("%d * %d = %2d  ",i,j,i * j);  // %2d --> ��λ�Ҷ���  ;  %-2d --> ��λ�����
//		}
//		printf("\n");
//	}
//
//	return 0;
//}