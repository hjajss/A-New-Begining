#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���õݹ鷽����5!��
//int Fac(int m)
//{
//	if (m)
//		return m * Fac(m - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	char* pa = (char*)&a;
//	if (*pa)
//		return 1;
//	else
//		return 0;
//}
//int check_sys()//�Ż�
//{
//	int a = 1;
//	char* pa = (char*)&a;
//	return *pa;//����1��С�ˣ�����0�����
//}
//int check_sys()//���Ż�
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();//��⵱ǰ�������ֽ���
//	if (ret)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}