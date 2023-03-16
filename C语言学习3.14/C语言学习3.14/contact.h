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

//ͨѶ¼����
struct contact {
	struct PeoInfo data[MAX];//���1000����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
};

//��������
void InitContact(struct contact* ps);//��ʼ��ͨѶ¼

void AddContact(struct contact* ps);//����һ����Ϣ��ͨѶ¼

void ShowContact(const struct contact* ps);//��ӡͨѶ¼�е���Ϣ

void DelContact(struct contact* ps);//ɾ��ָ������ϵ��

void SearchContact(const struct contact* ps);//����ָ�����˵���Ϣ

void ModityContact(struct contact* ps);//�޸�ָ����ϵ��

void SortContact(struct conact* ps);//����ͨѶ¼��ϵ��

