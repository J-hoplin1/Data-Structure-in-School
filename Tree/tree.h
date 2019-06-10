#pragma once
#ifndef ___tree
#define ___tree


typedef struct tree {
	int data;
	struct tree *left;
	struct tree *right;
}tree;
 

tree * init_tree(tree *root);

tree *add_node(tree *root, int data);

int node_count(tree *def);

void inorder(tree *root);

void preorder(tree *root);

void postorder(tree *root);
#endif // !___tree
