#include <stdio.h>

int main() {
	int num;
	printf("start!\n");

	for (num = 0; num < 20; num++) {
		//2배수이거나 3배수 제외
		if (num % 2 == 0 || num % 3 == 0) continue;
		printf("%d\n", num);
	}
	printf("end!\n");

	return 0;
}