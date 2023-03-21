#include <stdio.h>

int main() {
	int a, b;
	int i = 0, j = 0;

	printf("양수를 입력하세요 :");
	scanf_s("%d", &a); //13

	while (i < a) {
		printf("*");
		i++;
	}

	printf("\n");
	i = 0;
	b = a % 5;

	/*
	while (i < a) {
		printf("*");
		i++;
		if (i%5 == 0)
			printf("\n");
	}
	*/


	while (i <= (a / 5)){
			
		while (j < 5) {
			printf("*");
			j++;
		}
		printf("\n");
		i++;
		j = 0;

		if (i == (a / 5)) {
			while (j < b) {
				printf("*");
				j++;
			}
			break;
		}
	}
	

	return 0;
}