#pragma once
#ifndef ___Stack_2
#define ___Stack_2

typedef struct {
	int max;
	int index;
	int *stack;
}Stack_2;

void init_2(Stack_2 *a, int length);

int is_full_2(Stack_2 *a);

int is_empty_2(Stack_2 *a);

void push_2(Stack_2 *a, int ck);

void print_2(Stack_2 *a);

int pop_2(Stack_2 *a);

#endif // !___Stack_2
