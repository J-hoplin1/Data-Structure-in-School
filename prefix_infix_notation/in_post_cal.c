#include<stdio.h>
#include<stdlib.h>
#include "stack_1.h"
#include "stack_2.h"

void in_post_cal(Stack_1 *b, int length)
{
	Stack_2 c;
	init_2(&c, length);
	int count = 0;
	int data;
	int d1, d2;
	char ck;
	for (; count < length; count++)
	{
		ck = b->stack[count];
		if (ck != '+' && ck != '-' && ck != '*' && ck != '/' && ck != '%')
		{
			data = ck - 48;
			push_2(&c, data);
		}
		else
		{
			d1 = pop_2(&c);
			d2 = pop_2(&c);
			switch (ck)
			{
			case'+':
				push_2(&c, d2 + d1);
				break;
			case'-':
				push_2(&c, d2 - d1);
				break;
			case'*':
				push_2(&c, d2 * d1);
				break;
			case'/':
				push_2(&c, d2 / d1);
				break;
			case'%':
				push_2(&c, d2 % d1);
				break;
			}
		}
	}
	printf("°á°ú : %d",pop_2(&c));
	printf("\n");
}