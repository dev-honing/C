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
	
	/*
	// for문으로 반복하기
	for (int i = 1; i <= 5; i++) {
		printf("Hello, C! %d\n", i);
	}
	*/

	/*
	// while문으로 반복하기 - 괄호에 조건을 작성
	int i = 1;
	while (i <= 5) {
		printf("Hello, C! %d\n", i++);
	}
	*/

	/*
	// do while문
	// do { } while (조건);
	int i = 1;
	do {
		printf("Hello, C! %d\n", i++);
	} while (i <= 5);
	*/

	/*
	// 이중 반복문
	for (int i = 1; i <= 3; i++) {
		printf("첫번째 반복문: %d\n", i);
		for (int j = 1; j <= 5; j++) {
			printf("    두번째 반복문: %d\n", j);
		}
	}
	*/

	// 구구단 만들기 - 2단 ~ 9단
	// 2 x 1 = 2
	// 2 x 2 = 4
	// .
	// .
	// .
	// 9 x 9 = 81

	/*
	for (int i = 2; i <= 9; i++) {
		printf("==========\n");
		printf("%d단 시작!\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
	*/

	// 피라미드 쌓기 - 쌓일수록 별의 개수가 증가하도록 작성
	/*
	*     1 
	**    2
	***   3
	****  4
	***** 5
	*/

	// 꼭대기: n * 1
	// 두번째로 높은: (n-1) * n, (n-1) * (n-1), (n-1) * (n-2) ...처럼 뒤쪽이 점점 작아짐
	// 세번째로 높은: (n-2) * n, (n-2) * (n-1), ...처럼 뒤쪽이 점점 작아짐
	// 최하층: n개를 찍어야 함

	// Q. 5층짜리 별 피라미드를 찍어보자
	// 최상층
	printf("* 1\n");

	// 최상층 - 1
	printf("** 2\n");

	// 최상층 - 2
	printf("*** 3\n");

	// 최상층 - 3
	printf("**** 4\n");

	// 최상층 - 4 
	printf("***** 5\n");
	

	return 0;
}