#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//关键字typedef，类型重命名。
//typedef unsigned int uint;  //将unsigned int(无符号整型)重命名为uint。
//
//int main()
//{
//	unsigned int num1 = 0;
//	uint num2 = 1;
//	printf("%d\n%d\n", num1, num2);
//
//	return 0;
//}



//关键字static,静态。用于修饰变量和函数。
//1.修饰局部变量。
//2.修饰全局变量。
//3.修饰函数。
//
// 
//void test()  //void不需要返回。
//{
//	//static修饰局部变量，局部变量出作用域不销毁。  本质上static修饰局部变量时，改变了变量的存储位置。  影响了变量的生命周期，生命周期变得和程序一样长。
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	
//	return 0;
//}
//
// 
//extern声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}
//
//
//static修饰函数
//
//extern int Add(int x,int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}



//register寄存器关键字。
//int main()
//{
//	//寄存器变量
//	register int num = 3;  //register建议3存放再寄存器中。
//
//	return 0;
//}



//#define定义常量和宏
//
// 
//#define定义标识符常量。
//#define NUM 100  
//
//
//#define定义宏，宏是有参数的。
//#define ADD(x,y) ((x)+(y))   --> ADD宏名；(x,y)宏的参数，参数是无类型的。；((x)+(y))宏体。
//
// 
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%d\n", num);
//	int n = num;
//	printf("%d\n", n);
//	int arr[num] = { 0 };
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);  -->  替换宏体，int sum = ((a)+(b));
//	printf("%d\n", sum);
//
//	return 0;
//}



//指针
//
//int main()
//{
//	int a = 10;  //向内存申请4byte，存储10。
//	//&a;  //取出a的地址。 & --> 取地址操作符。
//	//printf("%p\n", &a);  // %p打印地址。
//	int* p = &a;  //p为指针变量。int*定义。  存放指针(地址)的变量就是指针变量。  *说明p是指针变量，int说明p指向的对象是int类型。
//	printf("%p\n", p);
//	*p = 20;  //* --> 解引用操作符，通过p中存放的地址，找到p所指向的对象，*p就是p指向对象。
//	printf("%d\n", a);
//
//	char ch = 'w';
//	char* i = &ch; 
//	printf("%p\n", i);
//
//	return 0;
//}



//指针变量大小
//无论什么类型的指针，都是在创建指针变量。
//指针变量是用来存放地址的。
//指针变量的大小取决于一个地方存放的时候需要多大空间。
//32位机器上的地址:32bit - 4byte， 所以指针变量的大小是4byte。
//64位机器上的地址:64bit - 8byte， 所以指针变量的大小是8byte。
//
//
//int main()
//{
//	printf("%zu\n",sizeof(char*));
//
//	return 0;
//}



//结构体 
//结构体是把一些单一类型组合在一起的做法。
//
// 
//学生
//struct Stu
//{
//	//结构体成员
//	char name[20];
//	int age;
//	char gender[10];
//	char phone[12];
//};
//
//void print(struct Stu* ps)
//{
//	printf("%s\t%d\t%s\t%s\n", (*ps).name, (*ps).age, (*ps).gender, (*ps).phone);
//
//	//结构体指针变量 -> 成员名
//	printf("%s\t%d\t%s\t%s\n", ps->name, ps->age, ps->gender, ps->phone);
//}
//
//int main()
//{
//	struct Stu s = {"ZhangSan",20,"Man","1234567890"};
//
//	//结构体对象.成员名
//	printf("%s\t%d\t%s\t%s\n", s.name, s.age, s.gender, s.phone);
//
//	
//	print(&s);
//
//	return 0;
//}



//Work_1
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	//输入
//	scanf("%d %d", &a, &b);
//	//计算
//	int x = a / b;
//	int y = a % b;
//	//输出
//	printf("%d %d\n", x, y);
//
//	return 0;
//}