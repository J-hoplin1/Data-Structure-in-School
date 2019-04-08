#include<stdio.h>
#define Size_arr 100

typedef struct {
	int row;//��
	int col;//��
	int value;//��
}arr;

typedef struct {
	arr array[Size_arr];
	int row;
	int col;
	int mount;
}total;

typedef struct {
	int A;
	int B;
	int C;
}Val_C;

total set_A(int arr_size, int mount)
{
	total new;
	new.row = arr_size;
	new.col = arr_size;
	new.mount = mount;
	int count,a,b,c;
	for (count = 0; count < mount; count++)
	{
		printf("���A�� ��Ұ��� �Է��Ͻÿ� : ");
		scanf_s("%d %d %d", &a, &b, &c);
		new.array[count].row = a;
		new.array[count].col = b;
		new.array[count].value = c;
	}
	return new;
}

total set_B(int arr_size, int mount)
{
	total new_1;
	new_1.row = arr_size;
	new_1.col = arr_size;
	new_1.mount = mount;
	int count, a, b, c;
	for (count = 0; count < mount; count++)
	{
		printf("���B�� ��Ұ��� �Է��Ͻÿ� : ");
		scanf_s("%d %d %d", &a, &b, &c);
		new_1.array[count].row = a;
		new_1.array[count].col = b;
		new_1.array[count].value = c;
	}
	return new_1;
}

void set_c(total ex, int mount)
{
	Val_C new_2;
	new_2.A = 0;
	new_2.B = 0;
	new_2.C = 0;
	int count;
	for (count = 0; count < mount; count++)
	{
		if (ex.array[count].col == 0)
		{
			new_2.A += ex.array[count].value;
		}
		else if (ex.array[count].col == 1)
		{
			new_2.B += ex.array[count].value;
		}
		else
		{
			new_2.C += ex.array[count].value;
		}
	}
	printf("%d %d %d\n", new_2.A, new_2.B, new_2.C);
}
int main()
{
	int size_arr,mount_A = 0,mount_B = 0;
	total A;
	total B;
	printf("����� ũ�⸦ �Է��ϼ��� : ");
	scanf_s("%d", &size_arr);

	printf("��� A�� ��Ҽ����� �Է��ϼ��� :");
	scanf_s("%d", &mount_A);
	A = set_A(size_arr, mount_A);

	printf("��� B�� ��Ҽ����� �Է��ϼ��� :");
	scanf_s("%d", &mount_B);
	B = set_B(size_arr, mount_B);

	printf("��� C�� ���� ������ �����ϴ�.\n");
	set_c(A, mount_A);
	set_c(B, mount_B);
	return 0;
}