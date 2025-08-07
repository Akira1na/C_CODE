#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//%s  --> 打印字符串
//%d  --> 打印整型
//%c  --> 打印字符
//%f  --> 打印float类型的数据
//%lf --> 打印double类型的数据
//%zu --> 打印sizeof的返回值

//常量
// 
//1.字面常量
// int main()
// {
//	30;
//	"w";//字符
// 
//	return 0;
// }
// 
// 
//2.const修饰的常变量
//int main()
//{
//	const int a = 10;//在c语言中，const修饰的a，本质是变量，但是不能被修改，具有常量的属性。
//	printf("%d\n", a);
//
//	return 0;
//}
//
//
//3.define定义的的标识符常量
//#define MAX 100
//
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//
//	return 0;
//}
//
//
//4.枚举常量（习惯大写）
//enum Color  //enum枚举关键字
//{
//	//枚举常量,整型，从0开始。
//	RED,
//	GREEN,
//	BLUE
//};//类型
//enum Sex  //enum枚举关键字
//{
//	//枚举常量
//	MALE,
//	FEMMALE,
//	SECRET,
//};//类型
//int main()
//{
//	//三原色 RGB
//	int num = 10;
//	enum Color c = RED;//用类型定义变量时，才向内存申请空间。
//	RED = 20;//ERR
//
//
//	return 0;
//}



//字符串
// 
//'a'; //字符常量，用''单引号。
//
//"abc"; //字符串，用""双引号。     C语言中没有没有字符串类型。
// 
// 
// 字符串的标识符
//int main()
//{
//	char arr1[] = "abcdef";//字符串末尾隐藏一个\0的转义字符，\0是字符串结束标识很重要。
//	char arr2[] = { 'a','b','c','d','e','f'};
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	int len = strlen("abc");//string length，求字符串长度函数。头文件string.h
//	
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
// 
//	return 0;
//}
//
//



//转义字符
//  \n---换行
//  \0---结束
//  \?---书写连续多个问好时使用，防止被解析成三字母词         三字母词: ??) --> ]       ??( --> [
//  \'---表示字符常量'
//  \"---表示一个字符串内部的双引号
//  \\---表示一个反斜杠，防止被解释为一个转义序列符
//  \a---警告字符，蜂鸣
//  \b---退格符
//  \f---进纸符
//  \r---回车
//  \t---水平制表符
//  \v---垂直制表符
//  \ddd---ddd表示1-3个八进制的数字，如:\130 X   将八进制130转换为十进制后以ASCII码表输出为X。    0~127之间才有意义。
//  \xdd---dd表示2个十六进制数字，如:\x30 0      将十六进制转换为十进制后以ASCII码表输出。




//int main()
//{
//	printf("abcn\n");
//
//	printf("abc\n");
//
//	return 0;
//}
//
// C++注释风格
//int main()
//{
//	printf("%c\n", '\'');
//
//	return 0;
//}
//
// 
 /* C语言注释风格(不支持嵌套注释)
int main()
{
	printf("%d\n", strlen("c:\test\628\test.c"));  //14

	return 0;
}
*/




//选择语句和循环语句
//
// 
//1.选择语句   if语句
// if()
// {
//	
// }
//else()
//{
//	
//}
//
//
//2.循环语句    while语句     for语句   do...while语句
//while()
//{
//	
//}
// if()
// {
//	
// }
//else()
//{
//	
//}

//int main()
//{
//	printf("加入比特\n");
//
//	int line = 0;
//	//循环体
//	while (line < 20000)
//	{
//		printf("写代码:%d行\n", line);
//		line++;
//	}
//	//分支1
//	if (line >= 20000)
//	{
//		printf("拿到好offer\n");
//	}
//	//分支2
//	else
//	{
//		printf("继续练习\n");
//	}
//
//	return 0;
//}







//函数
//int Add(int x, int y)
//{
//	return (x + y);
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//输入
//	scanf("%d %d", &n1,&n2);
//	//求和
//	int sum = Add(n1, n2);
//	//打印
//	printf("%d\n",sum);
//
//	return 0;
//}




//数组
// 数组每个元素都有一个下标，下标从0开始。
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	//打印整个数组的元素用循环。
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//
//	return 0;
//}