#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include"heap.h"

heap *create_heap(heap *a)
{
	return (heap*)malloc(sizeof(heap));
}

void init(heap *a, int size)
{
	a->arr = calloc(size, sizeof(int));
	a->total = 0;
	a->now = 0;
}
void insert_node(heap *a, int data)
{
	int ck;
	ck = ++(a->total);
	a->now++;
	while (ck != 1 && data > a->arr[ck / 2])
	{
		a->arr[ck] = a->arr[ck / 2];
		ck = ck / 2;
	}
	a->arr[ck] = data;
}

void delete_node(heap *a)
{
	a->arr[1] = a->arr[a->now];
	a->arr[a->now] = 0;
	a->now--;

	int index = 1;
	int child = 1;
	int save = 0;

	while (index <= a->now)
	{
		if(a->arr[index * 2] < a->arr[(index * 2) + 1])
		{
			if (a->arr[index] > a->arr[(index * 2) + 1])
			{
				break;
			}
			else
			{
				save = a->arr[index];
				a->arr[index] = a->arr[(index * 2) + 1];
				a->arr[(index * 2) + 1] = save;
				index *= 2;
			}
		}
		if (a->arr[index * 2] > a->arr[(index * 2) + 1])
		{
			if (a->arr[index] > a->arr[index * 2])
			{
				break;
			}
			else
			{
				save = a->arr[index];
				a->arr[index] = a->arr[(index * 2)];
				a->arr[(index * 2)] = save;
				index *= 2;
			}
		}
	}
}

void print_que(heap *a)
{
	int count = 1;
	int next_node_count = 1;
	int tree_level = 1;
	printf("==============================");
	for (; count <= a->total; count++)
	{
		if (count == next_node_count)
		{
			next_node_count *= 2;
			printf("\n");
			printf("Tree level %d : ", tree_level);
			tree_level++;
		}
		printf("%3d", a->arr[count]);
	}
	printf("\n");
	printf("==============================\n");
}