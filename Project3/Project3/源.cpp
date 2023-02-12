#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//求1 + 2!+ 3!+ ... + 20!的和。
int main()
{
	int i;
	long long n = 1, sum = 0;
	for (i = 1;i <= 20;i++)
	{
		n *= i;
		sum += n;
	}
	printf("sum = %lld\n", sum);
	return 0;
}

//有一分数序列：2 / 1，3 / 2，5 / 3，8 / 5，13 / 8，21 / 13...求出这个数列的前20项之和。
//int main()
//{
//	double a = 2, b = 1;
//	double sum = 0;
//	int i;
//	for (i = 1;i <= 20;i++)
//	{
//		sum += a / b;
//		double tmp = a; 
//		a = a + b;
//		b = tmp;
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}

//打印出如下图案（菱形）。
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *
//int main()
//{
//	char arr[] = "       ";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i, j;
//	for (i = 3;i >= 0;i--)
//	{
//		arr[i] = '*';
//		if (i != 3)
//			arr[sz - i - 2] = '*';
//		printf("%s\n", arr);
//	}
//	for (j = 0;j < 3;j++)
//	{
//		arr[j] = ' ';
//		arr[sz - j - 2] = ' ';
//		printf("%s\n", arr);
//	}
//	return 0;
//}

//两个乒乓球队进行比赛，各出三人。甲队为a, b, c三人，乙队为x, y, z三人。已抽签决定比赛名单。
//有人向队员打听比赛的名单。a说他不和x比，c说他不和x, z比，请编程序找出三队赛手的名单。
//int main()
//{
//	char a, b, c;
//	for (a = 'x';a <= 'z';a++)
//	{
//		if (a != 'x')
//		{
//			for (b = 'x';b <= 'z';b++)
//			{
//				for (c = 'x';c <= 'z';c++)
//				{
//					if (c != 'x' && c != 'z')
//					{
//						if (a != b && b != c && a != c)
//						{
//							printf("a->%c\n", a);
//							printf("b->%c\n", b);
//							printf("c->%c\n", c);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个
//第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下
//的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。
//int main()
//{
//	int i;
//	int p = 1;
//	for (i = 9;i > 0;i--)
//	{
//		p = (p + 1) * 2;
//	}
//	printf("第一天共摘了%d个桃子\n", p);
//	return 0;
//}

//一球从100米高度自由落下，每次落地后反跳回原高度的一半；
//再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
//int main()
//{
//	double h = 100.0, sum = 0.0;
//	int i;
//	for (i = 1;i <= 10;i++)
//	{
//		double tmp = h;
//		h /= 2;
//		sum += tmp + h;
//	}
//	printf("共经过%lf米\n", sum);
//	printf("第10次反弹%lf米\n", h);
//	return 0;
//}
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str != NULL);//保证指针的有效性
//	int count = 0;
//	while (*str++)//计算'\0'之前的字符个数
//		count++;
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//#include <string.h>
//void my_strcpy(char* dest, char* src)
//{
//	do
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	} while (src = '\0');
//}
//void my_strcpy(char* dest, char* src)//优化
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
//#include <assert.h>
//char* my_strcpy(char* dest,const char* src)//再优化
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);
//	while (*dest++ = *src++)//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "##################";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}