#include<stdio.h>
#include<stdlib.h>
#include "Deque.h"

void init(deque *a, int max)
{
	a->max = max;
	a->front = a->rear = 0;
	a->count = 1;//��ȭ���� ������ ���ؼ� ��ĭ�� ����ιǷ�
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
		printf("��ť�� ��� á���ϴ�\n");
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
		printf("��ť�� ��� á���ϴ�\n");
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
		printf("��ť�� ����ֽ��ϴ�.\n");
		return 0;
	}
	int count;
	for (count = 0; count < a->count - 1; count++)
	//��ť�� ��Ұ����� ���� count������ ���� ��ȭ���� ������ ���� 1�� �ʱ�ȭ�� �����Ƿ� ��ü ��Ұ������� -1�� ���־�� ���� ��� ������ ������ �Ǵ°��̴�.
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
		printf("��ť�� ����ֽ��ϴ�\n");
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
		printf("��ť�� ����ֽ��ϴ�\n");
		return 0;
	}
	else
	{
		a->count--;
		a->front = ((a->front + 1) % a->max);
	}
}