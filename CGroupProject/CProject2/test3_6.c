#include <stdio.h>

int main() {
	int num1, num2;
	//double div;

	printf("두 정수를 입력하세요 :");
	scanf_s("%d%d", &num1, &num2);
	//div = (double)num1 / num2;
	//printf("나눗셈 연산식은 \"%d / %d = %lf\"입니다.",num1,num2,div);

	printf("나눗셈 연산식은 \"%d / %d = %lf\"입니다.", num1, num2, (double)num1 / num2);

	return 0;
}