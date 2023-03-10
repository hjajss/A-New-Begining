#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main() {
//	int a = 1;
//	printf("%d\n", *((char*)&a));
//	return 0;
//}

//union Un {
//	char c;
//	int i;
//};
//int main() {
//	union Un u;
//	u.i = 0x11223344;
//	u.c = 0x55;
//	//printf("%d\n", sizeof(u));
//	//printf("%p\n", &u);
//	printf("%x\n", u.c);
//	printf("%x\n", u.i);
//	return 0;
//}

////枚举常量
//enum Sex {
//	//枚举的可能取值-常量
//	Male = 1,
//	Female = 5,
//	Secret = 8
//};
//enum Color {
//	Red,//0
//	Green,//1
//	Bule//2
//};
//int main() {
//	//enum Sex s = Male;
//	//enum Color c = Bule;
//	printf("%d %d %d\n", Red, Green, Bule);
//	printf("%d %d %d\n", Male,Female,Secret);
//	return 0;
//}