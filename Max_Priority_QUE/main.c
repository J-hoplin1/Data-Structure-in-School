#include<stdio.h>
#include<memory.h>
#include<stdio.h>
#include"heap.h"
#include<malloc.h>

int main()
{
	heap *tree;
	int size_tree;
	int count;
	int node = 1;
	int next_node = 1;
	printf("Max level of Tree : ");
	scanf_s("%d", &size_tree);
	for (count = 1; count < size_tree; count++)
	{
		next_node = next_node * 2;
		node += next_node;
	}
	tree = create_heap(&tree);
	init(tree, node + 1); // var node : max node according to max level
	//printf("%d\n", _msize(tree->arr)); //_msize : 동적할당된 메모리의 크기 구할때 사용
	insert_node(tree, 1);
	insert_node(tree, 2);
	insert_node(tree, 3);
	insert_node(tree, 4);
	insert_node(tree, 5);
	insert_node(tree, 6);
	insert_node(tree, 7);
	print_que(tree);
	delete_node(tree);
	print_que(tree);
	return 0;
}