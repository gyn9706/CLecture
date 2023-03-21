#include <stdio.h>

int main() {
	int num;
	int total = 0;

	printf("0ºÎÅÍ num±îÁöÀÇ µ¡¼À, numÀº?");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		total = total + i;
	}

	printf("0ºÎÅÍ %d±îÁö µ¡¼À°á°ú : %d\n", num, total);

	return 0;
}