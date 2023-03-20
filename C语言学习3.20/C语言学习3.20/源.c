#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//int main() {
//	//int* p = (int*)malloc(40);
//	//if (p == NULL) {
//	//	return 0;
//	//}
//	//int* p2 = realloc(p, 80);
//	//if (p2 != NULL) {
//	//	p = p2;
//	//}
//
//	int* p = realloc(NULL,40);// == malloc(40)
//	return 0;
//}

//int main() {
//	////1.对NULL指针解引用操作
//	//int* p = malloc(40);
//	//*p = 10;//malloc可能开辟失败->对NULL指针解引用操作
//
//	////2.对动态开辟内存的越界访问
//	//int* p = (int*)malloc(40);//10个int
//	//if (p == NULL) {
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0;i <= 10;i++) {
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	////3.对非动态开辟内存使用free释放
//	//int a = 10;
//	//int* p = &a;
//	////...
//	//free(p);
//	//p = NULL;
//
//	////4.使用free释放动态开辟内存的一部分
//	//int* p = (int*)malloc(40);
//	//if (p == NULL) {
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0;i < 5;i++) {
//	//	*p++ = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	////5.对同一块动态内存的多次释放
//	//int* p = (int*)malloc(40);
//	//if (p == NULL) {
//	//	return 0;
//	//}
//	//free(p);
//	//p = NULL;
//	//free(p);
//	//p = NULL;
//
//	////6.对动态开辟内存忘记内存(内存泄漏)
//	//while (1) {
//	//	malloc(1);
//	//	Sleep(1000);
//	//}
//
//
//	return 0;
//}
