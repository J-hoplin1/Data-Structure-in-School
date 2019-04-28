#include<stdio.h>
#include<stdlib.h>
#include"LL.h"

int main()
{
	Node *first;
	int size;

	//리스트 초기화
	init(&first);
	printf("-------------------------------\n");
	printf("리스트에 값을 넣어 리스트 생성\n");
	add_last(&first, "ㄱ");
	add_last(&first, "ㄴ");
	add_first(&first,"ㄷ");
	add_first(&first, "ㄹ");
	//출력 : 1차
	display(&first);
	printf("-------------------------------\n");
	printf("\n");
	printf("-------------------------------\n");
	printf("add_at함수 테스트\n");
	add_at(&first, 2, "ㅁ");
	display(&first);
	printf("-------------------------------");
	printf("\n");
	printf("-------------------------------\n");
	printf("replace함수 테스트\n");
	replace(&first, 2, "hello");
	display(&first);
	printf("-------------------------------\n");
	printf("\n");
	printf("-------------------------------\n");
	printf("get_length함수 테스트\n");
	get_length(&first);
	printf("-------------------------------\n");
	printf("\n");
	printf("-------------------------------\n");
	printf("is_in_list함수 테스트");
	is_in_list(&first, "hello");
	printf("-------------------------------\n");
	printf("\n");
	printf("-------------------------------\n");
	printf("delete_at함수 테스트 : 삭제값은 NULL로 대체\n");
	delete_at(&first, 3);
	display(&first);
	printf("-------------------------------\n");
	printf("\n");
}