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
	//创建通讯录
	struct contact con;//con就是通讯录，里面包含1000个元素的数和size
	//初始化通讯录
	InitContact(&con);
	do {
		menu();
		printf("请选择：");
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
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while(input);
	return 0;
}