#include <stdio.h>

int main() {
	int i;
	int age;
	int sum = 0;

	for (i = 1; i < 6; i++) {
		printf("%d. 나이를 입력하세요 :",i);
		scanf_s("%d", &age);
		sum = sum + age;
	}


	printf("다섯명의 평균 나이는 %.1lf입니다.\n", (double)sum/5);

	return 0;
}