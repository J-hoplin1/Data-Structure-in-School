#include<stdio.h>
#include<stdlib.h>
#include "queue_1.h"

int main()
{
	que a;
	int count;

	init(&a, 5);
	
	//1-1
	enque(&a, 3);
	enque(&a, 4);
	enque(&a, 5);
	display(&a);
	deque(&a);
	display(&a);
	deque(&a);
	display(&a);
	deque(&a);
	display(&a);


	printf("\n");
	printf("\n");

	//1-2
	for (count = 0; count < 100; count++)
	{
		printf("Cycle No.%d\n", count + 1);
		enque(&a,10);
		enque(&a,15);
		deque(&a);
		deque(&a);
		printf("%d\n", front(&a));
		printf("%d\n", rear(&a));
		printf("==========\n");
	}
	return 0;
}