#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

//int main() {
//	//malloc(sizeof(int)*10);
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL) {
//		printf("%s\n",strerror(errno));
//	}
//	else {
//		int i = 0;
//		for (i = 0;i < 10;i++) {
//			printf("%d ", *(p + 1));
//		}
//	}
//	//释放空间
//	//free函数是用来释放动态内存开辟的空间
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main() {
//	int* p = (int*)malloc(20);
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//	}
//	else {
//		int i = 0;
//		for (i = 0;i < 5;i++) {
//			*(p + i) = i;
//		}
//	}
//	int* ptr = realloc(p, 4000);
//	if (ptr != NULL) {
//		p = ptr;
//		int i = 0;
//		for (i = 5;i < 10;i++) {
//			*(p + i) = i;
//		}
//		for (i = 0;i < 10;i++) {
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}

int main() {
	////1.对NULL的解引用操作
	//int* p = malloc(40);
	////万一malloc失败了，p就被赋值为NULL
	//int i = 0;
	//for (i = 0;i < 10;i++) {
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;

	////2.对动态开辟空间的越界访问
	//int* p = (int*)malloc(5 * sizeof(int));
	//if (p == NULL) {
	//	return 0;
	//}
	//else {
	//	int i = 0;
	//	for (i = 0;i < 10;i++) {
	//		*(p + i) = i;
	//	}
	//}
	////
	//free(p);
	//p = NULL;

	//3.对非动态开辟内存使用free释放
	int a = 10;
	int* p = &a;
	*p = 20;
	free(p);
	p = NULL;
	return 0;
}