#include <stdio.h>
int main(void) {
	/* 
	* 여러 줄 주석
	// printf
	printf("Hello, World!\n");

	// 정수형 변수
	int age = 26;
	printf("나이는 %d\n", age);
	
	*/
	// printf("1\n");
	// printf("2\n"); 한 줄 주석
	// printf("3\n");

	/*
	// 실수형 변수
	double pi_double = 3.141592653589793;
	float pi_float = 3.141592653589793f; // 'f' suffix는 float를 나타냄

	// 각 자료형의 파이 값 출력(소수점 이하 20자리)
	printf("Double로 표현한 파이 값: %.20lf\n", pi_double);
	printf("Float로 표현한 파이 값: %.20f\n\n", pi_float);

	// 정밀도의 비교
	double double_to_float = (double)pi_float; // float를 double로 변환하여 저장
	float float_to_double = (float)pi_double; // double을 float로 변환하여 저장

	// 변환된 값을 출력하여 다시 비교
	printf("Double로 변환한 Float 값: %.20lf\n", double_to_float);
	printf("Float로 변환된 Double 값: %.20f\n\n", float_to_double);

	// double과 float 값의 차이를 계산
	double diff = pi_double - pi_float;

	// 차이를 출력
	printf("Double과 Float 값의 차이: %.20lf\n", diff);
	*/
	
	/*
	// 상수: 변하지 않는 값
	// 상수 선언
	const int BIRTH = 1997; // 상수(constant)를 의미하는 키워드이며, 주로 대문자로 쓴다.
	printf("출생연도는 %d\n", BIRTH);
	
	// 상수 변경(불가능)
	BIRTH = 2000; // 상수는 다른 값으로 변경할 수 없다.
	*/

	/*
	// printf
	// 연산
	int add = 3 + 7; // 10
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7);
	*/

	// scanf - 키보드 입력을 받아서 저장
	/*
	// 하나의 값 입력받기
	int input;
	printf("값을 입력하세요: ");
	scanf_s("%d", &input);
	printf("입력값: %d\n", input);
	*/

	/*
	// 여러 개의 값 입력받기
	int one, two, three;
	printf("3개의 정수를 입력하세요: ");
	scanf_s("%d %d %d", &one, &two, &three);
	
	printf("첫번째로 입력한 값: %d\n", one);
	printf("두번째로 입력한 값: %d\n", two);
	printf("세번째로 입력한 값: %d\n", three);
	*/

	// 문자형(하나의 글자), 문자열(여러 개의 글자)
	// 문자형 선언과 출력
	char a = 'A';
	printf("%c\n", a);

	// 문자열 선언과 출력
	char greet[256] = "Hello!"; // C에서 문자열은 char형 배열로 취급
	printf("%s\n", greet);

	return 0;
}
