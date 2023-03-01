#define _CRT_SECURE_NO_WARNINGS
//ÅĞ¶ÏÊÇ·ñ×óĞı
#include <stdio.h>
#include <string.h>
#include <assert.h>
void reverse(char* left,char* right) {
	assert(left);
	assert(right);
	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int is_left_move(char* s1, char* s2) {
	assert(s1);
	assert(s2);
	int len1 = strlen(s1), len2 = strlen(s2);
	if (len1 != len2) {
		return 0;
	}
	int i = 0;
	for (i = 0;i < len1;i++) {
		reverse(s1, s1 + 1 - 1);//ÄæĞò×ó±ß
		reverse(s1 + 1, s1 + len1 - 1);//ÄæĞòÓÒ±ß
		reverse(s1, s1 + len1 - 1);//ÄæĞòÕûÌå
		if (strcmp(s1, s2) == 0) {
			return 1;
		}
	}
	return 0;
}
int main() {
	char s1[10];
	char s2[10];
	scanf("%s", s1);
	getchar();
	scanf("%s", s2);
	int ret = is_left_move(s1, s2);
	if (ret == 1) {
		printf("YES!\n");
	}
	else {
		printf("NO!\n");
	}
	return 0;
}

////Êä³ö×óĞıkºóµÄ½á¹û
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void reverse(char* left,char* right) {
//	assert(left);
//	assert(right);
//	while (left < right) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k) {
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);//µ±k > lenÊ±±¨´í
//	reverse(arr, arr + k - 1);//ÄæĞò×ó±ß
//	reverse(arr + k, arr + len - 1);//ÄæĞòÓÒ±ß
//	reverse(arr, arr + len - 1);//ÄæĞòÕûÌå
//}
//int main() {
//	char arr[10];
//	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®£º");
//	scanf("%s", arr);
//	int k = 0, n = 0;
//	getchar();
//	printf("ÇëÊäÈë×óĞı×Ö·û¸öÊı£º");
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}