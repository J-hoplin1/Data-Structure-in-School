#pragma once
#ifndef ___Stack_1
#define ___Stack_1

typedef struct {
	int index;
	char *stack;
	int max;
}Stack_1;

void init_1(Stack_1 *a, int length);

int is_full_1(Stack_1 *a);

int is_empty_1(Stack_1 *a);

void push_1(Stack_1 *a, char ck);

void print_1(Stack_1 *a);

#endif // !___Stack_1
