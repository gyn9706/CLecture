#include <stdio.h>

int main() {
	int i;
	int sum = 0;

	for (i = 1; i <= 100; i++) {
		if (i % 3 == 0)
			continue;
			sum += i;
		printf("누적된 값 : %d\n", sum);
	}
	

	return 0;
}