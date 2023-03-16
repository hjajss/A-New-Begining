#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
void InitContact(struct contact* ps) {
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//设置通讯录最初只有一个元素
}

void AddContact(struct contact* ps) {
	if (ps->size == MAX) {
		printf("通讯录已满，无法增加\n");
	}
	else {
		printf("请输入名字：");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄：");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别：");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话：");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址：");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}

void ShowContact(const struct contact* ps) {
	if (ps->size == 0) {
		printf("通讯录为空\n");
	}
	else {
		int i = 0;
		//标题
		printf("%-8s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "住址");
		for (i = 0;i < ps->size;i++) {
			printf("%-8s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

static int FindByName(const struct contact* ps, const char name[MAX_name]) {
	int i = 0;
	for (i = 0;i < ps->size;i++) {
		if (0 == strcmp(ps->data[i].name, name)) {
			return i;
		}
	}
	return -1;//找不到
}

void DelContact(struct contact* ps) {
	char name[MAX_name];
	printf("请输入要删除人的名字：");
	scanf("%s", name);
	//1.查找要删除的人在什么位置
	//找到了返回元素下标，找不到返回-1
	int pos = FindByName(ps, name);
	if (pos == -1) {
		printf("要删除的人不存在\n");
	}
	//2.删除
	else {
		int j = 0;
		for (j = pos;j < ps->size - 1;j++) {
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void SearchContact(const struct contact* ps) {
	char name[MAX_name];
	printf("请输入要查找人的信息：");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1) {
		printf("要查找的人不存在\n");
	}
	else {
		printf("%-8s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "住址");
		printf("%-8s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

void ModityContact(struct contact* ps) {
	char name[MAX_name];
	printf("请输入要修改人的名字：");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (-1 == pos) {
		printf("要修改的人不存在\n");
	}
	else {
		printf("请输入名字：");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄：");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别：");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话：");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址：");
		scanf("%s", ps->data[pos].addr);
		printf("修改成功\n");
	}
}

void SortContact(struct conact* ps) {
	qsort(ps, ps->size, sizeof(ps->data[0]), cmp);
}

