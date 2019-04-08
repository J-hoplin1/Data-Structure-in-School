#include<stdio.h>

void hanoi(int floor, char A,char B, char C)
{
	if (floor == 1)
	{
		printf("원판 1를 %c에서 %c로 이동했습니다.\n", A, C);
	}
	else
	{
		hanoi(floor - 1, A, C, B);
		printf("원판 %d를 %c에서 %c로 이동했습니다.\n", floor,A, C);
		hanoi(floor - 1, B, A, C);
	}
} 
int main()
{
	int input;
	char A = 'A', B = 'B', C = 'C';
	printf("하노이의 탑 :");
	scanf_s("%d", &input);
	hanoi(input, A, B, C);
	return 0;
}