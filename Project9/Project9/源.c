#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int cmp_int(const void* e1, const void* e2)//比较两个整型元素
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i;
//	for (i = 0;i < width;i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1,const void* e2))
//{
//	int i, j;
//	for (i = 0;i < sz;i++)
//	{
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i;
//	for (i = 0;i < sz;i++)
//		printf("%d ", arr[i]);
//}

//qsort(void* base,size_t num,size_t width,int (*cmp)(const void* e1,const void* e2))
//第一个参数：待排序数组的首元素地址
//第二个参数：待排序数组的元素个数
//第三个参数：待排序数组的每个元素的大小，单位是字节
//第四个参数：是函数指针，比较两个元素所用函数的地址，需使用者自己实现
//			  函数指针的两个参数是：待比较的两个元素的地址

//#include <stdlib.h>
//#include <string.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i, j;
//	for (i = 0;i < sz - 1;i++)//一趟冒泡排序
//	{
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_int(const void* e1, const void* e2)//比较两个整型元素
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i;
//	for (i = 0;i < sz;i++)
//		printf("%d ", arr[i]);
//}
//int cmp_flost(const void* e1, const void* e2)
//{
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_flost);
//	int i;
//	for (i = 0;i < sz;i++)
//		printf("%f ", f[i]);
//}
//int cmp_Stu_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_Stu_name(const void* e1, const void* e2)
//{
//	//比较名字就是比较字符串，应当用strcmp函数
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//}
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lise",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_Stu_age);//按age排序
//	int i;
//	for (i = 0;i < sz;i++)
//		printf("%s,%d ", s[i].name, s[i].age);
//	printf("\n");
//	qsort(s, sz, sizeof(s[0]), cmp_Stu_name);//按name排序
//	int j;
//	for (j = 0;j < sz;j++)
//		printf("%s,%d ", s[j].name, s[j].age);
//	printf("\n");
//}
//int main()
//{
//	test3();
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int* arr[10];//指针数组
//	int* (*pa)[10] = &arr;//数组指针
//	int(*pAdd)(int, int) = Add;//函数指针
//	int sum = (*pAdd)(2, 3);//也可以pAdd(2,3)。函数调用
//	printf("%d", sum);
//	int(*pArr[4])(int, int);//函数指针数组
//	int(*(*ppArr)[4])(int, int) = &pArr;//指向函数指针数组的指针
//	return 0;
//}

//编写一个函数，输入n为偶数时，调用函数求1 / 2 + 1 / 4 + ... + 1 / n,
//当输入n为奇数时，调用函数1 / 1 + 1 / 3 + ... + 1 / n(利用指针函数)。
//double Even(int m)
//{
//	int i;
//	double sum = 0;
//	for (i = 2;i <= m;i += 2)
//		sum += (double)1 / i;
//	return sum;
//}
//double Odd(int m)
//{
//	int i;
//	double sum = 0;
//	for (i = 1;i <= m;i += 2)
//		sum += (double)1 / i;
//	return sum;
//}
//int main()
//{
//	int n;
//	double ret;
//	double (*pn)(int);
//	scanf("%d", &n);
//	if (n % 2 == 0)
//		 pn = Even;
//	else
//		 pn = Odd;
//	ret = pn(n);
//	printf("%lf\n", ret);
//	return 0;
//}

//输入一个整数，并将其反转后输出。
//int main()
//{
//	int n, reversed_n = 0, m;
//	scanf("%d", &n);
//	while (n)
//	{
//		m = n % 10;
//		reversed_n = reversed_n * 10 + m;
//		n /= 10;
//	}
//	printf("%d\n", reversed_n);
//	return 0;
//}

//int main()
//{
//	int n, i = 0, ret = 0, j,count = 0;
//	int arr[20] = { 0 };
//	scanf("%d", &n);
//	while (n >= 1)
//	{
//		arr[i] = n % 10;
//		n /= 10;
//		i++;
//		count++;
//	}
//	for (j = 0;j < count;j++)
//		ret = 10 * ret + arr[j];
//	printf("%d\n", ret);
//	return 0;
//}

//写一个函数，求一个字符串的长度，在 main 函数中输入字符串，并输出其长度。
//int my_strlen(const char arr[])
//{
//	int count = 0;
//	while (arr[count])
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[20];
//	printf("请输入一个字符串：");
//	scanf("%s", arr);
//	int len = my_strlen(arr);
//	printf("字符串长度：%d\n", len);
//	return 0;
//}