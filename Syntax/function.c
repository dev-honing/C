#include <stdio.h>

int sum(int x, int y);

int main(void)
{
	int a = 2, b = 5, c = 0;
	printf("sum() 호출 전의 a = %d, b = %d, c = %d\n", a, b, c); // 1번째: a = 2, b = 5, c = 0

	c = sum(a, b);
	printf("sum() 호출 후의 a = %d, b = %d, c = %d\n", a, b, c); // 3번째: a = 2, b = 5, c = 14

	return 0;
}

int sum(int a, int b)
{

	a = a + 2;
	b = b + 5;

	printf("sum() 함수 내의 a = %d, b = %d, a + b = %d\n", a, b, a + b); // 2번째: a = 4, b = 10, a + b = 14
	return (a + b);
}
