#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//标准主函数
//int main()
//{
//	return 0;
//}

//数据类型
//int main()
//{
//	printf("%zu\n", sizeof(char));      //字符数据类型 1byte = 8bit
//	printf("%zu\n", sizeof(int));       //整型         4byte = 32bit
//	printf("%zu\n", sizeof(short));     //短整型       2byte = 16bit
//	printf("%zu\n", sizeof(long));      //长整型       4byte = 32bit
//	printf("%zu\n", sizeof(long long)); //更长的整型   8byte = 64bit
//	printf("%zu\n", sizeof(float));     //单精度浮点型 4byte = 32bit
//	printf("%zu\n", sizeof(double));    //双精度浮点型 8byte = 64bit
//	return 0;
//}

//变量和常量
//全局变量:{}外部定义变量
//局部变量:{}内部定义变量
//全局变量和局部变量名字冲突时，局部优先。
//scanf输入函数
//printf输出函数
//int main()
//{
//	int num1 = 0;
//	int num2 = 0; //创建变量时进行初始化
//	
//	//输入两个整数
//	scanf("%d %d", &num1, &num2);//不想使用scanf_s函数在源文件第一行放#define _CRT_SECURE_NO_WARNINGS
//	//求和
//	int sum = num1 + num2;
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}


//变量的作用域
//1.局部变量
// 作用域为局部变量所在范围。
// 
//2.全局变量
//作用域为整个工程。
// 
// 
// 声明来自外部的符号:extern
// 
// 
//变量的生命周期
//1.局部变量
//进入作用域范围生命周期开始，出作用域范围生命周期结束。
// 
//2.全局变量
//整个程序的生命周期。
//