#include <stdio.h>

int main(void) {
	/*
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
	*/

	/*
	// Hello, C!를 5번 출력해보기
	int i = 1;
	printf("Hello, C! %d\n", i++);
	printf("Hello, C! %d\n", i++);
	printf("Hello, C! %d\n", i++);
	printf("Hello, C! %d\n", i++);
	printf("Hello, C! %d\n", i++);
	*/
	
	// for문으로 반복하기
	for (int i = 1; i <= 5; i++) {
		printf("Hello, C! %d\n", i);
	}

	return 0;
}