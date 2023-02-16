#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
//#define N 10
//void exchange(int* pa1, int* pa2)
//{
//	int tmp = *pa1;
//	*pa1 = *pa2;
//	*pa2 = tmp;
//}
//int main()
//{
//	int arr[N];
//	int i;
//	for (i = 0;i < N;i++)
//		scanf("%d", &arr[i]);
//	for (i = 0;i < N;i++)
//	{
//		if (arr[0] < arr[i])
//			exchange(&arr[0], &arr[i]);
//		if (arr[N - 1] > arr[i])
//			exchange(&arr[N - 1], &arr[i]);
//	}
//	for (i = 0;i < N;i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//void(*signal(int, void(*)(int)))(int)
//signal是一个函数声明。该函数声明有两个函数类型，第一个函数类型是整型，第二个函数类型是
// 一个函数指针，该函数指针的函数类型是整型，返回类型是void。signal函数的返回类型是一个函
// 数指针，该函数指针的函数类型是整型，返回类型是void。
//typedef void(*pfun_t)(int);//将void(*)(int)类型重命名为pfun_t
//pfun_t(signal(int, pfun_t));
//void (*arr[5])(int);//函数指针数组

//输入3个数a, b, c，按大小顺序输出。
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	while (a < b || a < c)
//	{
//		if (b < c)
//		{
//			int tmp = b;
//			b = c;
//			c = tmp;
//		}
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	while (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//将一个数组逆序输出。
//int main()
//{
//	int arr[10];
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//		scanf("%d", &arr[i]);
//	for (i = 0;i < sz / 2;i++)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[sz - i - 1];
//		arr[sz - i - 1] = tmp;
//	}
//	for (i = 0;i < sz;i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
//int main()
//{
//	int arr[11] = { 0,2,3,4,5,6,7,8,9,10 };
//	int n;
//	scanf("%d", &n);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = sz - 1;i > 0;i--)
//	{
//		if (n >= arr[i - 1] && n < arr[i])
//		{
//			arr[i] = n;
//			break;
//		}
//		else
//			arr[i] = arr[i - 1];
//	}
//	if (n < arr[0])
//	{
//		arr[1] = arr[0];
//		arr[0] = n;
//	}
//	for (i = 0;i < sz;i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//求一个3 * 3矩阵对角线元素之和
//#define N 3
//int main()
//{
//	int arr[N][N];
//	int i, j;
//	int sum1 = 0, sum2 = 0;
//	for (i = 0;i < N;i++)
//	{
//		for (j = 0;j < N;j++)
//			scanf("%d", &arr[i][j]);
//	}
//	for (i = 0;i < N;i++)
//	{
//		sum1 += arr[i][i];
//		sum2 += arr[i][2 - i];
//	}
//	printf("sum1 = %d\n", sum1);
//	printf("sum2 = %d\n", sum2);
//	return 0;
//}