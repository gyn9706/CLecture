#include <stdio.h>

int main() {

	int nInput = 0;
	scanf_s("%d", &nInput);
	if (nInput >= 10) {
		if (nInput > 20)
			puts("20초과");
		else
			puts("20이하");
	}
	else {
		printf("10미만\n");
		if (nInput >= 5)
			puts("5이상");
		else
			puts("5미만");
	}

	return 0;
}