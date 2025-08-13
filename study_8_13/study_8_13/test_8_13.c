#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>

//二分查找
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
//			printf("找到了，下标为:%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}



//多个字符从两端移动，向中间汇聚
//


//简单模拟登录情景
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//假设密码是字符串。
//	for ( i = 0; i < 3; i++)
//	{
//		printf("请输入密码:");
//		scanf("%s", password); //数组名本身就是地址，不需要&取地址。
//		if (strcmp(password,"abcdef") == 0)  //比较2个字符串是否相等，不能使用==，而是使用一个库函数:strcmp。
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("三次输入密码均错误，退出程序\n");
//	}
//
//	return 0;
//}


//猜数字
//电脑产生一个随机数(1~100)
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
//	//1.生成随机数
//	//任何数模100得到0~99 --> 加1得到1~100
//	int ret = rand() % 100 + 1;  //生成随机数的函数
//
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了!\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了!\n");
//		}
//		else
//		{
//			printf("Bingo！\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL)); //使用time函数生成时间戳用于随机数的起点，srand整个工程只需要生成一次起点
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏。\n");
//			break;
//		default:
//			printf("选择错误，请重新选择！\n");
//		}
//	} 
//	while (input);
//
//	return 0;
//}




//goto语句
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");
//again:
//	printf("请注意，电脑将在120s内关机，请输入:a，取消关机\n");
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



//库函数
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