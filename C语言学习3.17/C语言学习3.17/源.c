#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>

int main() {
	//向内存申请10个整型空间
	int* p = (int*)malloc(40);
	if (p == NULL) {
		//打印错误原因的一个方式
		printf("%s\n", strerror(errno));
	}
	else {
		//正常使用空间
		int i = 0;
		for (i = 0;i < 10;i++) {
			*(p + i) = i;
		}
		for (i = 0;i < 10;i++) {
			printf("%d ", *(p + i));
		}
	}
	//当动态申请的空间不再使用的时候
	//就应该还给操作系统
	free(p);
	p = NULL;
	return 0;
}