#include<stdio.h>
//�Ǻ���ġ ��ȯ

int fibon(int input)
{
	if (input == 0)
	{
		return 0;
	}
	if (input == 1)
	{
		return 1;
	}
	else
	{
		return (fibon(input - 1) + fibon(input - 2));
	}
}
int main()
{
	int input;
	int count = 0;
	printf("�Ǻ���ġ ���� ���� : ");
	scanf_s("%d", &input);
	for (; count < input; count++)
	{
		printf("%3d", fibon(count));
	}
	printf("\n");
	return 0;
}