#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��10������������
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

//�ҳ��������ظ������֡���һ������Ϊ n ������ nums ����������ֶ��� 0��n - 1 �ķ�Χ�ڡ�
//������ĳЩ�������ظ��ģ�����֪���м��������ظ��ˣ�Ҳ��֪��ÿ�������ظ��˼��Ρ�
//���ҳ�����������һ���ظ������֡�
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

//��100֮�ڵ�������
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

//�ַ�����ת���罫�ַ��� "www.runoob.com" ��תΪ "moc.boonur.www"��
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

//�ж�һ�������Ƿ�Ϊ������
//int main()
//{
//	int n;
//	printf("������һ������");
//	scanf("%d", &n);
//	int i;
//	for (i = 2;i < n;i++)
//	{
//		if (n % i == 0)
//			break;
//	}
//	if (i == n)
//		printf("��������\n");
//	else if (n == 2)
//		printf("��������\n");
//	else
//		printf("����������\n");
//
//	return 0;
//}

//ɾ��һ���ַ����е�ָ����ĸ���磺�ַ��� "aca"��ɾ�����е� a ��ĸ��
//int main()
//{
//	char arr[5];
//	printf("�������ַ�����");
//	scanf("%s", arr);
//	getchar();
//	char n;
//	printf("������Ҫɾ������ĸ��");
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

//���������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ���
//�����һ����ĸһ����������жϵڶ�����ĸ��
//int main()
//{
//	char n, m;
//	printf("�������һ����ĸ��");
//	scanf("%c", &n);
//	getchar();
//	switch (n)
//	{
//	case 'M':
//		printf("����һ\n");
//		break;
//	case 'F':
//		printf("������\n");
//		break;
//	case 'W':
//		printf("������\n");
//		break;
//	case 'T':
//		printf("������ڶ�����ĸ��");
//		scanf("%c", &m);
//		switch (m)
//		{
//		case 'h':
//			printf("������\n");
//			break;
//		case 'u':
//			printf("���ڶ�\n");
//			break;
//		default:
//			break;
//		}
//		break;
//	case 'S':
//		printf("������ڶ�����ĸ��");
//		scanf("%c", &m);
//		switch (m)
//		{
//		case 'a':
//			printf("������\n");
//			break;
//		case 'u':
//			printf("������\n");
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