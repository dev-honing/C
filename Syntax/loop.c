#include <stdio.h>

int main(void) {

	// 증감 연산자
	// ++의 의미
	int a = 10;
	printf("a는 %d\n", a); // a는 10
	// a++
	a++;
	printf("a는 %d\n", a); // a는 11
	a++;
	printf("a는 %d\n", a); // a는 12
	a++;
	printf("a는 %d\n", a); // a는 13

	// ++b
	int b = 20;
	// ++b는 b = b+1을 의미
	printf("b는 %d\n", ++b); // b는 21
	printf("b는 %d\n", b++); // b는 21
	printf("b는 %d\n", b); // b는 22

	return 0;
}