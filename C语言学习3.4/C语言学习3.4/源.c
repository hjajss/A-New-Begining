#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char* my_strtok(char* str, const char* sep) {
	char* start, *tmp;
	static char* end;
	if (str) {
		start = str;
	}
	else {
		start = end;
	}
	if (start == NULL) {
		return NULL;
	}
	char* st = start;
	while (*st) {
		tmp = (char*)sep;
		while (*st != *tmp && *tmp) {
			tmp++;
		}
		while (*st == *tmp && *st && *tmp) {
			*st = '\0';
			end = ++st;
			return start;
		}
		st++;
	}
	if (!*st) {
		end = NULL;
		return start;
	}	
	return NULL;
}
int main() {
	char* arr = "zpw@bitedu.tech";
	char* p = "@.";
	char buf[1024] = { 0 };
	strcpy(buf, arr);
	char* ret = NULL;
	for (ret = my_strtok(buf, p);ret != NULL;ret = my_strtok(NULL, p)) {
		printf("%s\n", ret);
	}
	return 0;
}

//#include <stdio.h>
//#include <assert.h>
//char* my_strstr(const char* str1, const char* str2) {
//	assert(str1 && str2);
//	if (!*str2) {
//		return (char*)str1;
//	}
//	char* cur = (char*)str1;
//	char* p1, * p2;
//	while (*cur) {
//		p1 = cur;
//		p2 = (char*)str2;
//		while (*p1 && *p2 && *p1 == *p2) {
//			p1++;
//			p2++;
//		}
//		if (!*p2) {
//			return cur;//�ҵ��Ӵ�
//		}
//		//if (!*p1) {	//�Ż�
//		//	return NULL;
//		//}
//		//cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
//}
//int main() {
//	char* p1 = "bb";
//	char* p2 = "bbcdef";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL) {
//		printf("�Ӵ�������\n");
//	}
//	else {
//		printf("%s\n", ret);
//	}
//	return 0;
//}

////����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ�
////�������Ƴ���������³��ȡ�
////��Ҫʹ�ö��������ռ䣬������ʹ�� O(1) ����ռ䲢 ԭ�� �޸��������顣
////Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
//#include <stdio.h>
//int removeElement(int* nums, int numsSize, int val) {
//	int slow = 0;
//	int fast = 0;
//	for (fast = 0;fast < numsSize; fast++) {
//		if (nums[fast] != val) {
//			nums[slow++] = nums[fast];
//		}
//	}
//	return slow;
//}
//int main() {
//	int nums[] = { 3,2,2,3 };
//	int val = 3;
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	int ret = removeElement(nums, sz, val);
//	printf("%d\n", ret);
//	return 0;
//}