#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
void menu() {
	printf("************************************************\n");
	printf("*******	    1.add              2.del	 *******\n");
	printf("*******	    3.search           4.modity  *******\n");
	printf("*******	    5.show             6.sort	 *******\n");
	printf("*******	    0.exit                       *******\n");
	printf("************************************************\n");
}
int main() {
	int input = 0;
	//����ͨѶ¼
	struct contact con;//con����ͨѶ¼���������1000��Ԫ�ص�����size
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do {
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input) {
		case add:
			AddContact(&con);
			break;
		case del:
			DelContact(&con);
			break;
		case search:
			SearchContact(&con);
			break;
		case modify:
			ModityContact(&con);
			break;
		case show:
			ShowContact(&con);
			break;
		case sort:
			SortContact(&con);
			break;
		case exit:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while(input);
	return 0;
}