#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�ؼ���typedef��������������
//typedef unsigned int uint;  //��unsigned int(�޷�������)������Ϊuint��
//
//int main()
//{
//	unsigned int num1 = 0;
//	uint num2 = 1;
//	printf("%d\n%d\n", num1, num2);
//
//	return 0;
//}



//�ؼ���static,��̬���������α����ͺ�����
//1.���ξֲ�������
//2.����ȫ�ֱ�����
//3.���κ�����
//
// 
//void test()  //void����Ҫ���ء�
//{
//	//static���ξֲ��������ֲ����������������١�  ������static���ξֲ�����ʱ���ı��˱����Ĵ洢λ�á�  Ӱ���˱������������ڣ��������ڱ�úͳ���һ������
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
//extern�����ⲿ����
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
//static���κ���
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



//register�Ĵ����ؼ��֡�
//int main()
//{
//	//�Ĵ�������
//	register int num = 3;  //register����3����ټĴ����С�
//
//	return 0;
//}



//#define���峣���ͺ�
//
// 
//#define�����ʶ��������
//#define NUM 100  
//
//
//#define����꣬�����в����ġ�
//#define ADD(x,y) ((x)+(y))   --> ADD������(x,y)��Ĳ����������������͵ġ���((x)+(y))���塣
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
//	int sum = ADD(a, b);  -->  �滻���壬int sum = ((a)+(b));
//	printf("%d\n", sum);
//
//	return 0;
//}



//ָ��
//
//int main()
//{
//	int a = 10;  //���ڴ�����4byte���洢10��
//	//&a;  //ȡ��a�ĵ�ַ�� & --> ȡ��ַ��������
//	//printf("%p\n", &a);  // %p��ӡ��ַ��
//	int* p = &a;  //pΪָ�������int*���塣  ���ָ��(��ַ)�ı�������ָ�������  *˵��p��ָ�������int˵��pָ��Ķ�����int���͡�
//	printf("%p\n", p);
//	*p = 20;  //* --> �����ò�������ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����pָ�����
//	printf("%d\n", a);
//
//	char ch = 'w';
//	char* i = &ch; 
//	printf("%p\n", i);
//
//	return 0;
//}



//ָ�������С
//����ʲô���͵�ָ�룬�����ڴ���ָ�������
//ָ�������������ŵ�ַ�ġ�
//ָ������Ĵ�Сȡ����һ���ط���ŵ�ʱ����Ҫ���ռ䡣
//32λ�����ϵĵ�ַ:32bit - 4byte�� ����ָ������Ĵ�С��4byte��
//64λ�����ϵĵ�ַ:64bit - 8byte�� ����ָ������Ĵ�С��8byte��
//
//
//int main()
//{
//	printf("%zu\n",sizeof(char*));
//
//	return 0;
//}



//�ṹ�� 
//�ṹ���ǰ�һЩ��һ���������һ���������
//
// 
//ѧ��
//struct Stu
//{
//	//�ṹ���Ա
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
//	//�ṹ��ָ����� -> ��Ա��
//	printf("%s\t%d\t%s\t%s\n", ps->name, ps->age, ps->gender, ps->phone);
//}
//
//int main()
//{
//	struct Stu s = {"ZhangSan",20,"Man","1234567890"};
//
//	//�ṹ�����.��Ա��
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
//	//����
//	scanf("%d %d", &a, &b);
//	//����
//	int x = a / b;
//	int y = a % b;
//	//���
//	printf("%d %d\n", x, y);
//
//	return 0;
//}