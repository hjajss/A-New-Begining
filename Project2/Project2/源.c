#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"��
//����6 = 1��2��3.����ҳ�1000���ڵ�����������
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

//��s = a + aa + aaa + aaaa + aa...a��ֵ������a��һ�����֡�
//����2 + 22 + 222 + 2222 + 22222(��ʱ����5�������)������������м��̿��ơ�
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

//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
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
//	printf("Ӣ����ĸ���� = %d\n", letter);
//	printf("�ո���� = %d\n", space);
//	printf("���ָ��� = %d\n", figure);
//	printf("�����ַ����� = %d\n", other);
//	return 0;
//}

//��������������m��n���������Լ������С��������
//int main()
//{
//	int m, n, i, j;
//	scanf("%d%d", &m, &n);
//	for (i =(m > n ? n : m);i > 0;i--)
//	{
//		if (m % i == 0 && n % i == 0)
//			break;
//	}
//	printf("���Լ����%d\n", i);
//	for (j = (m > n ? m : n);j <= m * n;j++)
//	{
//		if (j % m == 0 && j % n == 0)
//			break;
//	}
//	printf("��С��������%d\n", j);														
//	return 0;
//}

//���������������Ƕ������ɴ��⣺ѧϰ�ɼ� >= 90�ֵ�ͬѧ��A��ʾ��
//60 - 89��֮�����B��ʾ��60�����µ���C��ʾ��
//int main()
//{
//	int score;
//	char grade;
//	scanf("%d", &score);
//	grade = (90 > (60 >= score ? 'C' : score) ? 'B' : 'A');
//	printf("grade = %c\n", grade);
//	return 0;
//}

//��һ���������ֽ������������磺����90, ��ӡ��90 = 2 * 3 * 3 * 5��
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

//��ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ��� ����
//���磺153��һ��"ˮ�ɻ���"����Ϊ153 = 1�����η���5�����η���3�����η���
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

//�ж� 101 �� 200 ֮���������
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