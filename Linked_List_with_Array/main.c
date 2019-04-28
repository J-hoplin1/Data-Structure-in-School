#include<stdio.h>
#include<stdlib.h>
#include"LL.h"

int main()
{
	list li;
	init(&li);

	printf("-----------------------\n");
	printf("기본적인 리스트 생성 테스트\n");
	add_last(&li, "마요네즈");
	add_last(&li, "빵");
	add_last(&li, "치즈");
	add_last(&li, "우유");
	add_first(&li, "apple");
	add_first(&li, "Leech");
	add_in(&li, 2, "orange");
	add_in(&li, 4, "pineapple");
	print_all(&li);
	printf("-----------------------\n");
	printf("\n");
	printf("-----------------------\n");
	printf("delete_at함수 테스트\n");
	delete_at(&li, 3);
	delete_at(&li, 5);
	print_all(&li);
	printf("-----------------------\n");
	printf("\n");
	printf("-----------------------\n");
	printf("is_in_list테스트\n");
	is_in_list(&li, "우유");
	is_in_list(&li, "qq");
	printf("-----------------------\n");
	printf("\n");
	printf("-----------------------\n");
	printf("repalce함수 테스트\n");
	replace(&li, 2, "hello");
	print_all(&li);
	printf("-----------------------\n");
	printf("\n");
	printf("-----------------------\n");
	printf("length함수 테스트");
	length(&li);
	printf("-----------------------\n");
}