#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"stack.h"

int main()
{
	char input[100];
	printf("���� ���� �Է� : ");
	gets(input);
	in_post(input, strlen(input));
	return 0;
}