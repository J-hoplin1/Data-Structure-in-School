#include<stdio.h>
//���丮�� - �ݺ�
int fact(int input)
{
	int result = 1;
	int count = 1;
	for (; count <= input; count++)
	{
		result *= count;
	}
	return result;
}
int main()
{
	int result, input;
	printf("���丮�� ������ �� ���� �Է��� �ּ��� : ");
	scanf_s("%d", &input);

	result = fact(input);
	printf("%d!�� ���� %d�Դϴ�.\n", input, result);
}