#define _CRT_SECURE_NO_WARNINGS
//����һ�� �������� ������ nums ������ ԭ�� ɾ���ظ����ֵ�Ԫ�أ�
//ʹÿ��Ԫ��ֻ����һ�� ������ɾ����������³��ȡ�Ԫ�ص� ���˳�� Ӧ�ñ��� һ�� ��
#include <stdio.h>
#include <stdlib.h>
int removeDuplicates(int* nums, int numsSize) {
	int i = 0;
	int* ret = nums;
	for (i = 1;i < numsSize;i++) {
		if (*nums != *(ret + i)) {
			*(++nums) = *(ret + i);
		}
	}
	return nums - ret + 1;
}
int main() {
	int nums[] = { 1,1,2 };
	int sz = sizeof(nums) / sizeof(nums[0]);
	int ret = removeDuplicates(nums, sz);
	printf("%d\n", ret);
	return 0;
}

//#include <stdio.h>
//int main() {
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 4);
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//int my_strcmp(const char* str1, const char* str2) {
//	assert(str1 && str2);
//	while (*str1 == *str2) {
//		if (*str1 == '\0') {
//			return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//	//if (*str1 > *str2) {
//	//	return 1;//����
//	//}
//	//else {
//	//	return -1;//С��
//	//}
//}
//int main() {
//	char* p1 = "abc";
//	char* p2 = "abcd";
//	int ret = my_strcmp(p1, p2);
//	if (ret > 0) {
//		printf("p1>p2\n");
//	}
//	else if (ret == 0) {
//		printf("p1==p2\n");
//	}
//	else{
//		printf("p1<p2\n");
//	}
//	return 0;
//}