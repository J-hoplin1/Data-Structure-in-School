#pragma once
#ifndef ___Stack
#define ___Stack


typedef struct{
	int max;
	int index;
	char *stack;
}Stack;

void init(Stack *a, int length);

int is_empty(Stack *a);

int is_full(Stack *a);

int peek(Stack *a);

int pop(Stack *a);

void push(Stack *a, char ck);

void print(const Stack *a);

#endif // ___Stack
