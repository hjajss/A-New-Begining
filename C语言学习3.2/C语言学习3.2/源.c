#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
char* my_strcat(char* dest, const char* src) {
	assert(dest && src);
	char* start = dest;
	//1.�ҵ�Ŀ�ĵص�'\0'
	while (*dest) {
		dest++;
	}
	//2.׷��
	while (*dest++ = *src++) {
		;
	}
	return start;
}
int main() {
	char arr1[20] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}

//#include <stdio.h>
//char* my_strcpy(char* dest, const char* src) {
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��ĵ�ַ������'\0'
//	while (*dest++ = *src++) {
//		;
//	}
//	//����Ŀ�ĵص���ʼ��ַ
//	return ret;
//}
//int main() {
//	char* arr1 = "abcdef";
//	char* arr2 = "bit";
//	arr1 = my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//size_t my_strlen(const char* str) {
//	assert(str);
//	int count = 0;
//	while (*str++) {
//		count++;
//	}
//	return count;
//}
//��������ʱ�������ַ�������
//int my_strlen(const char* str) {
//	if (*str) {
//		return 1 + my_strlen(++str);
//	}
//	return 0;
//}
//size_t my_strlen(const char* str) {
//	assert(str);
//	const char* end = str;
//	while (*end++) {
//		;
//	}
//	return end - str - 1;
//}
//int main() {
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#define X 3 
//#define Y 3
//int find_num(int arr[X][Y], int k, int* x, int* y) {
//	while (*x <= X - 1 || *y >= 0) {
//		if (arr[*x][*y] < k) {
//			(*x)++;
//		}
//		else if(arr[*x][*y] > k){
//			(*y)--;
//		}
//		else {
//			return 1;
//		}
//	}
//	return 0;
//}
//int main() {
//	int arr[X][Y] = { 1,2,3,4,5,6,7,8,9 };
//	int k;
//	int x = 0, y = Y - 1;
//	scanf("%d", &k);
//	int ret = find_num(arr, k, &x, &y);
//	if (ret) {
//		printf("�ҵ��ˣ�\n");
//		printf("�±��ǣ�%d %d\n", x, y);
//	}
//	else {
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//int is_left_move(char* s1, const char* s2) {
//	assert(s1);
//	assert(s2);
//	int len1 = strlen(s1), len2 = strlen(s2);
//	if (len1 != len2) {
//		return 0;
//	}
//	//1.��s1�ַ�����׷��һ��s1�ַ���
//	//strcat(s1,s1);//err
//	strncat(s1, s1, len1);//len1Ϊ׷���ַ�����
//	//2.�ж�s2ָ����ַ����Ƿ���s1ָ����ַ������Ӵ�
//	char* ret = strstr(s1, s2);//strstr-���Ӵ���
//	if (ret == NULL) {
//		return 0;
//	}
//	else {
//		return 1;
//	}
//}
//int main() {
//	char s1[20];
//	char s2[10];
//	scanf("%s", s1);
//	getchar();
//	scanf("%s", s2);
//	int ret = is_left_move(s1, s2);
//	if (ret == 1) {
//		printf("YES!\n");
//	}
//	else {
//		printf("NO!\n");
//	}
//	return 0;
//}