#include<stdio.h>
#include<stdlib.h>
#include"LL.h"

void init(node **a)
{
	*a = NULL;
}

void add_node(node **a, int *b)
{
	node *new_node = (node*)malloc(sizeof(node));
	new_node->data = b;
	new_node->next_node = NULL;
	new_node->total_size += 1;
	if (*a == NULL)
	{
		*a = new_node;
	}
	else
	{
		node *count = *a;
		while (count->next_node != NULL)
		{
			count = count->next_node;
		}
		count->next_node = new_node;
	}
}

int remove_node(node **a)
{
	node *ck = *a;
	node *RE = ck->next_node;
	printf("Now Delete Node - Data : %d\n", ck->data);
	*a = RE;
	free(ck);
	return 0;
}

int display(node **a)
{
	node *ck = *a;
	if (ck == NULL)
	{
		printf("No node in this list\n");
		return 0;
	}
	int count = 0;
	while (ck != NULL)
	{
		printf("%d\n", ck->data);
		ck = ck->next_node;
	}
	return 0;
}

void insert(node **a, int location, int data)
{
	node *new_node =  (node*)malloc(sizeof(node));
	new_node->data = data;
	node *ck = *a;
	int count = 0;
	for (count = 0; count < location - 2; count++)
	{
		ck = ck->next_node;
	}
	new_node->next_node = ck->next_node;
	ck->next_node = new_node;
}