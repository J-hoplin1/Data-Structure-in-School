#include<stdio.h>
#include<stdlib.h>
#include"LL.h"

int main()
{
	Node *first;
	int size;

	//����Ʈ �ʱ�ȭ
	init(&first);
	printf("-------------------------------\n");
	printf("����Ʈ�� ���� �־� ����Ʈ ����\n");
	add_last(&first, "��");
	add_last(&first, "��");
	add_first(&first,"��");
	add_first(&first, "��");
	//��� : 1��
	display(&first);
	printf("-------------------------------\n");
	printf("\n");
	printf("-------------------------------\n");
	printf("add_at�Լ� �׽�Ʈ\n");
	add_at(&first, 2, "��");
	display(&first);
	printf("-------------------------------");
	printf("\n");
	printf("-------------------------------\n");
	printf("replace�Լ� �׽�Ʈ\n");
	replace(&first, 2, "hello");
	display(&first);
	printf("-------------------------------\n");
	printf("\n");
	printf("-------------------------------\n");
	printf("get_length�Լ� �׽�Ʈ\n");
	get_length(&first);
	printf("-------------------------------\n");
	printf("\n");
	printf("-------------------------------\n");
	printf("is_in_list�Լ� �׽�Ʈ");
	is_in_list(&first, "hello");
	printf("-------------------------------\n");
	printf("\n");
	printf("-------------------------------\n");
	printf("delete_at�Լ� �׽�Ʈ : �������� NULL�� ��ü\n");
	delete_at(&first, 3);
	display(&first);
	printf("-------------------------------\n");
	printf("\n");
}