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

	return 0;
}

/* 콘솔에 출력된 결과
Double로 표현한 파이 값 : 3.14159265358979311600
Float로 표현한 파이 값 : 3.14159274101257324219

Double로 변환한 Float 값 : 3.14159274101257324219
Float로 변환된 Double 값 : 3.14159274101257324219

Double과 Float 값의 차이 : -0.00000008742278012619
*/