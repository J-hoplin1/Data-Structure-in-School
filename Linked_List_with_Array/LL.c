#include<stdio.h>
#include<stdlib.h>
#include"LL.h"

void init(list *a)
{
	a->count_node = 0;
}


int is_empty(list *a)
{
	return (a->count_node == 0);
}

int is_full(list *a)
{
	return (a->count_node == 100);
}

void add_last(list *a, char *data)
{
	a->arr[(a->count_node)++] = data;
}

void print_all(list *a)
{
	int count = 0;
	for (; count < a->count_node; count++)
	{
		printf("%s\n", a->arr[count]);
	}
}

void add_first(list *a, char *data)
{
	char *save;
	int count = (a->count_node)-1;
	for (; count >= 0; count--)
	{
		save = a->arr[count];
		a->arr[count + 1] = save;
	}
	a->arr[0] = data;
	a->count_node++;
}

void delete_at(list *a, int pos)
{
	a->arr[pos-1] = NULL;
}

void clear(list *a)
{
	int count = 0;
	for (; count < a->count_node; count++)
	{
		a->arr[count] = NULL;
	}
}

void replace(list *a, int pos, char *item)
{
	a->arr[pos - 1] = item;
}

int is_in_list(list *a, char *item)
{
	int count = 0;
	for (; count < a->count_node; count++)
	{
		if (a->arr[count] == item)
		{
			printf("�˻��� %s���� %d��° ����Ʈ�� �ֽ��ϴ�.\n", item, count + 1);
			return 0;
		}
	}
	printf("�˻��� %s���� �������� �ʽ��ϴ�.\n", item);
	return 0;
}

void get_entry(list *a, int pos)
{
	printf("%d��° �����ʹ� %s�Դϴ�.", pos, a->arr[pos - 1]);
}

void length(list *a)
{
	printf("���� ����Ʈ�� ��ü ���̴� %d�Դϴ�.\n", a->count_node);
}

void add_in(list *a, int pos, char *data)
{
	char *save;
	int stop = pos - 1;
	int count = (a->count_node) - 1;
	for (; count >= stop; count--)
	{
		save = a->arr[count];
		a->arr[count + 1] = save;
	}
	a->arr[pos - 1] = data;
	a->count_node++;
}
