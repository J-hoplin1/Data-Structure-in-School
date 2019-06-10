#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include "tree.h"


tree *init_tree(tree *root)
{
	root = NULL;
	return root;
}

tree *add_node(tree *root, int data)
{
	//new node for tree
	tree *new_node = (tree*)malloc(sizeof(tree));
	new_node->data = data;
	new_node->left = NULL;
	new_node->right = NULL;

	if (root == NULL)
	{
		root = new_node;
	}
	else
	{
		if (data < root->data)
		{
			root->left = add_node(root->left, data);
		}
		else if (data > root->data)
		{
			root->right = add_node(root->right, data);
		}
	}
	return root;
}

void inorder(tree *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%3d", root->data);
		inorder(root->right);
	}
}

void preorder(tree * root)
{
	if (root != NULL)
	{
		printf("%3d", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(tree *root)
{
	if (root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%3d", root->data);
	}
}

//functuon for Queue



