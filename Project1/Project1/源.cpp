#define _CRT_SECURE_NO_WARNINGS
//#include <time.h>
//#include <windows.h>
//#include <math.h>
//#include <string.h>
//#include <stdlib.h>
#include <stdio.h>


//void reverse_string(char* string)
//{
//
//}
//int main()
//{
//	char arr[10] = "0";
//	scanf("%s", arr);
//	int sz
//	reverse_string(arr);
//	return 0;
//}

//void print(int m)
//{
//	if (m > 0)
//	{
//		print(m / 10);
//		printf("%d ", m % 10);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//void print(int* p, int sz)
//{
//	int i;
//	for (i = 0;i < sz;i++)
//		printf("%d ", *(p + i));
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//int Find_number(int m)
//{
//	int count = 0;
//	while (m)
//	{
//		m = m & (m - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int num = Find_number(n);
//	printf("num = %d\n", num);
//	return 0;
//}

//int main()
//{
//	int n, i, j, odd = 0, even = 0;
//	scanf("%d", &n);
//	for (i = 0;i < 32;i += 2)
//	{
//		int a = 1 << i;
//		int b = n & a;
//		b = b >> (i/2);
//		odd = odd | b;
//	}
//	printf("odd = %d\n", odd);
//	for (j = 0;j < 32;j += 2)
//	{
//		int c = 2 << j;
//		int d = n & c;
//		d = d >> (j/2 + 1);
//		even = even | d;
//	}
//	printf("even = %d\n", even);
//	return 0;
//}

//int main()
//{
//	int m, n, count = 0;
//	scanf("%d%d", &m, &n);
//	int a = m ^ n;
//	while(a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//void print(int arr[], int sz)
//{
//	int j;
//	for (j = 0;j < sz;j++)
//		printf("%d ", arr[j]);
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,5,4,3,2,1 };
//	int arr2[10] = { 6,7,8,9,10,10,9,8,7,6 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i;
//	for (i = 0;i < sz;i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	print(arr1, sz);
//	print(arr2, sz);
//	return 0;
//}

//void init(int arr[],int sz)
//{
//	int i;
//	for (i = 0;i < sz;i++)
//		arr[i] = 0;
//}
//void print(int arr[], int sz)
//{
//	int j;
//	for (j = 0;j < sz;j++)
//		printf("%d ", arr[j]);
//}
//void reverse(int arr[], int sz)
//{
//	int k = 0;
//	while(k < sz - k - 1)
//	{
//		int tmp = arr[k];
//		arr[k] = arr[sz - k - 1];
//		arr[sz - k - 1] = tmp;
//		k++;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr,sz);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//ð������
//int main()
//{
//	int arr[10] = { 5,4,3,2,1,6,7,8,9,10 };
//	int i, j;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz - 1;i++)
//	{
//		int flag = 1;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag)
//			break;
//	}
//	for (i = 0;i < 10;i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int a = 10, b = 20, c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i;
//	for (i = 0;i < 3;i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//�ŵ����⣨�������̣�����һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ� С���ӳ�������
//���º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣������ǰ40���¼��ɣ�
//int main()
//{
//	int m, r1 = 1, r2 = 1;
//	for (m = 1;m <= 20;m++)
//	{
//		printf("%-10d%-10d\n", r1, r2);
//		r1 = r1 + r2;
//		r2 = r1 + r2;
//	}
//	return 0;
//}
 
//int Sum(int m)
//{
//	if (m < 3)
//		return 2;
//	else
//		return Sum(m - 1) + Sum(m - 2);
//}
//int main()
//{
//	int m, num;
//	for (m = 1;m <= 40;m++)
//	{
//		num = Sum(m);
//		printf("%d\n", num);
//	}
//	return 0;
//}

//���9 * 9�ھ���
//int main()
//{
//	int i, j;
//	for (i = 1;i < 10;i++)
//	{
//		for (j = 1;j <= i;j++)
//			printf("%d*%d=%-3d", i, j, i * j);
//		printf("\n");
//	}
//	return 0;
//}

//�������ͼ��������c���������У���һ����Very Beautiful!
//int main()
//{
//	char a = 176, b = 219;
//	printf("%c%c%c%c%c\n", b, a, a, a, b);
//	printf("%c%c%c%c%c\n", a, b, a, b, a);
//	printf("%c%c%c%c%c\n", a, a, b, a, a);
//	printf("%c%c%c%c%c\n", a, b, a, b, a);
//	printf("%c%c%c%c%c\n", b, a, a, a, b);
//	return 0;
//}

//��* �������ĸC��ͼ����
//int main()
//{
//	printf("   %c%c%c\n", '*', '*','*');
//	printf(" %c\n", '*');
//	printf("%c\n%c\n%c\n", '*', '*','*');
//	printf(" %c\n", '*');
//	printf("   %c%c%c\n", '*', '*','*');
//	return 0;
//}

//������������x, y, z���������������С���������
//void Max(int* a, int* b)
//{
//	if (*a > *b)
//	{
//		int tmp = *a;
//		*a = *b;
//		*b = tmp;
//	}
//}
//int main()
//{
//	int x, y, z;
//	scanf("%d%d%d", &x, &y, &z);
//	Max(&x, &y);
//	Max(&y, &z);
//	Max(&x, &y);
//	printf("%d %d %d\n", x, y, z);
//	return 0;
//}

//����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
//int main()
//{
//	int year = 0, month = 0, day = 0;
//	printf("�����������գ�");
//	scanf("%d%d%d", &year, &month, &day);
//	switch (month)
//	{
//	case 12:day += 30;
//	case 11:day += 31;
//	case 10:day += 30;
//	case 9:day += 31;
//	case 8:day += 31;
//	case 7:day += 30;
//	case 6:day += 31;
//	case 5:day += 30;
//	case 4:day += 31;
//	case 3:day += 28;
//		if ((year % 4 == 0 && year % 100 == 0) || year % 400 == 00)
//			day++;
//	case 2:day += 31;
//	case 1:break;	
//	}
//	printf("day = %d\n", day);
//	return 0;
//}

//һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
//int main()
//{
//	int i, j, m, n, x;
//	for (i = 84;i >= 0;i -= 2)
//	{
//		if (168 % i == 0)
//		{
//			j = 168 / i;
//			if (i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
//			{
//				m = (i + j) / 2;
//				n = (i - j) / 2;
//				x = n * n - 100;
//				printf("%d\n",x);
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	double i, sum;
//	printf("�����뵱������\n");
//	scanf("%lf", &i);
//	if (i <= 10)
//		sum = i * 0.1;
//	else if (i <= 20)
//		sum = 10 * 0.1 + (i - 10) * 0.075;
//	else if (i <= 40)
//		sum = (i - 20) * 0.05;
//	else if (i <= 60)
//		sum = (i - 40) * 0.03;
//	else if (i <= 100)
//		sum = (i - 60) * 0.015;
//	else
//		sum = (i - 100) * 0.01;
//	printf("����������%lf��Ԫ\n", sum);
//	return 0;
//}

//int main()
//{
//	int i, j, k;
//	int count = 0;
//	for (i = 1;i < 5;i++)
//	{
//		for (j = 1;j < 5;j++)
//		{
//			for (k = 1;k < 5;k++)
//			{
//				if (i != j && j != k && i != k)
//				{
//					printf("%d ", 100 * i + 10 * j + k);
//					count++;
//				}
//			}
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	int i, num, count = 0;
//	scanf("%d", &num);
//	for (i = 0;i < 32;i++)
//	{
//		if ((num & 1) == 1)
//			count++;
//		num = num >> 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int count = 0, input;
//	scanf("%d", &input);
//	while (input)
//	{
//		if (input % 2 == 1)
//			count++;
//		input /= 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 3, b = 5;
//	printf("%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//}

//int main()
//{
//	char input[20];
//	system("shutdown -s -t 60");
//	printf("��ĵ��Խ���һ���Ӻ�ػ���������룺��������ȡ���ػ���\n");
//again:
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//		system("shutdown -a");
//	else
//	{
//		printf("���������룺");
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,5,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i , sum = 0;
//	for (i = 0;i < sz;i++)
//		sum = sum ^ arr[i];
//	printf("�ҵ��ˣ�������ǣ�%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,5,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i, j;
//	for (i = 0;i < sz;i++)
//	{
//		for (j = 0;j < sz;j++)
//		{
//			if (arr[i] == arr[j] && i != j)
//				break;
//		}
//		if (arr[i] != arr[j])
//		{
//			printf("�ҵ��ˣ�������ǣ�%d\n", arr[i]);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ�����\n");
//	return 0;
//}

//void bubble_sort(int arr[],int sz)
//{
//	int i;
//	for (i = 0;i < sz - 1;i++)//ȷ��ð�ݺ���������
//	{
//		int j;
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		for (j = 0;j < sz - i - 1;j++)//ÿһ��ð������
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//int main()
//{
//	int arr[10];
//	int i, j;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (j = 0;j < sz;j++)
//		scanf("%d", &arr[j]);
//	bubble_sort(arr,sz);//ð��������
//	for (i = 0;i < sz;i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//void Move(int n,char x,char y,char z)
//{
//	if (n == 1)
//		printf("%c->%c\n", x, z);
//	else
//	{
//		Move(n - 1, x, z, y);
//		printf("%c->%c\n", x, z);
//		Move(n - 1, y, x, z);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	Move(n, 'A', 'B', 'C');
//	return 0;
//}

//int Fib(int m)
//{
//	if (m <= 2)
//		return 1;
//	if (m > 2)
//		return Fib(m - 1) + Fib(m - 2);
//}
//int Fib(int m)
//{
//	int i, a, b, c;
//	for (i = 1;i <= m;i++)
//	{
//		if (i <= 2)
//			a = b = c = 1;
//		else
//		{
//			c = a + b;	
//			a = b;
//			b = c;
//		}
//	}
//	return c;
//}
//int main()
//{
//	int n, ret;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int Fac(int m)
//{
//	if (m > 1)
//		return m * Fac(m - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n, ret;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[]="0";
//	scanf("%s", arr);
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d",43)));//printf-��ʾ��ӡ�ĸ�����
//	return 0;
//}

//void Add(int* n)
//{
//	(*n)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("sum = %d\n", num);
//	Add(&num);
//	printf("sum = %d\n", num);
//	Add(&num);
//	printf("sum = %d\n", num);
//	return 0;
//}

//int binary_search(int arr[],int k,int sz)//������arr��һ��ָ��
//{
//	int left = arr[0];
//	int	right= arr[sz - 1];
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//			left = mid + 1;
//		else if (k < arr[mid])
//			right = mid - 1;
//		else
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	if (1 == binary_search(arr, k, sz))
//		printf("�ҵ���\n");
//	else
//		printf("�Ҳ���\n");
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if (1 == is_leap_year(year))
//		printf("������\n");
//	else
//		printf("��������\n");
//	return 0;
//}

//int is_prime(int m)
//{
//	int i;
//	for (i = 2;i <= sqrt(m);i++)
//	{
//		if (m % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (1 == is_prime(n))
//		printf("������\n");
//	else
//		printf("��������\n");
//	return 0;
//}

//void Swap1(int x,int y)
//{
//	int tmp;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* x, int* y)
//{
//	int tmp;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10, b = 20;
//	//Swap1(a, b);
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello bite";
//	memset(arr, '#', 5);
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "##############";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr[20];
//	system("shutdown -s -t 60");
//	printf("���������룺");
//	scanf("%s", arr);
//	if (strcmp(arr, "������") == 0)
//		system("shutdown -a");
//	else
//		system("shutdown -s");
//	return 0;
//}

//void menu()
//{
//	printf("**********************************************\n");
//	printf("****         1.play        0.exit         ****\n");
//	printf("**********************************************\n");
//}
//void game()
//{
//	int ret, guess;
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("�´��ˣ�\n");
//		else if (guess < ret)
//			printf("��С�ˣ�\n");
//		else
//		{
//			printf("�¶��ˣ�\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while(input);
//	game();
//	return 0;
//}

//int main()
//{
//	char input[20];
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���ֻҪ���룺����������ȡ���ػ�\n�����룺");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)//strcmp()-�Ƚ������ַ���
//		system("shutdown -a");
//	else
//		goto again;
//	return 0;
//}
// 
//int main()
//{
//	char input[20];
//	system("shutdown -s -t 60");//��60s�ڹػ�
//	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���ֻ�����룺����������ȡ���ػ���\n");
//	printf("�������ֱ�ӹػ�\n�����룺");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)//strcmp()-�Ƚ������ַ���
//		system("shutdown -a");//ȡ���ػ�
//	else
//		system("shutdown -s");
//	return 0;
//}


//void menu()
//{
//	printf("*************************************\n");
//	printf("****      1.play    0.exit      *****\n");
//	printf("*************************************\n");
//}
//
//void game()
//{
//	int ret, guess;
//	ret = rand() % 100 + 1;
//	//�����������RAND_MAX=0x7fff=32767
//	while (1)
//	{
//		printf("������֣�\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("�´��ˣ�\n");
//		else if (guess < ret)
//			printf("��С�ˣ�\n");
//		else
//		{
//			printf("�¶��ˣ�\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input;
//	srand((unsigned int)time(NULL));//NULL-��ָ��
//	//��ʱ�������������������
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int n;
//	char arr[] = { 0 };
//	scanf("%s", arr);
//	scanf("������Ҫ���ҵ�����%d", n);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0, right = sz - 1;
//	while (left <= right)
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	int i, j;
//	for (i = 1;i < 10;i++)
//	{
//		for (j = 1;j <= i;j++)
//			printf("%d*%d=%-2d ", i, j, i * j);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1;a <= 100;a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int i,j;
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (j = 0;j < sz;j++)
//		scanf("%d", &arr[j]);
//	int max = arr[0];
//	for (i = 0;i < sz;i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("���ֵ��%d\n", max);
//	return 0;
//}

//int main()
//{
//	int i;
//	double sum = 0.0;
//	for (i = 1;i < 100;i += 2)
//	{
//		sum += 1.0 / i;
//		sum -= 1.0 / (1 + i);
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int i, count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i > 90)
//			count++;
//		if (i > 80)
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int m, n;
//	printf("������");
//	for (m = 101;m < 200;m+=2)
//	{
//		for (n = 3;n <= sqrt(m);n++)
//		{			//sqrt-��ƽ������ѧ�⺯��
//			if (m % n == 0)
//				break;
//		}
//		if(n>sqrt(m))
//			printf("%d ", m);
//	}
//	return 0;
//}

//int main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1000;i <= 2000;i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//			sum++;
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d ", i);
//			sum++;
//		}
//	}
//	printf("\n����������%d��\n", sum);
//	return 0;
//}

//int main()
//{
//	int m, n, r;
//	scanf("%d%d", &m, &n);
//	while (m % n)
//	{
//		r=m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	int i = 1;
//	scanf("%d%d", &a, &b);
//	for (i = a;i <= a || i <= b;i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1, s = 0;
//	for (i = 1;i < 100;i++)
//	{
//		s = 3 * i;
//		if (s > 100)
//			break;
//		printf("%d ", s);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, tmp;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//int main()
//{
//	int i;
//	char arr[20] = { 0 };
//	for (i = 0;i < 3;i++)
//	{
//		printf("���������룺");
//		scanf("%s", arr);
//		if (strcmp(arr, "123456a") == 0)
//			//�⺯��strcmp-�������ж������ַ����Ƿ����
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("���Ժ�����\n");
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	for (left = 0, right = strlen(arr1) - 1;left <= right;left++, right--)
//	{
//		arr2[right] = arr1[right];
//		arr2[left] = arr1[left];
//		printf("%s\n", arr2);
//		Sleep(1000);//��Ϣһ��
//		system("cls");//ִ��ϵͳ�����ڵ�һ��������cls->�����Ļ
//	}
//	return 0;
//}

//int main()
//{
//	int mid,k;
//	scanf("%d", &k);
//	int arr[] = { 1,2,3,4,5,6,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		if (k == arr[i])  
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (sz == i)
//		printf("�Ҳ���\n");
//	return 0;
//}

//int main()
//{
//	int ret = 1;
//	int i = 0;
//	int n;
//	scanf("%d", &n);
//	for (i=1;i<=n;i++)
//		ret *= i;
//		printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (;i < 10;i++)
//	{
//		for (;j < 10;j++)
//			printf("%d:hehe\n", j);
//	}
//	return 0;
//}

//int main()
//{
//	int i;
//	for (i = 0;i < 10;i++)
//	{
//		if (5 == i)
//			printf("%d haha\n", i);
//		printf("%d hehe\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i;
//	for (i = 1;i < 11;i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	char ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char ch;
//	int ret;
//	char password[20] = { 0 };
//	printf("����������>:");
//	scanf("%s", &password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N)>:");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		
//	}
//	return 0;
//}

//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 0;
//	while (i <= 100)
//	{
//		if (1 == i % 2)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int c = 0;
//	scanf("%d" ,&c);
//	if (1 == c % 2)
//		printf("������\n");
//	else
//		printf("��������\n");
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (5 == num)
//		printf("hehe\n");
//	return 0;
//}


//int main()
//{
//	int age = 60;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age < 28 && age >= 18)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//	return 0;
//}

//struct book
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	struct book b1 = { "C���Գ������",55 };
//	//struct book* pb = &b1;
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);
//	printf("������%s\n", b1.name);
//	printf("�۸�%dԪ\n", b1.price);
//	//b1.name = "C++";
//	strcpy(b1.name, "C++");
//	printf("�޸ĺ��������%s\n", b1.name);
//	return 0;
//}

//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("sum = %d\n", sum);
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}