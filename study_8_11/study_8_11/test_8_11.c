#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//��֧���
//1.if...else if...else...���
//1.1  else���������ifƥ�䡣
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
//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//
//	if (num % 2 == 1)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("ż��\n");
//	}
//
//	return 0;
//}
//
//���1-100֮�������
//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		if (num % 2 == 1)  //�ж��Ƿ�Ϊ������
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
//2. switch���(�����ڶ��֧�����)
// 
// �ж�����
//int main()
//{
//	int Day = 0;
//	scanf("%d", &Day);
//
//	switch (Day) //switch(���ͱ��ʽ)�����ʽֻ�������͡�
//	{
//	case 1:  //case������ڡ�
//		printf("��һ\n");
//		break;  //break����ѭ����
//	case 2:  //case ���ͳ������ʽ;  ���ʽֻ����������ֻ���ǳ������ַ�Ҳ�������ͳ�������Ϊ�ַ��洢ʱ�õ���ASCII��ֵ��
//		printf("�ܶ�\n");
//		break;
//	case 3:
//		printf("����\n");
//		break;
//	case 4:
//		printf("����\n");
//		break;
//	case 5:
//		printf("����\n");
//		break;
//	case 6:
//		printf("����\n");
//		break;
//	case 7:
//		printf("����\n");
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
//2.1 default�Ӿ�
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
//	default:  //  �������ֵ��case����ֵ��ƥ�䣬ִ��default�Ӿ����䡣
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
//		{  //switch����Ƕ��ʹ��
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
//ѭ�����
//1. whileѭ�����
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
//	while ((ch = getchar()) != EOF) //getchar�������뻺����
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
//	//ֻ��ӡ�����ַ�
//
//	return 0;
//}
