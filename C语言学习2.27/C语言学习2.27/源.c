#define _CRT_SECURE_NO_WARNINGS
//猜凶手
#include <stdio.h>
int main() {
	int killer = 0;
	for (killer = 'A';killer <= 'D';killer++) {
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3) {
			printf("killer = %c\n", killer);
		}
	}
	return 0;
}
//#include <stdio.h>
//int main() {
//	char arr[] = { 'A','B','C','D' };
//	int count = 0, i = 0;
//	while (count != 3) {
//		if (arr[i] != 'A') {
//			count++;
//		}
//		if (arr[i] == 'C') {
//			count++;
//		}
//		if (arr[i] == 'D') {
//			count++;
//		}
//		if (arr[i] != 'D') {
//			count++;
//		}
//		i++;
//	}
//	printf("凶手是：%c\n", arr[i]);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int arr[10][10] = { 0 };
//	int i = 0, j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++) {
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//	for (i = 2;i < sz;i++) {
//		for (j = 1;j < i;j++) {
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	//打印
//	for (i = 0;i < sz;i++) {
//		for (j = 0;j <= i;j++) {
//			printf("%-3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main() {
//	int arr[10] = { 0 }, i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++) {
//		scanf("%d", &arr[i]);
//	}
//	int left = 0, right = sz - 1;
//	while (left < right) {
//		if (arr[left] % 2 == 0 && arr[right] % 2 == 1) {
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//		if (arr[left] % 2 == 1) {
//			left++;
//		}
//		if (arr[right] % 2 == 0) {
//			right--;
//		}
//	}
//	int j = 0;
//	for (j = 0;j < sz;j++) {
//		printf("%d ", arr[j]);
//	}
//	printf("\n");
//	return 0;
//}