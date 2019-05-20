#pragma once
#ifndef ___LL
#define ___LL

typedef struct {
	int total_size;
	int data;
	struct node *next_node;
}node;

void init(node **a);

void is_empty(node **a);

void add_node(node **a, int b);

int remove_node(node **a);

int display(node **a);

void insert(node **a, int location, int data);





#endif // !LL
