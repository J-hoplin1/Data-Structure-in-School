#include<stdio.h>
#include<stdlib.h>
#include "Deque.h"

void init(deque *a, int max)
{
	a->max = max;
	a->front = a->rear = 0;
	a->count = 1;//포화상태 구분을 위해서 한칸을 비워두므로
	a->Deq = calloc(max, sizeof(int));
}

int is_empty(deque *a)
{
	return (a->count == 1);
}

int is_full(deque *a)
{
	return (a->count >= a->max);
}

int add_front(deque *a, int input)
{
	if (is_full(a))
	{
		printf("덱큐가 모두 찼습니다\n");
		return 0;
	}
	else
	{
		a->count++;
		a->Deq[a->front] = input;
		a->front = ((a->front - 1) + a->max) % a->max;
	}
}

int add_rear(deque *a, int input)
{
	if (is_full(a))
	{
		printf("덱큐가 모두 찼습니다\n");
		return 0;
	}
	else
	{
		a->count++;
		a->Deq[++(a->rear)] = input;
	}
}

int display(deque *a)
{
	if (is_empty(a))
	{
		printf("덱큐가 비어있습니다.\n");
		return 0;
	}
	int count;
	for (count = 0; count < a->count - 1; count++)
	//덱큐의 요소개수를 세는 count변수에 대해 포화상태 구분을 위해 1로 초기화를 했으므로 전체 요소개수에서 -1을 해주어야 실제 요소 개수가 나오게 되는것이다.
	{
		printf("%2d", a->Deq[(count + (a->front + 1)) % a->max]);
	}
	printf("\n");
	return 0;
}

int del_rear(deque *a)
{
	if (is_empty(a))
	{
		printf("덱큐가 비어있습니다\n");
		return 0;
	}
	else
	{
		a->count--;
		a->rear = ((a->rear - 1) + a->max) % a->max;
	}
}

int del_front(deque *a)
{
	if (is_empty(a))
	{
		printf("덱큐가 비어있습니다\n");
		return 0;
	}
	else
	{
		a->count--;
		a->front = ((a->front + 1) % a->max);
	}
}