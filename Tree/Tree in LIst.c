#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include "tree.h"
#define NULL -1

int main()
{
	//Declare tree's root node and que
	tree *root;

	//Set Level and Size of Que
	int level = 0;
	int max_node = 1;
	int standard_level_node = 1;
	int count = 0;
	printf("Maximum Level of Tree(This Value is not Set as Default, just base setting for size of Queue) : ");
	scanf_s("%d", &level);

	for (count = 2; count <= level; count++)
	{
		standard_level_node *= 2;
		max_node += standard_level_node;
	}

	root = init_tree(&root); //Initialize Tree

	//Add node to Tree
	printf("========Inorder, Preorder, Postorder Test========\n");
	root = add_node(root, 10);
	root = add_node(root, 20);
	root = add_node(root, 30);
	root = add_node(root, 40);
	root = add_node(root, 15);
	root = add_node(root, 5);
	root = add_node(root, 3);
	root = add_node(root, 6);
	root = add_node(root, 1);
	root = add_node(root, 4);
	printf("Inorder Test : ");
	inorder(root);
	printf("\n");
	printf("Preorder Test : ");
	preorder(root);
	printf("\n");
	printf("Postorder Test : ");
	postorder(root);
	printf("\n");
	printf("==================================================\n");
	printf("======== Level Traversal Test ========\n");
}