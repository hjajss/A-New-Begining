#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int (*pfArr[4])(int, int);
//int (*(*ppfArr)[4])(int, int) = &pfArr;
//ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//ָ�������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int, int)

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
//	printf("������������������");
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//			printf("�˳���\n");
//		else
//			printf("�������\n");
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int input;
//	do
//	{
//		menu();
//		printf("��ѡ��");
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
//			printf("�˳���\n");
//			break;
//		default:
//			printf("�������");
//			break;
//		}
//	} while(input);
//	return 0;
//}

//char* (*pf)(char*, const char*);
//char* (*pArr[4])(char*, const char*);

//��n����Χ��һȦ��˳���źš��ӵ�һ���˿�ʼ��������1��3��������
//������3�����˳�Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ��
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

//�� n��������ʹ��ǰ�����˳������� m ��λ�ã����m���������ǰ��� m ������
//#define n 10
//int main()
//{
//	int arr[n];
//	int i;
//	for (i = 0;i < n;i++)
//		scanf("%d", &arr[i]);
//	int m;
//	printf("������m��ֵ��");
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