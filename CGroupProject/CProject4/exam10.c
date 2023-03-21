#include <stdio.h>

int main() {
	//for문 사용해서 1부터 10까지의 합 구하기
	int sum = 0;
	
	for (int i = 1; i <= 10; i++) {
		sum = sum + i;
	}

	printf("1부터 10까지의 합은 : %d\n", sum);

	return 0;
}