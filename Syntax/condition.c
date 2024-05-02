#include <stdio.h>

int main(void) {
	/*
	// 버스 탑승객을 나이에 맞게 분기하여 콘솔 출력하기
	
	// 나이를 입력받기
	printf("당신의 나이를 입력하세요.");
	int age;
	scanf_s("%d", &age);
	*/

	/*
	// 20세를 기준으로 학생과 일반인을 구분
	if (age >= 20) {
		printf("당신은 일반인입니다.\n");
	}
	else {
		printf("당신은 학생입니다.\n");
	}
	*/

	/*
	// 초등학생(8~13) / 중학생(14~16) / 고등학생(17~19)로 나누기
	if (age >= 8 && age <= 13) { // 8세 이상, 13세 이하
		printf("당신은 초등학생입니다.\n");
	}
	else if (age >= 14 && age <= 16) { // 14세 이상, 16세 이하
		printf("당신은 중학생입니다.\n");
	}
	else if (age >= 17 && age <= 19) { // 17세 이상, 19세 이하
		printf("당신은 고등학생입니다.\n");
	}
	else {
		printf("당신은 일반인입니다.\n"); // 나머지는 일반인으로 처리
	}
	*/
	
	// break / continue
	// 1번부터 30번 학생까지 있다고 가정하고 다음 시간에는 1~5번까지 조별발표를 하겠습니다.
	for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("%d번인 당신은 조별발표 대상자가 아니므로 집에 가셔도 좋습니다.\n", i);
			break;
		}
		printf("%d번인 당신은 조별발표 대상자이므로 오늘 발표를 준비해주세요.\n", i);
	}

	return 0;
}