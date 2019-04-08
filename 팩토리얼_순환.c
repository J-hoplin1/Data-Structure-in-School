#include<stdio.h>
//팩토리얼 - 순환
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
	printf("팩토리얼 연산을 수행할 숫자를 입력해 주세요 : ");
	scanf_s("%d", &input);
	result = fact(input);
	printf("%d! 값은 %d입니다.\n", input, result);
	return 0;
}