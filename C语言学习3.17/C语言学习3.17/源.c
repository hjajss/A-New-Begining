#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>

int main() {
	//���ڴ�����10�����Ϳռ�
	int* p = (int*)malloc(40);
	if (p == NULL) {
		//��ӡ����ԭ���һ����ʽ
		printf("%s\n", strerror(errno));
	}
	else {
		//����ʹ�ÿռ�
		int i = 0;
		for (i = 0;i < 10;i++) {
			*(p + i) = i;
		}
		for (i = 0;i < 10;i++) {
			printf("%d ", *(p + i));
		}
	}
	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
	//��Ӧ�û�������ϵͳ
	free(p);
	p = NULL;
	return 0;
}