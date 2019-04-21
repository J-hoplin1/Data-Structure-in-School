#include<stdio.h>
#include<stdlib.h>
#include "queue_1.h"

void init(que *a, int max)
{
	a->count = a->front = a->rear = 0;
	a->max = max;
	a->Que = calloc(max, sizeof(int));
}

int is_empty(que *a)
{
	return a->count == 0;
}

int is_full(que *a)
{
	return a->count >= a->max;
}

int enque(que *a, int input)
{
	if (a->count >= a->max)
	{
		printf("큐가 꽉찼습니다");
		exit(1);
	}
	else
	{
		a->count++;
		a->Que[a->rear++] = input;
		if (a->rear == a->max)
		{
			a->rear = 0;
		}
		return 0;
	}
}

int deque(que *a)
{
	if (a->count <= 0)
	{
		printf("큐가 비어있습니다");
		exit(1);
	}
	else
	{
		a->count--;
		a->Que[a->front++];
		if (a->front == a->max)
		{
			a->front = 0;
		}
		return 0;
	}
}

void display(que *a)
{
	int count;
	if (a->count == 0)
	{
		printf("큐가 비어있습니다.\n");
		return 0;
	}
	for (count = 0; count < a->count; count++)
	{
		printf("%2d", a->Que[(count + a->front)%a->max]);
	}
	printf("\n");
}

int front(que *a)
{
	return a->front;
}

int rear(que *a)
{
	return a->rear;
}