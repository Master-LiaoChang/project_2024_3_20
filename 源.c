#define _CRT_SECURE_NO_WARNINGS

//���ٰࡪ������
//�⺯�� ���ͷ�ļ� https://zh.cppreference.com/w/c/header
//����ѧ�⺯��

//�⺯����ʹ�÷���
//cplusplus.com https://legacy.cplusplus.com/reference/clibrary/
//���� sqrt ����
//double sqrt (double x);

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double r = sqrt(16);
//	printf("%lf\n", r);
//	return 0;
//}

//ʹ��sqrt�������п��������е�����math.hͷ�ļ�
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double d = 16.0;
//	double r = sqrt(16);
//	printf("%lf\n", r);
//	return 0;
//}


//�Զ��庯��,����ʵ�ʵ���Ҫ�Լ���ƺ�ʵ�֡�ʹ�õĺ���
//��ʽ����
//ret_type fun_name()
// {
// 
// }
// 
//��������  ����������ʽ������
//{} ��������Ϊ������

// void ��ʾʲô��������

//дһ���ӷ����������2�����ͱ����ļӷ�����
//#include <stdio.h>
//
//Add(int x, int y)
//{
//	int z = x + y;
//	return z;//return z ����z��intֵ
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//����
//	printf("��������������,�м��Կո����\n");
//	scanf("%d %d", &a, &b);
//	//ʹ��Add����
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}

//дһ����������ӡһ���Ǻ�
// void Print()//void ��ʾ�������κ�ֵ,С������Ҳ����дvoid��ʾ����������Ҳ���Բ�д
//{
//	printf("hehe\n");
//}
//
// int main()
// {
//	 print();
//	 return 0;
// }

//ʵ��һ���������������Ľϴ�ֵ
//#include <stdio.h>
//
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);//x����y���������Ϊx�����������Ϊy
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int m = get_max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

//ʵ�κ��β�
//���ú���ʱ�����ݸ������Ĳ�������ʵ��
//���庯��ʱ�� ��������ڵĲ���������ʽ����������βΣ��籾���е�x y
//ʵ�κ��β���������ͬ���ڴ�ռ䣬�β�ʱʵ�ε���ʱ�����ļ�

//return���
//�ж�һ��������������ż��

//#include <stdio.h>
//is_odd(int m)
//{
//	return (m % 2 == 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//����������򷵻�1����ż���򷵻�0
//	int r = is_odd(n);
//	if (r == 1)
//		printf("������");
//	else
//		printf("��ż��");
//	return 0;
//}


//��дһ�����������n�����������ӡ1~n������
//#include <stdio.h>
//
//void test(int m)
//{
//	if (m <= 0)
//		return;//��ǰ����
//	int i = 0;
//	for (i = 1; i <= m; i++)
//	{
//		printf("%d ", i);
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	test(n);
//	return 0;
//}

//#include <stdio.h>
//
////����ֵ�ᱻϵͳת��Ϊ���������ͣ���������Ϊint
//int test()
//{
//	if (1)
//		return 3.5;
//	else
//		return 5.5;
//}
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}


//������Ϊ��������
//#include <stdio.h>
//
//void set_arr(int arr1[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr1[i] = -1;
//
//	}
//}
//
//void print_arr(int arr2[10], int sz)
//{	
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{	
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//		//дһ��������arr���������ȫ�ĳ�-1
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]); //��������arr��Ԫ�صĸ���
//  	print_arr(arr, sz);  
//	set_arr(arr, sz);
//	//дһ��������arr�����ÿһ��Ԫ�ش�ӡ����
//	print_arr(arr, sz);
//
//	return 0;
//}

//��ά����
//#include <stdio.h>
//
//void Print(int brr[3][5], int r, int c)
//{
//	int i = 0;
//	//��ӡ��ά����
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", brr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//
//int main()
//{	
//	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7}};
//	Print(arr, 3, 5);
//	return 0;
//}

//������Ƕ�׵��ú���ʽ����
//������Ƕ��
#include <stdio.h>

//��ƺ���get_days_of_month()�����
// 1  2  3  4  5  6  7  8  9  10 11 12
// 31 28 31 30 31 30 31 31 30 31 30 31
//    29 
//�ж�һ���ǲ�������

int is_leap_year(int year)
{
	//�ж��Ƿ�Ϊ����ı��ʽ
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}

//int get_days_of_month(int year, int month)
//{
//	int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	//             0   1   2   3   4  5   6   7   8   9   10  11  12
//	//������һ��0��ʹ��������±�����·�
//	int day = days[month];//̫�����ˣ���������switch����д
//	int y = is_leap_year(year);
//	if (y == 1 && month == 2)
//	{
//		day += 1;
//	}
//	return day;
//}

//int get_days_of_month(int year, int month)
//{
//	int day = 0;
//	switch (month)
//	{
//	case 2:
//		day = 28;
//		break;
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		day = 31;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		day = 30;
//	}
//	int y = is_leap_year(year);
//	if (y == 1 && month == 2)
//	{
//		day += 1;
//	}
//	return day;
//}
//
//int main()
//{	
//	//����ĳ��ĳ���ж�����
//	int year = 0;
//	int month = 0;
//	printf("��������ݺ��·�\n");
//	scanf("%d %d", &year, &month);
//
//	int day = get_days_of_month(year, month);
//	printf("%d\n", day);
//	return 0;
//}


//��������ʽ���� 
//��ʽ���ʾ��ǽ�һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//#include <stdio.h>
//#include <string.h>
////int main()
////{
////	size_t len = strlen("abcdef");
////	printf("%zd\n", len);
////	return 0;
////}
//int main()
//{
//	printf("%zd\n", strlen("abcdef"));
//	//printf���������ܣ�printf�����᷵������Ļ�ϴ�ӡ���ַ��ĸ���
//	printf("%d", printf("%d", printf("%d", 43)));
//	// 43 2 1
//	printf("\n");
//	printf("%d", printf("%d ", printf("%d ", 43)));
//	//43 3 2 %d����Ŀո�Ҳ��һ���ַ�
//	return 0;
//}

//�����������Ͷ���
//�����ȶ�����ʹ�ã������������ڵ����ڶ���
//����˳�����⣬�����Ǵ�ǰ����ɨ��ģ�
//������һ�����������
// �������Ǹ��߱���������һ��������ʲô��������ʲô������������ʲô
// int is_leap_year(int y);//�ž��Ǻ������������ǵüӷֺ�

//һ���ڹ�˾���ֶ���ļ������Ὣȫ�����붼����һ��.c�ļ���
// ����ļ��У���ν��к����������Ͷ��壿
//һ����˵  .c �ļ� �������� Դ�ļ��� �ź����Ķ���
//         .h �ļ� �������� ͷ�ļ��� ͷ�ļ��зź��������������͵�����

//�ֶ���ļ�ʵ��һ���ӷ���������
//add.h �ļ����ź���������
//add.c�ļ��д�ź����Ķ���
//Դ�ļ����������У�������ͷ�ļ� #include "add.h" ,Ȼ��ֱ��ʹ�ô�ADD��������
//���þ�̬������add.c�ļ�
//���뾲̬��   #pragma comment(lib, "add.lib")
//#include <stdio.h>
//#include "add.h"
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("��������������\n");
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);
//	printf("%d\n", c);
//}