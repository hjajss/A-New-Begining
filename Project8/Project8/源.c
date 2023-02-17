#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int (*pfArr[4])(int, int);
//int (*(*ppfArr)[4])(int, int) = &pfArr;
//ppfArr是一个数组指针，指针指向的数组有4个元素
//指向的数组每个元素的类型是一个函数指针 int(*)(int, int)

//void menu()
//{
//	printf("**********************\n");
//	printf("**  1.add    2.sub  **\n");
//	printf("**  3.mul    4.div  **\n");
//	printf("**      0. exit     **\n");
//	printf("**********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}int Mul(int x, int y)
//{
//	return x * y;
//}int Div(int x, int y)
//{
//	return x / y;
//}
//Calc(int (*pf)(int, int))
//{
//	int x, y;
//	printf("请输入两个操作数：");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input, x, y;
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//			printf("退出！\n");
//		else
//			printf("输入错误！\n");
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int input;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出！\n");
//			break;
//		default:
//			printf("输入错误！");
//			break;
//		}
//	} while(input);
//	return 0;
//}

//char* (*pf)(char*, const char*);
//char* (*pArr[4])(char*, const char*);

//有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），
//凡报到3的人退出圈子，问最后留下的是原来第几号的那位。
//int main()
//{
//	int num[100] = { 0 }, n, i, j = 0, k = 0;
//	int* p = num;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)
//		num[i] = i + 1;
//	i = 0;
//	while (j < n - 1)
//	{
//		if (*(p + i))
//			k++;
//		if (k == 3)
//		{
//			k = 0;
//			*(p + i) = 0;
//			j++;
//		}
//		i++;
//		if (i == n)
//			i = 0;
//	}
//	for (i = 0;i < n;i++)
//	{
//		if (num[i])
//		{
//			printf("%d",num[i]);
//			break;
//		}
//	}
//	return 0;
//}

//有 n个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数。
//#define n 10
//int main()
//{
//	int arr[n];
//	int i;
//	for (i = 0;i < n;i++)
//		scanf("%d", &arr[i]);
//	int m;
//	printf("请输入m的值：");
//	scanf("%d", &m);
//	int* p,* end;
//	end = arr + n - 1;
//	while (m)
//	{
//		int last = *end;
//		for (p = end;p > arr;p--)
//			*p = *(p - 1);
//		*p = last;
//		m--;
//	}
//	for (i = 0;i < n;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}