#include <stdio.h>

int main() {
	int dan;
	int i=1;
	printf("�� ���� ���� �Է��ϼ��� :");
	scanf_s("%d", &dan);

	while (i<10) {
		printf("%d*%d=%d\n", dan, i, dan * i);
		i++;
	}

	return 0;
}