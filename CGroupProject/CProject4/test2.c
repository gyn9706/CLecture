#include <stdio.h>

int main() {
	int i=1;
	int sum = 0;

	//1���� 100���� Ȧ������ �� while�� ���

	while (i<=100) {
		if ((i % 2) == 1) {
			sum = sum+i;
		}
		i++;
	}
	printf("%d", sum);

	return 0;
}