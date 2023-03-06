#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,5,4,3 };
	int ret = memcmp(arr1, arr2, 8);
	printf("%d\n", ret);
	return 0;
}

//#include <stdio.h>
//#include <assert.h>
//void* my_memmove(void* dest, const void* src, size_t num) {
//	assert(dest && src);
//	void* ret = dest;
//	if (dest > src) {
//		while (num--) {
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	else {
//		while (num--) {
//			*((char*)dest)++ = *((char*)src)++;
//		}
//	}
//	return ret;
//}
//int main() {
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[5] = { 0 };
//	my_memmove(arr1 + 2, arr1, 20);
//	//memcpy(arr1 + 2, arr1, 20);
//	int i = 0;
//	for (i = 0;i < 9;i++) {
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}