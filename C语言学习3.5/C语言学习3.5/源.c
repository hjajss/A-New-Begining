#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
void* my_memmove(void* dest, const void* src, size_t num) {
	assert(dest && src);
	void* ret = dest;
	if (((char*)dest - (char*)src) > 0) {
		while (num--) {
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	else {
		while (num--) {
			*((char*)dest)++ = *((char*)src)++;
		}
	}
	return ret;
}
void* my_memcpy(void* dest, const void* src, size_t num) {
	assert(dest && src);
	void* ret = dest;
	while (num--) {
		*((char*)dest)++ = *((char*)src)++;
	}
	return ret;
}
typedef struct student {
	char name[20];
	int age;
}stu;
int main() {
	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
	int arr2[5] = { 0 };
	stu arr3[] = { {"张三",20},{"李四",30} };
	stu arr4[3] = { 0 };
	my_memcpy(arr4, arr3, sizeof(arr3));
	my_memmove(arr1 + 2, arr1, 20);
	int i = 0;
	for (i = 0;i < 9;i++) {
		printf("%d ", arr1[i]);
	}
	return 0;
}