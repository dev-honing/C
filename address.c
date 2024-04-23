#include <stdio.h>

int main(void) {
	int n = 50;
	printf("%i\n", *&n); // *은 C에서 역참조 연산자이므로 *&n은 n과 같다.
	return 0;
}

// 출력된 결과 확인
// 50
// 위 코드에서 n은 50이라는 값을 가지고 있고, &n은 n의 주소를 나타낸다.