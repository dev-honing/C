#include <stdio.h>

int main(void) {
	// 버스 탑승객을 학생과 일반인으로 구분한다.
	// 일반인의 기준은 20세 이상이다.
	
	// 버스 탑승객 프로그램 작성
	printf("당신의 나이를 입력하세요.");
	int age;
	scanf_s("%d", &age);

	if (age >= 20) {
		printf("당신은 일반인입니다.\n");
	}
	else {
		printf("당신은 학생입니다.\n");
	}


	return 0;
}