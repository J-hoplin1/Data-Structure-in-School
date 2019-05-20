#include<stdio.h>
#include<stdlib.h>
#include "LL.h"


int main()
{
	node  *qw;
	init(&qw);
	printf("Generate Linked LIst\n");
	add_node(&qw, 1);
	add_node(&qw, 2);
	add_node(&qw, 3);
	add_node(&qw, 4);
	add_node(&qw, 5);
	add_node(&qw, 6);
	add_node(&qw, 7);
	add_node(&qw, 8);
	add_node(&qw, 9);
	add_node(&qw, 10);
	printf("\n");
	printf("Print List\n");
	display(&qw);
	printf("\n");
	printf("Remove List from 1 to 10\n");
	remove_node(&qw);
	remove_node(&qw);
	remove_node(&qw);
	remove_node(&qw);
	remove_node(&qw);
	remove_node(&qw);
	remove_node(&qw);
	remove_node(&qw);
	remove_node(&qw);
	remove_node(&qw);
	display(&qw);
	printf("\n");
	printf("Test Insert Function\n");
	printf("Insert 4, 2 at place number 7 and 9 each\n");
	add_node(&qw, 10);
	add_node(&qw, 9);
	add_node(&qw, 8);
	add_node(&qw, 7);
	add_node(&qw, 6);
	add_node(&qw, 5);
	add_node(&qw, 3);
	add_node(&qw, 1);
	insert(&qw, 7, 4);
	insert(&qw, 9, 2);
	display(&qw);
}