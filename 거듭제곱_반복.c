#include<stdio.h>

int multi(int num, int sum)
{
	int count = 0;
	int result = 1;
	for (; count < sum; count++)
	{
		result *= num;
	}
	return result;
}

int main()
{
	int num, sum;
	printf("¼ıÀÚ, Á¦°ö ¼ö : ");
	scanf_s("%d %d", &num, &sum);
	printf("°ÅµìÁ¦°ö°ª : %d\n", multi(num, sum));
	return 0;
}