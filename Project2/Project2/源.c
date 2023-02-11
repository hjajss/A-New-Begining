#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//一个数如果恰好等于它的因子之和，这个数就称为"完数"。
//例如6 = 1＋2＋3.编程找出1000以内的所有完数。
int main()
{
	int i;
	for (i = 2;i <= 1000;i++)
	{
		int j, n = 0;
		for (j = 1;j < i;j++)
		{
			if (i % j == 0)
				n += j;
		}
		if (n == i)
			printf("%d ", i);
	}
	return 0;
}

//求s = a + aa + aaa + aaaa + aa...a的值，其中a是一个数字。
//例如2 + 22 + 222 + 2222 + 22222(此时共有5个数相加)，几个数相加有键盘控制。
//int main()
//{
//	int n, a, s = 0, i;
//	int tmp = 0;
//	scanf("%d%d", &a, &n);
//	tmp = a;
//	for (i = 1;i <= n;i++)
//	{
//		s += tmp;
//		a = a * 10;
//		tmp += a;
//	}
//	printf("%d\n", s);
//	return 0;
//}

//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
//int main()
//{
//	char c;
//	int letter = 0, space = 0, figure = 0, other = 0;
//	while ((c = getchar()) != '\n')
//	{
//		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//			letter++;
//		else if (c == ' ')
//			space++;
//		else if (c >= '0' && c <= '9')
//			figure++;
//		else
//			other++;
//	}
//	printf("英文字母个数 = %d\n", letter);
//	printf("空格个数 = %d\n", space);
//	printf("数字个数 = %d\n", figure);
//	printf("其它字符个数 = %d\n", other);
//	return 0;
//}

//输入两个正整数m和n，求其最大公约数和最小公倍数。
//int main()
//{
//	int m, n, i, j;
//	scanf("%d%d", &m, &n);
//	for (i =(m > n ? n : m);i > 0;i--)
//	{
//		if (m % i == 0 && n % i == 0)
//			break;
//	}
//	printf("最大公约数：%d\n", i);
//	for (j = (m > n ? m : n);j <= m * n;j++)
//	{
//		if (j % m == 0 && j % n == 0)
//			break;
//	}
//	printf("最小公倍数：%d\n", j);														
//	return 0;
//}

//利用条件运算符的嵌套来完成此题：学习成绩 >= 90分的同学用A表示，
//60 - 89分之间的用B表示，60分以下的用C表示。
//int main()
//{
//	int score;
//	char grade;
//	scanf("%d", &score);
//	grade = (90 > (60 >= score ? 'C' : score) ? 'B' : 'A');
//	printf("grade = %c\n", grade);
//	return 0;
//}

//将一个正整数分解质因数。例如：输入90, 打印出90 = 2 * 3 * 3 * 5。
//int main()
//{
//	int n, i = 2;
//	scanf("%d", &n);
//	int tmp = n;
//	printf("%d = ", n);
//	while (i <= n)
//	{
//		if (n % i == 0 && n / i != 1)
//		{
//			printf("%d * ", i);
//			n /= i;
//			continue;
//		}
//		if (n == i)
//		{
//			printf("%d\n", i);
//			break;
//		}
//		i++;
//	}
//	return 0;
//}

//打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。
//例如：153是一个"水仙花数"，因为153 = 1的三次方＋5的三次方＋3的三次方。
//int main()
//{
//	int i;
//	for (i = 100;i <= 999;i++)
//	{
//		int a, b, c;
//		a = i % 10;
//		b = (i / 10) % 10;
//		c = i / 100;
//		if (a * a * a + b * b * b + c * c * c == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//判断 101 到 200 之间的素数。
//int main()
//{
//	int i;
//	for (i = 101;i < 201;i += 2)
//	{
//		int j;
//		for (j = 3;j <= sqrt(i);j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d ", i);
//	}
//	return 0;
//}