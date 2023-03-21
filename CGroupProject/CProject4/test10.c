#include <stdio.h>

int main() {

	int x, y;
	int n;

	scanf_s("%d", &n);

	for (y = 1; y <= n; y++) {
		for (x = 1; x <= y; x++) {
			printf("*\t");
		}
		printf("\n");
	}

	return 0;
}