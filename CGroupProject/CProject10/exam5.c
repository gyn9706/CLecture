#include <stdio.h>

void increase();
static int num = 100;

int main() {
	int i;

	for (i = 0; i < 5; i++) {
		increase();
	}

	printf("%d\n", num);
	return 0;
}

void increase() {
	static int sum = 0; //☆중요☆ 정적변수
	sum++;
	printf("sum :%d\n", sum); //1, 2, 3, 4, 5
}