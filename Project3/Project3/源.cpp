#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��1 + 2!+ 3!+ ... + 20!�ĺ͡�
int main()
{
	int i;
	long long n = 1, sum = 0;
	for (i = 1;i <= 20;i++)
	{
		n *= i;
		sum += n;
	}
	printf("sum = %lld\n", sum);
	return 0;
}

//��һ�������У�2 / 1��3 / 2��5 / 3��8 / 5��13 / 8��21 / 13...���������е�ǰ20��֮�͡�
//int main()
//{
//	double a = 2, b = 1;
//	double sum = 0;
//	int i;
//	for (i = 1;i <= 20;i++)
//	{
//		sum += a / b;
//		double tmp = a; 
//		a = a + b;
//		b = tmp;
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}

//��ӡ������ͼ�������Σ���
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *
//int main()
//{
//	char arr[] = "       ";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i, j;
//	for (i = 3;i >= 0;i--)
//	{
//		arr[i] = '*';
//		if (i != 3)
//			arr[sz - i - 2] = '*';
//		printf("%s\n", arr);
//	}
//	for (j = 0;j < 3;j++)
//	{
//		arr[j] = ' ';
//		arr[sz - j - 2] = ' ';
//		printf("%s\n", arr);
//	}
//	return 0;
//}

//����ƹ����ӽ��б������������ˡ��׶�Ϊa, b, c���ˣ��Ҷ�Ϊx, y, z���ˡ��ѳ�ǩ��������������
//�������Ա����������������a˵������x�ȣ�c˵������x, z�ȣ��������ҳ��������ֵ�������
//int main()
//{
//	char a, b, c;
//	for (a = 'x';a <= 'z';a++)
//	{
//		if (a != 'x')
//		{
//			for (b = 'x';b <= 'z';b++)
//			{
//				for (c = 'x';c <= 'z';c++)
//				{
//					if (c != 'x' && c != 'z')
//					{
//						if (a != b && b != c && a != c)
//						{
//							printf("a->%c\n", a);
//							printf("b->%c\n", b);
//							printf("c->%c\n", c);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//���ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ��
//�ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��ʣ��
//��һ����һ��������10���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�˶��١�
//int main()
//{
//	int i;
//	int p = 1;
//	for (i = 9;i > 0;i--)
//	{
//		p = (p + 1) * 2;
//	}
//	printf("��һ�칲ժ��%d������\n", p);
//	return 0;
//}

//һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻
//�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�
//int main()
//{
//	double h = 100.0, sum = 0.0;
//	int i;
//	for (i = 1;i <= 10;i++)
//	{
//		double tmp = h;
//		h /= 2;
//		sum += tmp + h;
//	}
//	printf("������%lf��\n", sum);
//	printf("��10�η���%lf��\n", h);
//	return 0;
//}
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str != NULL);//��ָ֤�����Ч��
//	int count = 0;
//	while (*str++)//����'\0'֮ǰ���ַ�����
//		count++;
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//#include <string.h>
//void my_strcpy(char* dest, char* src)
//{
//	do
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	} while (src = '\0');
//}
//void my_strcpy(char* dest, char* src)//�Ż�
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
//#include <assert.h>
//char* my_strcpy(char* dest,const char* src)//���Ż�
//{
//	char* ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);
//	while (*dest++ = *src++)//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "##################";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}