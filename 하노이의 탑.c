#include<stdio.h>

void hanoi(int floor, char A,char B, char C)
{
	if (floor == 1)
	{
		printf("���� 1�� %c���� %c�� �̵��߽��ϴ�.\n", A, C);
	}
	else
	{
		hanoi(floor - 1, A, C, B);
		printf("���� %d�� %c���� %c�� �̵��߽��ϴ�.\n", floor,A, C);
		hanoi(floor - 1, B, A, C);
	}
} 
int main()
{
	int input;
	char A = 'A', B = 'B', C = 'C';
	printf("�ϳ����� ž :");
	scanf_s("%d", &input);
	hanoi(input, A, B, C);
	return 0;
}