#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//һ��5λ�����ж����ǲ��ǻ���������12321�ǻ�������
//��λ����λ��ͬ��ʮλ��ǧλ��ͬ��
//int main()
//{
//	int n;
//	printf("������һ��5λ����");
//	scanf("%d", &n);
//	int w = n / 10000;
//	int q = (n % 10000) / 1000;
//	int s = (n % 100) / 10;
//	if (n % 10 == w && q == s)
//		printf("�ǻ�������\n");
//	else
//		printf("���ǻ�������\n");
//	return 0;
//}

//��һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�
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
//	printf("����%dλ��\n", count);
//	return 0;
//}

//��5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ�ʵ�4����������
//��˵�ȵ�3���˴�2�ꡣ�ʵ������ˣ���˵�ȵ�2�˴����ꡣ�ʵ�2���ˣ�
//˵�ȵ�һ���˴����ꡣ����ʵ�һ���ˣ���˵��10�ꡣ���ʵ�����˶��
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

//���õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
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