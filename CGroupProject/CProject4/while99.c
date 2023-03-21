#include <stdio.h>

int main() {

	int i = 1;
	int j = 1;

	while (i < 10) {
		while (j < 10) {
			printf("%d*%d=%d\n", i, j, j * i);
			j++;
		}
		printf("\n");
		i++;
		j = 1;
	}
}