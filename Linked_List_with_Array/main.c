#include<stdio.h>
#include<stdlib.h>
#include"LL.h"

int main()
{
	list li;
	init(&li);

	printf("-----------------------\n");
	printf("�⺻���� ����Ʈ ���� �׽�Ʈ\n");
	add_last(&li, "�������");
	add_last(&li, "��");
	add_last(&li, "ġ��");
	add_last(&li, "����");
	add_first(&li, "apple");
	add_first(&li, "Leech");
	add_in(&li, 2, "orange");
	add_in(&li, 4, "pineapple");
	print_all(&li);
	printf("-----------------------\n");
	printf("\n");
	printf("-----------------------\n");
	printf("delete_at�Լ� �׽�Ʈ\n");
	delete_at(&li, 3);
	delete_at(&li, 5);
	print_all(&li);
	printf("-----------------------\n");
	printf("\n");
	printf("-----------------------\n");
	printf("is_in_list�׽�Ʈ\n");
	is_in_list(&li, "����");
	is_in_list(&li, "qq");
	printf("-----------------------\n");
	printf("\n");
	printf("-----------------------\n");
	printf("repalce�Լ� �׽�Ʈ\n");
	replace(&li, 2, "hello");
	print_all(&li);
	printf("-----------------------\n");
	printf("\n");
	printf("-----------------------\n");
	printf("length�Լ� �׽�Ʈ");
	length(&li);
	printf("-----------------------\n");
}