#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��׼������
//int main()
//{
//	return 0;
//}

//��������
//int main()
//{
//	printf("%zu\n", sizeof(char));      //�ַ��������� 1byte = 8bit
//	printf("%zu\n", sizeof(int));       //����         4byte = 32bit
//	printf("%zu\n", sizeof(short));     //������       2byte = 16bit
//	printf("%zu\n", sizeof(long));      //������       4byte = 32bit
//	printf("%zu\n", sizeof(long long)); //����������   8byte = 64bit
//	printf("%zu\n", sizeof(float));     //�����ȸ����� 4byte = 32bit
//	printf("%zu\n", sizeof(double));    //˫���ȸ����� 8byte = 64bit
//	return 0;
//}

//�����ͳ���
//ȫ�ֱ���:{}�ⲿ�������
//�ֲ�����:{}�ڲ��������
//ȫ�ֱ����;ֲ��������ֳ�ͻʱ���ֲ����ȡ�
//scanf���뺯��
//printf�������
//int main()
//{
//	int num1 = 0;
//	int num2 = 0; //��������ʱ���г�ʼ��
//	
//	//������������
//	scanf("%d %d", &num1, &num2);//����ʹ��scanf_s������Դ�ļ���һ�з�#define _CRT_SECURE_NO_WARNINGS
//	//���
//	int sum = num1 + num2;
//	//���
//	printf("%d\n", sum);
//
//	return 0;
//}


//������������
//1.�ֲ�����
// ������Ϊ�ֲ��������ڷ�Χ��
// 
//2.ȫ�ֱ���
//������Ϊ�������̡�
// 
// 
// ���������ⲿ�ķ���:extern
// 
// 
//��������������
//1.�ֲ�����
//����������Χ�������ڿ�ʼ����������Χ�������ڽ�����
// 
//2.ȫ�ֱ���
//����������������ڡ�
//