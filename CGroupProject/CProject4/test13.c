#include <stdio.h>

int main() {
	int x, y;
	for (y = 0; y < 5; y++) {
		for (x = 0; x < 4; ++x) {
			printf("*\t");
			if (x == 2) break;
		}
		putchar('\n');
	}

	return 0;
}