#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int cmp_int(const void* e1, const void* e2)//�Ƚ���������Ԫ��
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
//��һ���������������������Ԫ�ص�ַ
//�ڶ��������������������Ԫ�ظ���
//�����������������������ÿ��Ԫ�صĴ�С����λ���ֽ�
//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�����ú����ĵ�ַ����ʹ�����Լ�ʵ��
//			  ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ

//#include <stdlib.h>
//#include <string.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i, j;
//	for (i = 0;i < sz - 1;i++)//һ��ð������
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
//int cmp_int(const void* e1, const void* e2)//�Ƚ���������Ԫ��
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
//	//�Ƚ����־��ǱȽ��ַ�����Ӧ����strcmp����
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//}
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lise",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_Stu_age);//��age����
//	int i;
//	for (i = 0;i < sz;i++)
//		printf("%s,%d ", s[i].name, s[i].age);
//	printf("\n");
//	qsort(s, sz, sizeof(s[0]), cmp_Stu_name);//��name����
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
//	int* arr[10];//ָ������
//	int* (*pa)[10] = &arr;//����ָ��
//	int(*pAdd)(int, int) = Add;//����ָ��
//	int sum = (*pAdd)(2, 3);//Ҳ����pAdd(2,3)����������
//	printf("%d", sum);
//	int(*pArr[4])(int, int);//����ָ������
//	int(*(*ppArr)[4])(int, int) = &pArr;//ָ����ָ�������ָ��
//	return 0;
//}

//��дһ������������nΪż��ʱ�����ú�����1 / 2 + 1 / 4 + ... + 1 / n,
//������nΪ����ʱ�����ú���1 / 1 + 1 / 3 + ... + 1 / n(����ָ�뺯��)��
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

//����һ�������������䷴ת�������
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

//дһ����������һ���ַ����ĳ��ȣ��� main �����������ַ�����������䳤�ȡ�
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
//	printf("������һ���ַ�����");
//	scanf("%s", arr);
//	int len = my_strlen(arr);
//	printf("�ַ������ȣ�%d\n", len);
//	return 0;
//}