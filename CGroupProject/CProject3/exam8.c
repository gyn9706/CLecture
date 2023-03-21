#include <stdio.h>

int main() {
	int nInput = 0;
	scanf_s("%d", &nInput);
	if (nInput >= 10) {
		puts("10이상");
	}else puts("10미만");

	return 0;

}