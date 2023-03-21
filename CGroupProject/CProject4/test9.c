#include <stdio.h>

int main() {
	int n = 0;
	int sum = 0;

	printf("양수를 입력하세요 :");
	scanf_s("%d", &n);
	/*
	while (n > 0) {
		sum = sum + n;
		printf("지금까지 입력된 값의 합: %d\n", sum);
		printf("양수를 입력하세요 :");
		scanf_s("%d", &n);
	}
	*/

	/*
	for (;n>0;) {
		sum += n; // 복합 대입 연산자 sum = sum + n;
		printf("지금까지 입력된 값의 합: %d\n", sum);
		printf("양수를 입력하세요 :");
		scanf_s("%d", &n);
	}*/

	while (n > 0) {
		sum = 0;
		for (int i = 1; i <= n; i++) {
			sum += n;
			printf("지금까지 입력된 값의 합: %d\n", sum);
			printf("양수를 입력하세요 :");
			scanf_s("%d", &n);
		}
	}
	
	return 0;
}


