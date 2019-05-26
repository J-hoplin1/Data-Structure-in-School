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
	//트리를 배열로 나타낼때 색인 0번은 사용되지 않는다
	//기본적으로 하나의 레벨당 왼쪽에서 오른쪽순으로 노드에 번호를 부여하기 때문에 주어진 트리형태를 배열로 초기화할때 해당 규칙을 준수한다.
	//주어진 예시는 포화 이진트리이다.
	print_tree(tree);
	return 0;
}