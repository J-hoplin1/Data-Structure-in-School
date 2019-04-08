#include<stdio.h>
#define row 3
#define col 3

void trans_arr(int arr[row][col], int arr2[row][col])
{
	int count, count2;
	for (count = 0; count < row; count++)
	{
		for (count2 = 0; count2 < col; count2++)
		{
			arr2[count2][count] = arr[count][count2];
		}
	}
}
void print_arr(int arr[row][col])
{
	int count;
	int count2;
	printf("==================================\n");
	for (count = 0; count < row; count++)
	{
		for (count2 = 0; count2 < col; count2++)
		{
			printf("%3d", arr[count][count2]);
		}
		printf("\n");
	}
	printf("===================================\n");
}
int main()
{
	int arr[row][col] = { {2,3,0},
	{8,9,1},
	{7,0,5} };
	int arr2[row][col];
	trans_arr(arr, arr2);
	print_arr(arr);
	print_arr(arr2);
	return 0;
}