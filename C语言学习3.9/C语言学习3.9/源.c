#define _CRT_SECURE_NO_WARNINGS

//λ��
#include <stdio.h>
struct A {
	int a : 2;
	int b : 5;
	int c : 10;
	int d : 30;
};
int main() {
	struct A a;
	printf("%d\n", sizeof(a));//8���ֽ�
	return 0;
}