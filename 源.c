#define _CRT_SECURE_NO_WARNINGS

//寒假班——函数
//库函数 相关头文件 https://zh.cppreference.com/w/c/header
//慢慢学库函数

//库函数的使用方法
//cplusplus.com https://legacy.cplusplus.com/reference/clibrary/
//举例 sqrt 开方
//double sqrt (double x);

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double r = sqrt(16);
//	printf("%lf\n", r);
//	return 0;
//}

//使用sqrt函数进行开方，其中调用了math.h头文件
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double d = 16.0;
//	double r = sqrt(16);
//	printf("%lf\n", r);
//	return 0;
//}


//自定义函数,根据实际的需要自己设计和实现、使用的函数
//形式如下
//ret_type fun_name()
// {
// 
// }
// 
//返回类型  函数名（形式参数）
//{} 大括号里为函数体

// void 表示什么都不返回

//写一个加法函数，完成2个整型变量的加法操作
//#include <stdio.h>
//
//Add(int x, int y)
//{
//	int z = x + y;
//	return z;//return z 返回z的int值
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	printf("请输入两个整数,中间以空格隔开\n");
//	scanf("%d %d", &a, &b);
//	//使用Add函数
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}

//写一个函数，打印一个呵呵
// void Print()//void 表示不返回任何值,小括号内也可以写void表示不含参数，也可以不写
//{
//	printf("hehe\n");
//}
//
// int main()
// {
//	 print();
//	 return 0;
// }

//实现一个函数求两个数的较大值
//#include <stdio.h>
//
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);//x大于y吗？如果是则为x，如果不是则为y
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

//实参和形参
//调用函数时，传递给函数的参数就是实参
//定义函数时的 后边括号内的参数就是形式参数，简称形参，如本例中的x y
//实参和形参是两个不同的内存空间，形参时实参的临时拷贝文件

//return语句
//判断一个数是奇数还是偶数

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
//	//如果是奇数则返回1，是偶数则返回0
//	int r = is_odd(n);
//	if (r == 1)
//		printf("是奇数");
//	else
//		printf("是偶数");
//	return 0;
//}


//编写一个函数，如果n是正数，则打印1~n的数字
//#include <stdio.h>
//
//void test(int m)
//{
//	if (m <= 0)
//		return;//提前返回
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
////返回值会被系统转化为函数的类型，本例子中为int
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


//数组作为函数参数
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
//		//写一个函数将arr数组的内容全改成-1
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]); //计算数组arr的元素的个数
//  	print_arr(arr, sz);  
//	set_arr(arr, sz);
//	//写一个函数将arr数组的每一个元素打印出来
//	print_arr(arr, sz);
//
//	return 0;
//}

//二维数组
//#include <stdio.h>
//
//void Print(int brr[3][5], int r, int c)
//{
//	int i = 0;
//	//打印二维数组
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

//函数的嵌套调用和链式访问
//函数的嵌套
#include <stdio.h>

//设计函数get_days_of_month()来完成
// 1  2  3  4  5  6  7  8  9  10 11 12
// 31 28 31 30 31 30 31 31 30 31 30 31
//    29 
//判断一年是不是闰年

int is_leap_year(int year)
{
	//判断是否为润年的表达式
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}

//int get_days_of_month(int year, int month)
//{
//	int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	//             0   1   2   3   4  5   6   7   8   9   10  11  12
//	//故意多加一个0，使得数组的下标就是月份
//	int day = days[month];//太巧妙了，笨方法用switch语句编写
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
//	//计算某年某月有多少天
//	int year = 0;
//	int month = 0;
//	printf("请输入年份和月份\n");
//	scanf("%d %d", &year, &month);
//
//	int day = get_days_of_month(year, month);
//	printf("%d\n", day);
//	return 0;
//}


//函数的链式访问 
//链式访问就是将一个函数的返回值作为另一个函数的参数
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
//	//printf的其他功能：printf函数会返回在屏幕上打印的字符的个数
//	printf("%d", printf("%d", printf("%d", 43)));
//	// 43 2 1
//	printf("\n");
//	printf("%d", printf("%d ", printf("%d ", 43)));
//	//43 3 2 %d后面的空格也算一个字符
//	return 0;
//}

//函数的声明和定义
//函数先定义在使用，或者先声明在调用在定义
//（即顺序问题，代码是从前往后扫描的）
//定义是一种特殊的声明
// 声明就是告诉编译器，有一个函数叫什么，参数是什么，返回类型是什么
// int is_leap_year(int y);//着就是函数的声明，记得加分号

//一般在公司里，会分多个文件，不会将全部代码都放在一个.c文件中
// 多个文件中，如何进行函数的声明和定义？
//一般来说  .c 文件 ———— 源文件， 放函数的定义
//         .h 文件 ———— 头文件， 头文件中放函数的声明、类型的声明

//分多个文件实现一个加法函数功能
//add.h 文件里存放函数的声明
//add.c文件中存放函数的定义
//源文件的主程序中，先引用头文件 #include "add.h" ,然后直接使用此ADD函数即可
//利用静态库隐藏add.c文件
//导入静态库   #pragma comment(lib, "add.lib")
//#include <stdio.h>
//#include "add.h"
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数\n");
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);
//	printf("%d\n", c);
//}