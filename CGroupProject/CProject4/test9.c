#include <stdio.h>

int main() {
	int n = 0;
	int sum = 0;

	printf("����� �Է��ϼ��� :");
	scanf_s("%d", &n);
	/*
	while (n > 0) {
		sum = sum + n;
		printf("���ݱ��� �Էµ� ���� ��: %d\n", sum);
		printf("����� �Է��ϼ��� :");
		scanf_s("%d", &n);
	}
	*/

	/*
	for (;n>0;) {
		sum += n; // ���� ���� ������ sum = sum + n;
		printf("���ݱ��� �Էµ� ���� ��: %d\n", sum);
		printf("����� �Է��ϼ��� :");
		scanf_s("%d", &n);
	}*/

	while (n > 0) {
		sum = 0;
		for (int i = 1; i <= n; i++) {
			sum += n;
			printf("���ݱ��� �Էµ� ���� ��: %d\n", sum);
			printf("����� �Է��ϼ��� :");
			scanf_s("%d", &n);
		}
	}
	
	return 0;
}


