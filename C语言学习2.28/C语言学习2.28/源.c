#define _CRT_SECURE_NO_WARNINGS


//#include <stdio.h>
//int main() {
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	for (a = 1;a <= 5;a++) {
//		for (b = 1;b <= 5;b++) {
//			for (c = 1;c <= 5;c++) {
//				for (d = 1;d <= 5;d++) {
//					for (e = 1;e <= 5;e++) {
//						if (((b==2) + (a==3) == 1) &&
//							((b==2) + (e==4) == 1) &&
//							((c==1) + (d==2) == 1) &&
//							((c==5) + (d==3) == 1) &&
//							((e==4) + (a==1) == 1)) {
//							if (a* b* c* d* e == 120) {
//								printf("A:%d B:%d C:%d D:%d E:%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

////赛马问题
//#include <stdio.h>
//int main() {
//	int house = 0, count = 0;
//	scanf("%d", &house);
//	while (house != 3) {
//		if (house > 6) {
//			house = house / 6 + house % 6 / 6;
//			count += house;
//		}
//		else {
//			house = 3;
//			count += 2;
//		}
//	}
//	printf("最少比赛%d次\n", count);
//	return 0;
//}