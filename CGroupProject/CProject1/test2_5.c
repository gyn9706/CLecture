#include <stdio.h>

int main() {
	int num, num2, res;

	printf("두 정수값을 입력하세요 :");
	scanf_s("%d%d", &num, &num2);
	res = num + num2;
	printf("두 정수의 합은 %d 입니다.\n", res);

	return 0;
}