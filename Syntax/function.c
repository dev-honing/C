#include <stdio.h>

int sum(int x, int y);

int main(void)
{
	int a = 2, b = 5, c = 0;
	printf("sum() ȣ�� ���� a = %d, b = %d, c = %d\n", a, b, c); // 1��°: a = 2, b = 5, c = 0

	c = sum(a, b);
	printf("sum() ȣ�� ���� a = %d, b = %d, c = %d\n", a, b, c); // 3��°: a = 2, b = 5, c = 14

	return 0;
}

int sum(int a, int b)
{

	a = a + 2;
	b = b + 5;

	printf("sum() �Լ� ���� a = %d, b = %d, a + b = %d\n", a, b, a + b); // 2��°: a = 4, b = 10, a + b = 14
	return (a + b);
}
