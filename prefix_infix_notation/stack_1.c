#include<stdio.h>
#include<stdlib.h>
#include "stack_1.h"

void init_1(Stack_1 *a, int length)
{
	a->max = length;
	a->index = -1;
	a->stack = calloc(length, sizeof(char));
}

int is_empty_1(Stack_1 *a)
{
	return (a->index <= -1);
}

int is_full_1(Stack_1 *a)
{
	return (a->index >= a->max);
}

void push_1(Stack_1 *a, char ck)
{
	if (is_full_1(&a) == 1)
	{
		printf("Error : ½ºÅÃÀÌ ²ËÃ¡½À´Ï´Ù");
		exit(1);
	}
	else
	{
		a->stack[++(a->index)] = ck;
	}
}

void print_1(Stack_1 *a)
{
	int count = 0;
	for (; count < a->max; count++)
	{
		printf("%c", a->stack[count]);
	}
}