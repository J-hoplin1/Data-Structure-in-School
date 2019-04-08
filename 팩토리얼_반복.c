#include<stdio.h>
//팩토리얼 - 반복
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
	printf("팩토리얼 연산을 할 값을 입력해 주세요 : ");
	scanf_s("%d", &input);

	result = fact(input);
	printf("%d!의 값은 %d입니다.\n", input, result);
}