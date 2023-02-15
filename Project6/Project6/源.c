#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//对10个数进行排序。
int main()
{
	int i, j;
	int arr[10];
	for (i = 0;i < 10;i++)
		scanf("%d", &arr[i]);
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0;i < sz;i++)
	{
		for (j = 0;j < sz - i - 1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0;i < 10;i++)
		printf("%d ", arr[i]);
	return 0;
}

//找出数组中重复的数字。在一个长度为 n 的数组 nums 里的所有数字都在 0～n - 1 的范围内。
//数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。
//请找出数组中任意一个重复的数字。
//int main()
//{
//	int nums[] = { 1,2,3,4,5,5,6,7 };
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	int i, j;
//	for (i = 0;i < sz;i++)
//	{
//		for (j = i + 1;j < sz;j++)
//		{
//			if (nums[i] == nums[j])
//				break;
//		}
//		if (nums[i] == nums[j])
//			break;
//	}
//	printf("%d\n", nums[i]);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i, j;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 5;j++)
//			printf("%d ", *(parr[i] + j));
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 == arr2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	if (p1 == p2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pa = arr;
//	printf("%s\n", arr);
//	return 0;
//}

//求100之内的素数。
//#include <math.h>
//int main()
//{
//	int i, j;
//	printf("2 ");
//	for (i = 3;i < 100;i += 2)
//	{
//		for (j = 2;j <= sqrt(i);j++)
//		{
//			if (i % j == 0)
//			break;
//		}
//		if (j > sqrt(i))
//			printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}

//字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
//#include <string.h>
//void reverse(char arr[])
//{
//	int len = strlen(arr);
//	char tmp = arr[0];
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if(strlen(arr)>1)
//		reverse(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "www.runoob.com";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//判断一个数字是否为质数。
//int main()
//{
//	int n;
//	printf("请输入一个数：");
//	scanf("%d", &n);
//	int i;
//	for (i = 2;i < n;i++)
//	{
//		if (n % i == 0)
//			break;
//	}
//	if (i == n)
//		printf("是质数！\n");
//	else if (n == 2)
//		printf("是质数！\n");
//	else
//		printf("不是质数！\n");
//
//	return 0;
//}

//删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。
//int main()
//{
//	char arr[5];
//	printf("请输入字符串：");
//	scanf("%s", arr);
//	getchar();
//	char n;
//	printf("请输入要删除的字母：");
//	scanf("%c", &n);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i, tmp = 0;
//	for (i = 0;i < sz;i++)
//	{
//		if (arr[i] != n)
//			arr[tmp++] = arr[i];
//	}
//	arr[tmp] = '\0';
//	printf("%s\n", arr);
//	return 0;
//}

//请输入星期几的第一个字母来判断一下是星期几，
//如果第一个字母一样，则继续判断第二个字母。
//int main()
//{
//	char n, m;
//	printf("请输入第一个子母：");
//	scanf("%c", &n);
//	getchar();
//	switch (n)
//	{
//	case 'M':
//		printf("星期一\n");
//		break;
//	case 'F':
//		printf("星期五\n");
//		break;
//	case 'W':
//		printf("星期三\n");
//		break;
//	case 'T':
//		printf("请输入第二个子母：");
//		scanf("%c", &m);
//		switch (m)
//		{
//		case 'h':
//			printf("星期四\n");
//			break;
//		case 'u':
//			printf("星期二\n");
//			break;
//		default:
//			break;
//		}
//		break;
//	case 'S':
//		printf("请输入第二个子母：");
//		scanf("%c", &m);
//		switch (m)
//		{
//		case 'a':
//			printf("星期六\n");
//			break;
//		case 'u':
//			printf("星期天\n");
//			break;
//		default:
//			break;
//		}
//		break;
//	default:
//		break;
//	}
//	return 0;
//}