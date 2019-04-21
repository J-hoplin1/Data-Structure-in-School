#pragma once
#ifndef ___queue
#define ___queue

typedef struct
{
	int front; //front
	int rear; //rear
	int max; //max size of queue
	int count; // total amount of data in queue
	int *Que;
}que;

void init(que *a, int max);

int is_empty(que *a);

int is_full(que *a);

int enque(que *a, int input);

int deque(que *a);

void display(que *a);

int front(que *a);

int rear(que *a);
#endif // !___queue
 