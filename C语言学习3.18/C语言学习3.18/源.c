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
//	//�ͷſռ�
//	//free�����������ͷŶ�̬�ڴ濪�ٵĿռ�
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
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}

int main() {
	////1.��NULL�Ľ����ò���
	//int* p = malloc(40);
	////��һmallocʧ���ˣ�p�ͱ���ֵΪNULL
	//int i = 0;
	//for (i = 0;i < 10;i++) {
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;

	////2.�Զ�̬���ٿռ��Խ�����
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

	//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
	int a = 10;
	int* p = &a;
	*p = 20;
	free(p);
	p = NULL;
	return 0;
}