#include<stdio.h>
#include<stdlib.h>
#define size_tree 8

void print_tree(int *tree)
{
	int count = 0;
	int root_index = 1;
	int tree_level = 1;
	int next_level_node_count = 2;
	printf("Tree level %d : ", tree_level);
	for (count = root_index; count <  size_tree; count++)
	{
		if (count == next_level_node_count)
		{
			next_level_node_count *= 2;
			tree_level += 1;
			printf("\n");
			printf("Tree level %d : ", tree_level);
		}
		printf("%3d", tree[count]);
	}
	printf("\n");
}
int main()
{
	int tree[size_tree] = {NULL,8,3,9,2,1,4,5};
	//Ʈ���� �迭�� ��Ÿ���� ���� 0���� ������ �ʴ´�
	//�⺻������ �ϳ��� ������ ���ʿ��� �����ʼ����� ��忡 ��ȣ�� �ο��ϱ� ������ �־��� Ʈ�����¸� �迭�� �ʱ�ȭ�Ҷ� �ش� ��Ģ�� �ؼ��Ѵ�.
	//�־��� ���ô� ��ȭ ����Ʈ���̴�.
	print_tree(tree);
	return 0;
}