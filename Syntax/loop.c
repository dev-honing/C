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

	// Q. 피라미드 쌓기
	/*
	*     1 
	**    2
	***   3
	****  4
	***** 5
	*/

	/*
	// A. 이중 반복문으로 접근
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	*/

	/*
	// 피라미드 모양 뒤집기
	for (int i = 1; i <= 5; i++) {
		for (int j = i; j <= 5-1; j++) {
			printf(" ");
		}
		for (int k = 1; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	*/

	// 입력받은 숫자에 맞게, 피라미드를 출력하는 프로그램을 작성하시오.
	int floor;
	printf("피라미드를 몇 층으로 쌓을까요?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}