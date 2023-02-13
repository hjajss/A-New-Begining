#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//利用递归方法求5!。
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
//int check_sys()//优化
//{
//	int a = 1;
//	char* pa = (char*)&a;
//	return *pa;//返回1，小端；返回0，大端
//}
//int check_sys()//再优化
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();//检测当前机器的字节序
//	if (ret)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}