#include <stdio.h>

int main(void) {
	int x = 1;
	int y = 200;
	int z = 20240423;

	int* p1 = &x; // x의 메모리 주소를 포인터 변수 p1에 저장
	printf("현재 p1이 가리키는 변수의 값: %d\n", *p1);
	// 현재 p1이 가리키는 변수의 값: 1

	x = x + 1; // x를 1 증가
	printf("현재 p1이 가리키는 변수의 값: %d\n", *p1);
	// 현재 p1이 가리키는 변수의 값: 2

	p1 = p1 + 1; // p1을 1 증가
	printf("현재 p1이 가리키는 변수의 값: %d\n", *p1);
	// 현재 p1이 가리키는 변수의 값: 6422032
	return 0;
}