#include<stdio.h>
//���丮�� - ��ȯ
int fact(int input)
{
	if (input == 1)
	{
		return 1;
	}
	else
	{
		return input * fact(input - 1);
	}
}

int main()
{
	int input, result = 0;
	printf("���丮�� ������ ������ ���ڸ� �Է��� �ּ��� : ");
	scanf_s("%d", &input);
	result = fact(input);
	printf("%d! ���� %d�Դϴ�.\n", input, result);
	return 0;
}