#include <stdio.h>

int main(void) {
	int n = 50;
	int* p = &n; // p에 n의 주소를 저장(p는 n의 주소를 가리키는 포인터 변수)
	printf("%p\n", p);
	return 0;
}

// 출력된 결과 확인
// 000000000061FE14