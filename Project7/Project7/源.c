#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//�������飬�������һ��Ԫ�ؽ�������С�������һ��Ԫ�ؽ�����������顣
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
//signal��һ�������������ú��������������������ͣ���һ���������������ͣ��ڶ�������������
// һ������ָ�룬�ú���ָ��ĺ������������ͣ�����������void��signal�����ķ���������һ����
// ��ָ�룬�ú���ָ��ĺ������������ͣ�����������void��
//typedef void(*pfun_t)(int);//��void(*)(int)����������Ϊpfun_t
//pfun_t(signal(int, pfun_t));
//void (*arr[5])(int);//����ָ������

//����3����a, b, c������С˳�������
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

//��һ���������������
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

//��һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�
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

//��һ��3 * 3����Խ���Ԫ��֮��
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