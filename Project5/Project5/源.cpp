#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//一个5位数，判断它是不是回文数。即12321是回文数，
//个位与万位相同，十位与千位相同。
//int main()
//{
//	int n;
//	printf("请输入一个5位数：");
//	scanf("%d", &n);
//	int w = n / 10000;
//	int q = (n % 10000) / 1000;
//	int s = (n % 100) / 10;
//	if (n % 10 == w && q == s)
//		printf("是回文数。\n");
//	else
//		printf("不是回文数。\n");
//	return 0;
//}

//给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
//int main()
//{
//	int n, count = 0;
//	scanf("%d", &n);
//	while (n >= 1)
//	{
//		int tmp;
//		tmp = n % 10;
//		n /= 10;
//		count++;
//		printf("%d", tmp);
//	}
//	printf("\n");
//	printf("它是%d位数\n", count);
//	return 0;
//}

//有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，
//他说比第3个人大2岁。问第三个人，又说比第2人大两岁。问第2个人，
//说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？
//int age(int m)
//{
//	int sum = 0;
//	if (m == 1)
//		sum += 10;
//	else
//		sum += age(m - 1) + 2;
//	return sum;
//}
//int main()
//{
//	int n = 5;
//	int ret = age(n);
//	printf("%d\n", ret);
//	return 0;
//}

//利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
//#include <string.h>
//void reverse_string(char* arr)
//{
//	char tmp = arr[0];
//	int len = strlen(arr) - 1;
//	arr[0] = arr[len];
//	arr[len] = '\0';
//	if (strlen(arr + 1) > 1)
//		reverse_string(arr + 1);
//	arr[len] = tmp;
//}
//int main()
//{
//	char arr[] = "abcde";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}