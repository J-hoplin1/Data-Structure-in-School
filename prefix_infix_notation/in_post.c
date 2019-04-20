#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
#include "stack_1.h"

int sign(char ck)
{
	switch (ck)
	{
	case'(':
	case')':
		return 0;
	case'+':
	case'-':
		return 1;
	case'*':
	case'/':
	case'%':
		return 2;
	}
	return -1;
}

void in_post(char input[],int length)
{
	Stack a;

	Stack_1 b;

	//count number of bracket and make subtraction from total length of input(parameter length)
	int count_bracket = 0;
	
	//Stack_1 header
	init_1(&b, length);

	//variable in use
	int count;
	char ck,ck1;

	init(&a, length);
	printf("후위수식 변환결과 : ");
	for (count = 0; count < strlen(input); count++)
	{
		ck = input[count];
		switch (ck)
		{
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
			while ((is_empty(&a) == 0) && (sign(ck) <= sign(peek(&a))))
			{
				char op = pop(&a);
				printf("%c", op);
				push_1(&b, op);
			}
			push(&a, ck);
			break;
		case'(':
			push(&a, ck);
			count_bracket++;
			break;
		case')':
			ck1 = pop(&a);
			while (ck1 != '(')
			{
				printf("%c", ck1);
				push_1(&b, ck1);
				ck1 = pop(&a);
			}
			count_bracket++;
			break;
		default:
			printf("%c", ck);
			push_1(&b, ck);
			break;
		}
	}
	while (is_empty(&a) == 0)
	{
		char ui = pop(&a);
		printf("%c", ui);
		push_1(&b, ui);
	}
	printf("\n");
	print_1(&b);
	in_post_cal(&b, length-count_bracket);
}