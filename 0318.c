#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 10000

unsigned int randr(unsigned int min, unsigned int max) {
	double scaled = (double)rand() / RAND_MAX;
	return (max - min + 1)*scaled + min;
}

void do_sleep(clock_t wait) {
	clock_t goal;
	goal = wait + clock();
	while (goal > clock())
		;
}

void main()
{
	int index;
	int arr[size];
	int input;
	float dur;
	clock_t start, stop;
	start = clock();
	srand(time(NULL)); //�Ź� ���� �ٸ� ������ �����ϱ� ���ؼ�
	for (index = 0; index < size; index++)
	{
		arr[index] = randr(1, size);
	}
	input = rand() % size + 1;
	printf("ã������ ���� : %d\n", input);
	for (index = 0; index < size; index++)
	{
		do_sleep((clock_t)1);
		if (arr[index] == input)
		{
			break;
		}
		else
		{
			continue;
		}
	}
	stop = clock();
	dur = (float)(stop - start)/CLOCKS_PER_SEC;
	printf("����ð��� %fms�Դϴ�.", dur*1000);
}