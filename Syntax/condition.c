#include <stdio.h>

int main(void) {
	// ���� ž�°��� �л��� �Ϲ������� �����Ѵ�.
	// �Ϲ����� ������ 20�� �̻��̴�.
	
	// ���� ž�°� ���α׷� �ۼ�
	printf("����� ���̸� �Է��ϼ���.");
	int age;
	scanf_s("%d", &age);

	if (age >= 20) {
		printf("����� �Ϲ����Դϴ�.\n");
	}
	else {
		printf("����� �л��Դϴ�.\n");
	}


	return 0;
}