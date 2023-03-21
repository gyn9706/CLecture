#include <stdio.h>

int main() {
	int i=1;
	int sum = 0;

	//1부터 100까지 홀수들의 합 while문 사용

	while (i<=100) {
		if ((i % 2) == 1) {
			sum = sum+i;
		}
		i++;
	}
	printf("%d", sum);

	return 0;
}