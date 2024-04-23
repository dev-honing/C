#include <stdio.h>

int main(void) {
	int n = 50;
	printf("%i\n", &n); // &는 C에서 메모리의 주소를 나타내는 연산자
	printf("---\n");
	printf("%i\n", &n); // %i는 C에서 10진수 정수로 출력하기 위한 형식 지정자
	printf("%p\n", &n); // %p는 C에서 포인터 주소를 출력하기 위한 형식 지정자(16진수)
	return 0;
}

// 출력된 결과 확인
// 6422044
// ---
// 6422044
// 000000000061FE1C