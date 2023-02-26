#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int money = 0, water = 0, bottle = 0;
	int sum = 0;
	scanf("%d", &sum);
	while (money != sum) {
		water++;
		money++;
		bottle++;
		if (bottle == 2) {
			water++;
			bottle = 0;
			bottle++;
		}
	}
	printf("%d\n", water);
	return 0;
}

//#include <stdio.h>
//int main() {
//	int i = 0;
//	for (i = 1;i <= 100000;i++) {
//		int tmp = i;
//		int n = 0, sum = 0;
//		while (tmp != 0) {
//			n++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while(tmp) {
//			int j = 0;
//			int num = 1;
//			for (j = 0;j < n;j++) {				
//				num *= tmp % 10;	
//			}
//			sum += num;
//			tmp /= 10;
//		}
//		if (sum == i) {
//			printf("%d\n", sum);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int n, a;
//	scanf("%d", &n);
//	getchar();
//	scanf("%d", &a);
//	int i, sum = 0, ret = 0;
//	for (i = 0;i < n;i++) {
//		sum = 10 * sum + a;
//		ret += sum;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void reverse(const char* arr) {
//	assert(arr);//断言
//	int len = strlen(arr);
//	char* left = &arr[0];
//	char* right = &arr[len - 1];
//	while (left < right) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	char arr[20] = { 0 };
//	//scanf("%s", arr);//scanf遇到空格会结束
//	gets(arr);//读取一行
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}