#include <stdio.h>

int main() {

	int x, y;
	int n;

	scanf_s("%d", &n);

	for (y = 0; y<=n; y++) {
		for (x = 0; x < n-y; x++) {
			printf("*\t");
		}
		printf("\n");
	}

	return 0;
}