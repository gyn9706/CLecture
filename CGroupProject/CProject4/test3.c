#include <stdio.h>

int main() {
	int dan;
	int i=1;
	printf("한 개의 단을 입력하세요 :");
	scanf_s("%d", &dan);

	while (i<10) {
		printf("%d*%d=%d\n", dan, i, dan * i);
		i++;
	}

	return 0;
}