#include<stdio.h>
#include<stdlib.h>
#include "Deque.h"

int main()
{
	deque a;
	init(&a, 5);

	add_front(&a, 1);
	add_front(&a, 2);
	add_front(&a, 3);

	display(&a);
	del_rear(&a);
	display(&a);
	del_rear(&a);
	display(&a);
	del_rear(&a);
	display(&a);
	return 0;
}