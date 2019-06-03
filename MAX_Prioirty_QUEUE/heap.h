#pragma once
#ifndef ___heap
#define ___heap

typedef struct heap {
	int *arr;
	int total;
	int now;
}heap;

heap *create_heap(heap *a);

void init(heap *a, int size);

void insert_node(heap *a, int data);

int delete_node(heap *a);

void print_que(heap *a);
#endif // !___heap

