#include<stdio.h>
#include<stdlib.h>
#include"stack_2.h"


void init_2(Stack_2 *a, int length)
{
	a->max = length;
	a->index = -1;
	a->stack = calloc(length, sizeof(int));
}

int is_empty_2(Stack_2 *a)
{
	return (a->index <= -1);
}

int is_full_2(Stack_2 *a)
{
	return (a->index >= a->max);
}

void push_2(Stack_2 *a, int ck)
{
	if (is_full_2(&a) == 1)
	{
		printf("Error : 스택이 꽉찼습니다");
		exit(1);
	}
	else
	{
		a->stack[++(a->index)] = ck;
	}
}

void print_2(Stack_2 *a)
{
	int count = 0;
	printf("%d\n", a->index);
	for (; count < a->index; count++)
	{
		printf("%d", a->stack[count]);
	}
}

int pop_2(Stack_2 *a)
{
	if (is_empty_2(&a) == 1)
	{
		printf("Error : 스택이 비어있습니다");
		exit(1);
	}
	else
	{	
		 return a->stack[(a->index)--];
	}
}