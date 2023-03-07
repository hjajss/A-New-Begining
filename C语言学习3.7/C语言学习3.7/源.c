#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct S1 {
	char c1;
	int a;
	char c2;
};
struct S2 {
	char c1;
	char c2;
	int a;
};
int main() {
	struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));
	return 0;
}

//#include <stdio.h>
//struct T {
//	double weight;
//	int age;
//};
//struct S {
//	char c;
//	struct  T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main() {
//	struct S s = { 'c',{55.6,60},100,3.14,"hello bit" };
//	printf("%lf\n", s.st.weight);
//	return 0;
//}

//struct Stu {
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s3,s4,s5;
//int main() {
//	//创建的结构体变量
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}