#include<stdio.h>
//피보나치 반복
int fibo(int input)
{
	int count = 2;
	int result = 0;
	int first = 0;
	int second = 1;
	if (input == 1)
	{
		return 1;
	}
	if (input == 0)
	{
		return 0;
	}
	for (; count <= input; count++)
	{
		result = first + second;
		first = result;
		second = result;
	}
	return result;
}
int main()
{
	int input;
	printf("연산할 피보나치수 입력 : ");
	scanf_s("%d", &input);

	for (int count = 0; count < input; count++)
	{
		printf("%3d",fibo(count));
	}
	printf("\n");
	return 0;
}