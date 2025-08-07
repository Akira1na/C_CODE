#define _CRT_SECURE_NO_WARNINGS

//全局变量，具有外部链接属性。
//static修饰全局变量时，全局变量外部链接属性变为内部链接属性。其他源文件(.c)不能再使用此全局变量。
//
//static int g_val = 2025;



//函数，具有外部链接属性。
//static修饰函数时，函数外部链接属性就变成了内部链接属性其他源文件(.c)无法使用此函数。
//static int Add(int x, int y)
//{
//	return x + y;
//}