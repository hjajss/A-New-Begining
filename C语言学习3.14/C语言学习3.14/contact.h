#pragma once

#define MAX 1000

#define MAX_name 20
#define MAX_sex 5
#define MAX_tele 12
#define MAX_addr 30

enum Option {
	exit,
	add,
	del,
	search,
	modify,
	show,
	sort
};

#include <stdio.h>
#include <string.h>

struct PeoInfo {
	char name[MAX_name];
	int age;
	char sex[MAX_sex];
	char tele[MAX_tele];
	char addr[MAX_addr];
};

//通讯录类型
struct contact {
	struct PeoInfo data[MAX];//存放1000个信息
	int size;//记录当前已经有的元素个数
};

//声明函数
void InitContact(struct contact* ps);//初始化通讯录

void AddContact(struct contact* ps);//增加一个信息到通讯录

void ShowContact(const struct contact* ps);//打印通讯录中的信息

void DelContact(struct contact* ps);//删除指定的联系人

void SearchContact(const struct contact* ps);//查找指定的人的信息

void ModityContact(struct contact* ps);//修改指定联系人

void SortContact(struct conact* ps);//排序通讯录联系人

