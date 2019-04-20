#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

void init(Stack *a, int length)
{
	a->max = length;
	a->index = -1;
	a->stack = calloc(length, sizeof(char));
}

int is_empty(Stack *a)
{
	return (a->index <= -1);
}

int is_full(Stack *a)
{
	return (a->index >= a->max);
}

int peek(Stack *a)
{
	if (is_empty(&a))
	{
		printf("Error : 스택이 비어있습니다");
		exit(1);
	}
	else
	{
		return a->stack[a->index];
	}
}

int pop(Stack *a)
{
	if (is_empty(&a) == 1)
	{
		printf("Error : 스택이 비어있습니다");
		exit(1);
	}
	else
	{
		return a->stack[(a->index)--];
	}
}

void push(Stack *a, char ck)
{
	if (is_full(&a) == 1)
	{
		printf("Error : 스택이 꽉찼습니다");
		exit(1);
	}
	else
	{
		a->stack[++(a->index)] = ck;
	}
}

