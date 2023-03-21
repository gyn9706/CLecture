#include <stdio.h>

int main() {
	int a, b, res;

	printf("두 정수를 입력하세요 :");
	scanf_s("%d%d", &a, &b);

	if (b != 0) {
		res = a / b;
		printf("몫은 %d 입니다.\n", res);
	}
	printf("0이 입력되어 나눌 수 없습니다.\n");
	return 0;
}