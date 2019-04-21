#pragma once
#ifndef ___deque
#define ___deque

typedef struct
{
	int max;
	int front;
	int rear;
	int count;
	int *Deq;
}deque;


void init(deque *a, int max);

int is_empty(deque *a);

int is_full(deque *a);

int add_front(deque *a,int input);

int add_rear(deque *a, int input);

int display(deque *a);

int del_rear(deque *a);

int del_front(deque *a);

#endif // !___deque
