#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>

//���ֲ���
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int key = 0;
//	scanf("%d", &key);
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ:%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}



//����ַ��������ƶ������м���
//


//��ģ���¼�龰
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//�����������ַ�����
//	for ( i = 0; i < 3; i++)
//	{
//		printf("����������:");
//		scanf("%s", password); //������������ǵ�ַ������Ҫ&ȡ��ַ��
//		if (strcmp(password,"abcdef") == 0)  //�Ƚ�2���ַ����Ƿ���ȣ�����ʹ��==������ʹ��һ���⺯��:strcmp��
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("������������������˳�����\n");
//	}
//
//	return 0;
//}


//������
//���Բ���һ�������(1~100)
//void menu()
//{
//	printf("--------------------\n");
//	printf("-------1.Play-------\n");
//	printf("-------0.Exit-------\n");
//	printf("--------------------\n");
//}
//
////0~RAND_MAX(32767)
//void game()
//{
//	int guess = 0;
//
//	//1.���������
//	//�κ���ģ100�õ�0~99 --> ��1�õ�1~100
//	int ret = rand() % 100 + 1;  //����������ĺ���
//
//	//2.������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��!\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���!\n");
//		}
//		else
//		{
//			printf("Bingo��\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL)); //ʹ��time��������ʱ����������������㣬srand��������ֻ��Ҫ����һ�����
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//		}
//	} 
//	while (input);
//
//	return 0;
//}




//goto���
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");
//again:
//	printf("��ע�⣬���Խ���120s�ڹػ���������:a��ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input,"a") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}



//�⺯��
//int main()
//{
//	char str1[] = "Sample string";
//	char str2[40];
//	char str3[40];
//	strcpy(str2, str1);
//	strcpy(str3, "copy successful");
//	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
//	return 0;
//}


//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int max = get_max(a, b);
//	printf("%d\n", max);
//
//	return 0;
//}