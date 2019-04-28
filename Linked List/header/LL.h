#pragma once
#ifndef ___LL
#define ___LL

//��带 �������ݴϴ�.
typedef struct node {
	int max;
	char *data;
	struct node *next;//�ڽ��� ���� ���, alias�� Node�� ���� ����Ǳ� ���̹Ƿ� struct Node�� �����־�� �Ѵ�.
}Node;

void is_empty(Node **a);

void is_full(Node **a);

void init(Node **a);

void add_last(Node **a,char *b);

void add_first(Node **a, char *b);

void display(Node **a);

void add_at(Node **a, int pos, char *b);

void delete_ex(Node **a, int pos);

void clear_list(Node **a);

void get_length(Node **a);

void replace(Node **a,int pos,char *item);

void is_in_list(Node **a, char *item);

void delete_at(Node **a, int pos);
#endif // !___LL

