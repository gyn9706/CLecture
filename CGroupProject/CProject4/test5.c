#include <stdio.h>

int main() {
	int num;
	int total = 0;

	printf("0���� num������ ����, num��?");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		total = total + i;
	}

	printf("0���� %d���� ������� : %d\n", num, total);

	return 0;
}