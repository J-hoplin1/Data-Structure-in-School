#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "LL.h"

void init(Node **a)
{
	*a = NULL;
}


void add_last(Node **a, char *b)
{
	Node *new_node = (Node*)malloc(sizeof(Node));
	new_node->data = b;
	new_node->next = NULL;
	if (*a == NULL)
	{
		*a = new_node;
	}
	else
	{
		Node *count = *a;
		while (count->next != NULL)
		{
			count = count->next;
		}
		count->next = new_node;
	}
}

void add_first(Node **a, char *b)
{
	if (*a == NULL)
	{
		Node *new_node = (Node*)malloc(sizeof(Node));
		new_node->data = b;
		new_node->next = NULL;
		*a = new_node;
	}
	else
	{
		Node *new_node = (Node*)malloc(sizeof(Node));
		Node *count = *a;
		new_node->data = b;
		new_node->next = *a;
		
		//맨 앞에 노드가 오면 그 전의 노드들의 index번호를 더해줍니다.
		while (count != NULL)
		{
			count = count->next;
		}
		*a=new_node;
	}
}

void delete_ex(Node **a, int pos)
{
	if (pos == 1)
	{
		Node *rm = *a;
		*a = rm->next;
	}
	else
	{
		Node *count = *a;
		int qw;
		for (qw = 0; qw < pos - 2; qw++)
		{
			count = count->next;
		}
		count->next = count->next->next;
	}
}

void add_at(Node **a, int pos, char *b)
{
	Node *new_node = (Node*)malloc(sizeof(Node));
	new_node->data = b;
	if (pos == 1)
	{
		new_node->next = a;
		a = new_node;
	}
	else
	{
		Node *count = *a;
		int qw;
		for (qw = 0; qw < pos - 2; qw++)
		{
			count = count->next;
		}
		new_node->next = count->next;
		count->next = new_node;
	}
}

void display(Node **a)
{
	Node *count = *a;
	while (count != NULL)
	{
		printf("%s \n", count->data);
		count = count->next;
	}
}

void clear_list(Node **a)
{
	Node *fre = *a;
	free(fre);
}

void get_length(Node **a)
{
	Node *count = *a;
	int count_list = 0;
	while (count != NULL)
	{
		count = count->next;
		count_list++;
	}
	printf("현재 리스트의 길이 : %d\n", count_list);
}

void replace(Node **a, int pos, char *item)
{
	Node *count = *a;
	int count_list = 0;
	if (pos == 1)
	{
		count->data = item;
	}
	for (; count_list < pos - 1; count_list++)
	{
		count = count->next;
	}
	count->data = item;
}

void is_in_list(Node **a, char *item)
{
	Node *count = *a;
	int boolean = 0;
	int ck_index = 0;
	int ck = 1;
	while (count != NULL)
	{
		if (count->data == item)
		{
			boolean++;
			ck_index = ck;
			break;
		}
		ck++;
		count = count->next;
	}
	if (boolean == 0)
	{
		printf("검색하신 %s는 존재하지 않습니다\n", item);
	}
	else;
	{
		printf("검색하신 %s는 %d번째 리스트에 존재합니다.\n", item, ck_index);
	}
}

void delete_at(Node **a, int pos)
{
	Node *count = *a;
	if (pos == 1)
	{
		count->data = NULL;
	}
	else
	{
		int count_list = 0;
		for (; count_list < pos - 1; count_list++)
		{
			count = count->next;
		}
		count->data = NULL;
	}
}