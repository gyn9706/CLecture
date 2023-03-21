#include <stdio.h>

int main() {
	int num;
	//int num2;
	//int num3;
	int num4;

	printf("정수값 하나를 입력하세요:");
	scanf_s("%d", &num);
	printf("입력 받은 정수값은%d입니다\n", num);

	//scanf_s("정수값 하나를 입력하세요: %d", &num2);
	//printf("%d", num2);

	/*
	printf("정수값 하나를 입력하세요: ");
	scanf_s("%d\n", &num3);
	printf("%d", num3);
	*/

	printf("정수값 두개를 입력하세요:");
	scanf_s("%d%d", &num, &num4);
	printf("입력 받은 정수값은 %d %d입니다\n", num, num4);

	return 0;
}