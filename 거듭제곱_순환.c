#include<stdio.h>

int multi(int num, int sum)
{
	if (sum == 0)
	{
		return 1;
	}
	else if (sum % 2 != 0)
	{
		return num * multi(num * num, (sum - 1) / 2);
	}
	else
	{
		return multi(num * num, sum / 2);
	}
}
int main()
{
	int input;
	int num;
	int sum;
	printf("����, ������ : ");
	scanf_s("%d %d", &num, &sum);
	printf("�ŵ����� ��� : %d\n", multi(num, sum));
	return 0;
}